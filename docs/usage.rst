Usage
========================================================================================

.. _nanogui_usage_cpp:

C++
----------------------------------------------------------------------------------------

There are effectively two ways that you can use NanoGUI in C++: have NanoGUI initialize
and manage the OpenGL context (and GLFW), or you do it manually.

1. If you are letting NanoGUI take over, you **must** call :ref:`function_nanogui__init`
   before trying to do anything else.  If you are managing OpenGL / GLFW yourself, make
   sure you **avoid** calling this method.

2. Create an instance of :ref:`class_nanogui__Screen` (or a derivative class you have
   written).

   - NanoGUI managed OpenGL: call the explicit constructor.
   - Self managed OpenGL: call the empty constructor.
       - You must call the :func:`nanogui::Screen::initialize` method.

3. Add any Widgets, Buttons, etc. you want to the screen instance, and call the
   :func:`nanogui::Screen::setVisible` and :func:`nanogui::Screen::performLayout`
   methods of your instance.

4. Now that everything is ready, call :ref:`function_nanogui__mainloop`.

5. When all windows are closed, this function will exit, and you should follow it up
   with a call to :ref:`function_nanogui__shutdown`.

:NanoGUI Managed OpenGL / GLFW:
    Refer to :ref:`nanogui_example_2` for a concise example of what that all looks like.

:Self Managed OpenGL / GLFW:
    Refer to :ref:`nanogui_example_3` for an as concise as possible example of what you
    will need to do to get the :ref:`class_nanogui__Screen` to work.

.. _nanogui_usage_python:

Python
----------------------------------------------------------------------------------------

The Python interface is very similar to the C++ API.  When you build NanoGUI with CMake,
a ``python`` folder is created with the library you ``import nanogui`` from.  Though
there are implementation details that differ greatly, the documentation and build
process for the Python side is roughly the same.  Refer to the
:ref:`nanogui_example_programs` and compare the source code for the two.

:ref:`nanogui_example_3` highlights the more notable differences between the APIs.
Specifically, that managing GLFW from Python has no meaning, as well as the main loop
for Python can easily be detached.

.. _nanogui_usage_how_fonts_are_used:

How Fonts are Used
----------------------------------------------------------------------------------------

There are two ways in which the font face for a widget that draws text can be set:

1. When the widget is created or the theme is changed,
   :func:`Theme::defaultFont <nanogui::Theme::defaultFont>` for regular text, and
   :func:`Theme::defaultBoldFont <nanogui::Theme::defaultBoldFont>` for bold text, are
   queried.  These will be ``"sans"`` and ``"sans-bold"``, respectively.  The
   :func:`Widget::Widget <nanogui::Widget::Widget>` constructor documentation explains
   when regular vs bold fonts will be used.

2. A user explicitly requests a specific font face.  Depending on the widget, this can
   either be accomplished by calling :func:`Widget::setFont <nanogui::Widget::setFont>`,
   or possibly when creating the widget (see :class:`Label <nanogui::Label>`, the
   constructor allows an explicit font face).  When a font face is explicitly provided,
   this will not be overridden in when
   :func:`Widget::setTheme <nanogui::Widget::setTheme>` is called.

Where font sizes are concerned, it depends on the widget.  Often times
:member:`Theme::mStandardFontSize <nanogui::Theme::mStandardFontSize>` will be used, but
there is also the corresponding
:func:`Widget::setFontSize <nanogui::Widget::setFontSize>` function to set it explicitly
for a specific widget.

.. _nanogui_usage_how_icons_are_used:

How Icons are Used
----------------------------------------------------------------------------------------

Icons are specified as integers, and can either be an image or a font icon.  Not every
widget uses / supports icons, but when it does the functions
:func:`nanogui::nvgIsImageIcon` and its counterpart :func:`nanogui::nvgIsFontIcon` are
used to determine how the icon will be rendered.  There can be a maximum of ``1024``
image icons loaded, all other integer values are assumed to be font icons.

The :class:`Button <nanogui::Button>` is an example of a class that supports icons,
either via the constructor or by :func:`Button::setIcon <nanogui::Button::setIcon>`.

.. _nanogui_usage_image_icons:

Image Icons
****************************************************************************************

To load an image icon, use the underlying NanoVG library (``#include <nanovg.h>``).  The
function you will likely want to use:

.. code-block:: cpp

   // Creates image by loading it from the disk from specified file name.
   // Returns handle to the image.
   extern NVG_EXPORT int nvgCreateImage(NVGcontext* ctx, const char* filename, int imageFlags);

You can obtain the ``NVGcontext *`` specific to your instance of
:class:`Screen <nanogui::Screen>` via either
:func:`Screen::nvgContext <nanogui::Screen::nvgContext>` or
:member:`Screen::mNVGContext <nanogui::Screen::mNVGContext>`.  Assuming the return value
is not ``-1``, you can then use the integer return value as the icon for a given widget.

.. tip::

   If all of the images you want to load are in the same directory, you can use the
   :func:`nanogui::loadImageDirectory` function as well.


.. _nanogui_usage_font_icons:

Font Icons
****************************************************************************************

The default icon font ``"icons"`` (see :ref:`file_nanogui_entypo.h`) defines numerous
icons available for you to use.  If you are embedding custom icon fonts (see
:ref:`nanogui_usage_customization_default_icon_fonts`) but are **not** setting this to
be the default icon font (via overriding
:func:`Theme::defaultIconFont <nanogui::Theme::defaultIconFont>`), make sure you call
:func:`Widget::setIconFont <nanogui::Widget::setIconFont>`.  Otherwise, the default
``"icons"`` font will be used, either producing a non-existent or undesired icon to
display.

.. tip::

   Using :class:`Label <nanogui::Label>`?  You want to specify the font, rather than
   the icon font.  You can create a label with a *font* icon by doing something like

   .. code-block:: cpp

      new Label(
         parent,
         // nanogui::utf8 accommodates for font icons being in the "private use area"
         std::string(nanogui::utf8(ENTYPO_ICON_CHECK).data()),
         // this sets Widget::mFont, not Widget::mIconFont
         "icons"
      );

.. _nanogui_usage_customization:

Customization
----------------------------------------------------------------------------------------

The following sections describe how to change the default colors and fonts with NanoGUI.
Where custom fonts are concerned, **fonts must be loaded for each NanoVG context
created**, and each :class:`nanogui::Screen` has its on ``NVGcontext``.  Once a font
is loaded, though, it can be used by any child of this :class:`nanogui::Screen`
instance.

.. _nanogui_usage_customization_loading_custom_fonts:

Loading Custom Fonts
****************************************************************************************

.. tip::

   See the :ref:`nanogui_including_custom_fonts` section for how to get custom fonts
   embedded in NanoGUI.

To load a custom font, you call the ``nanogui::createFontMem`` method which is available
via ``#include <nanogui/resources.h>``.  This resources file is generated from CMake
(via ``bin2c``).

The parameters to the function:

1. The ``NVGcontext *`` associated with a :class:`nanogui::Screen` instance.
2. The name you want to register the font as.
3. The "basename" of the font file that was embedded.  If you are unsure, search for
   ``__nanogui_font_map`` in the generated ``nanogui/resources.cpp`` in your *build*
   directory (``find . -name resources.cpp``).  The basename recorded will be the
   string key in that map.

.. code-block:: cpp

   auto *screen = new nanogui::Screen(/* ... */);
   auto *window = new nanogui::Window(screen, "Window Title");

   int fancyFont = nanogui::createFontMem(screen->nvgContext(), "fancy", "fancy.ttf");
   // -1 signals error loading the font
   if (fancyFont == -1)
       throw std::runtime_error("Could not load 'fancy.ttf'!");

   new nanogui::Label(window, "Label Text", "fancy");

.. note::

   Using a derived type of :class:`nanogui::Theme` (say ``CustomTheme``) and loading
   this custom theme in a derived type of :class:`nanogui::Screen` is the easiest way to
   ensure that custom fonts get loaded for the underlying ``NVGcontext``.  However, this
   is not a requirement.

.. _nanogui_usage_customization_colors_icons:

Customizing the Theme Colors and Default Icons
****************************************************************************************

Customizing the default colors and / or icons of :class:`nanogui::Theme` is
straightforward, simply derive the class and overwrite any values you desire in your
derived class constructor:

.. code-block:: cpp

   #include <nanogui/theme.h>
   #include <nanogui/entypo.h> // the default icons font

   class CustomTheme : public nanogui::Theme {
   public:
       CustomTheme(NVGcontext *ctx) : nanogui::Theme(ctx) {
           using nanogui::Color;
           // ... change any colors you want ...
           mBorderDark = Color(111, 255);
           // ... change any default icons you want ...
           // default: ``ENTYPO_ICON_CHECK``
           mCheckBoxIcon = ENTYPO_ICON_CROSS;
           mCheckBoxIconExtraScale = 1.3f;
       }
   };

All of the member variables in :class:`nanogui::Theme` are ``public``, so you can also
modify them directly (obtain the theme from
:func:`Widget::theme <nanogui::Widget::theme>`).

Where default icons for widgets are concerned (the above example shows how to change
:class:`nanogui::CheckBox`), there is an associated floating point scale factor for the
icon.  This is because the *codepoint* of the icons in the default Entypo+ icon font are
not all perfectly compatible.  When changing the default icons, you will likely want to
also adjust the default icon scaling.

.. note::

   At this time, there are three widgets that have custom icon scaling:

   1. :class:`CheckBox <nanogui::CheckBox>` (via :member:`Theme::mCheckBoxIconExtraScale <nanogui::Theme::mCheckBoxIconExtraScale>`).
   2. :class:`PopupButton <nanogui::PopupButton>` (via :member:`Theme::mPopupIconExtraScale <nanogui::Theme::mPopupIconExtraScale>`).
   3. :class:`TextBox <nanogui::TextBox>` (via :member:`Theme::mTextBoxIconExtraScale <nanogui::Theme::mTextBoxIconExtraScale>`).


.. _nanogui_usage_customization_default_fonts:

Customizing the Default Regular and Bold Fonts
****************************************************************************************

.. tip::

   See the :ref:`nanogui_including_custom_fonts` section for how to get custom fonts
   embedded in NanoGUI.

Assuming you want to use a custom font face, you need to load the font yourself.  When
NanoGUI builds, it uses ``bin2c`` to generate ``nanogui/resources.h`` and the associated
implementation file.  Assuming you requested ``customfont.ttf`` and
``customfont-bold.ttf`` via ``NANOGUI_EXTRA_RESOURCES``, the method you want to call is
``nanogui::createFontMem``.

.. code-block:: cpp

   #include <nanogui/theme.h>
   #include <nanogui/resources.h> // provides nanogui::createFontMem

   class CustomTheme : public nanogui::Theme {
   public:
       /// The ``"custom"`` font.  Overriding this method is what informs NanoGUI to use it.
       virtual std::string defaultFont() const override { return "custom"; }

       /// The ``"custom-bold"`` font.  Overriding this method is what informs NanoGUI to use it.
       virtual std::string defaultBoldFont() const override { return "custom-bold"; }

       CustomTheme(NVGcontext *ctx) : nanogui::Theme(ctx) {
           // Load the custom fonts.
           mCustomFont     = nanogui::createFontMem(ctx, "custom", "customfont.ttf");
           mCustomFontBold = nanogui::createFontMem(ctx, "custom-bold", "customfont-bold.ttf");
           // -1 means error loading font
           if (mCustomFont == -1 || mCustomFontBold == -1)
               throw std::runtime_error("Could not load customfont!");
       }

   protected:
       int mCustomFont = -1;
       int mCustomFontBold = 1-1;
   };

Overriding :func:`Theme::defaultFont <nanogui::Theme::defaultFont>` and
:func:`Theme::defaultBoldFont <nanogui::Theme::defaultBoldFont>` are what signal to
NanoGUI to use this newly loaded font.  **Note that the value returned here is exactly
what is specified as the second parameter to** ``nanogui::createFontMem``.

.. note::

   Changing these sets the default fonts **globally**.  To change the font face for one
   specific widget, call :func:`Widget::setFont <nanogui::Widget::setFont>`.

.. tip::

   See :ref:`nanogui_usage_customization_loading_custom_fonts` for more information on
   the ``nanogui::createFontMem`` method.


.. _nanogui_usage_customization_default_icon_fonts:

Customizing the Default Icon Font
****************************************************************************************

.. tip::

   See the :ref:`nanogui_including_custom_icon_fonts` section for how to get custom icon
   fonts embedded in NanoGUI.

.. warning::

   The default icon font ``"icons"`` (see :ref:`file_nanogui_entypo.h`) has all
   characters defined in the
   `private use area range <http://jrgraphix.net/r/Unicode/E000-F8FF>`_.  This is not
   a hard requirement, but the values must be **greater** than ``1024`` in order for
   :func:`nanogui::nvgIsImageIcon` and :func:`nanogui::nvgIsFontIcon` to behave
   appropriately.

   See :ref:`nanogui_usage_how_icons_are_used` for more information.

The process for custom icon fonts is nearly the same: load the font and override the
defaults.  Assuming you embedded ``customicons.ttf`` with
``NANOGUI_EXTRA_ICON_RESOURCES`` (meaning there was a corresponding ``customicons.h``
C++ header file defining the newly available icons):

.. code-block:: cpp

   #include <nanogui/theme.h>
   #include <nanogui/resources.h>   // provides nanogui::createFontMem
   #include <nanogui/customicons.h> // copied to nanogui/customicons.h for you

   class CustomTheme : public nanogui::Theme {
   public:
       /// The ``"customicons"`` icon font.  Overriding this method is what informs NanoGUI to use it.
       virtual std::string defaultIconFont() const override { return "customicons"; }

       CustomTheme(NVGcontext *ctx) : nanogui::Theme(ctx) {
           // Load the customicons font
           mCustomIconsFont = nanogui::createFontMem(ctx, "customicons", "customicons.ttf");
           // -1 means error loading font
           if (mCustomIconsFont == -1)
               throw std::runtime_error("Could not load customicons font!");

           // TODO: overwrite *ALL* icon variables
           // mCheckBoxIcon = CUSTOMICONS_ICON_SOMETHING;
           // mCheckBoxIconExtraScale = ???;
       };

   protected:
       int mCustomIconsFont = -1;
   };

Overriding :func:`Theme::defaultIconFont <nanogui::Theme::defaultIconFont>` is what
signals to NanoGUI to use this newly loaded font.  **Note that the value returned here
is exactly what is specified as the second parameter to** ``nanogui::createFontMem``.

.. note::

   Changing this sets the default fonts **globally**.  To change the icon font face for
   one specific widget, call :func:`Widget::setIconFont <nanogui::Widget::setIconFont>`.

.. tip::

   See :ref:`nanogui_usage_customization_loading_custom_fonts` for more information on
   the ``nanogui::createFontMem`` method.

.. _nanogui_usage_using_custom_themes:

Using Custom Themes
****************************************************************************************

Now that we have some derived ``CustomTheme`` class, we want to use it.  First, let us
understand how :class:`nanogui::Theme` is used.

.. code-block:: cpp

   auto *screen = new nanogui::Screen(/* ... */);
   auto *window = new nanogui::Window(window, "Window Title");
   window->setLayout(new nanogui::GroupLayout());
   new nanogui::Label(window, "label text");

When :class:`nanogui::Screen` is initialized (:func:`nanogui::Screen::initialize`), the
:class:`nanogui::Theme` is created.  Every :class:`nanogui::Widget` (for which
``Screen`` is a derived type of) contains a reference to a ``Theme`` instance in
:member:`nanogui::Widget::mTheme`.  So when ``window`` and the label are created above,
the same ``Theme`` instance now has three separate widgets that refer to it.

To apply a custom theme globally:

.. code-block:: cpp

   auto *screen = new nanogui::Screen(/* ... */);
   nanogui::ref<CustomTheme> theme = new CustomTheme(screen->nvgContext());
   screen->setTheme(theme);
   auto *window = new nanogui::Window(window, "Window Title");
   // add remaining widgets

Since the ``Theme`` is always inherited from the parent, all newly created children of
``screen`` will contain a reference to the ``CustomTheme`` instance.

.. note::

   Nothing requires that you set the theme globally on a ``Screen`` instance.  You can
   apply the theme to one specific :class:`nanogui::Window`, for example.

.. note::

   When :func:`nanogui::Widget::setTheme` is called, the call is propagated to all
   children.  So you can just as easily create all of the widgets first, and call
   ``setTheme`` on the desired parent.

.. tip::

   See :ref:`nanogui_usage_customization_loading_custom_fonts` for more information on
   the ``nanogui::createFontMem`` method.
