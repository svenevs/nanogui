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

.. _nanogui_usage_customization:

Customization
----------------------------------------------------------------------------------------

.. tip::

   The below documentation serves as a high-level reference.  If the below information
   is too terse, you are encouraged to refer to the unabridged
   :ref:`nanogui_example_customization`.

First we will examine how to derive from :class:`nanogui::Theme`, and then investigate
how to apply this derived class to widgets.

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

Where default icons for widgets are concerned (the above example shows how to change
:class:`nanogui::CheckBox`), there is an associated floating point scale factor for the
icon.  This is because the *codepoint* of the icons in the default Entypo+ icon font are
not all perfectly compatible.  When changing the default icons, you will likely want to
also adjust the default icon scaling.

.. _nanogui_usage_customization_default_fonts:

Customizing the Default Regular and Bold Fonts
****************************************************************************************

.. tip::

   See the :ref:`nanogui_including_custom_fonts` section for how to get custom fonts
   embedded in NanoGUI.

Assuming you want to use a custom font face, you need to load the font yourself.  When
NanoGUI builds, it uses ``bin2c`` to generate ``nanogui/resources.h`` and the associated
implementation file.  Assuming you requested ``customfont.ttf`` and
``customfont-bold.ttf``via ``NANOGUI_EXTRA_RESOURCES``, the method you want to call is
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

1. Loading the font memory is required before you can do something like
   ``new nanogui::Label(parent, "label text", "custom")``.  The second parameter is what
   the font name will be registered as, and the third parameter is the *basename* of the
   font you requested with ``NANOGUI_EXTRA_RESOURCES``.
2. Overriding :func:`nanogui::Theme::defaultFont` and
   :func:`nanogui::Theme::defaultBoldFont` are what signal to NanoGUI to use this newly
   loaded font.  **Note that the value returned here is exactly what is specified as the
   second parameter to** ``nanogui::createFontMem``.

.. _nanogui_usage_customization_default_icon_fonts:

Customizing the Default Icon Font
****************************************************************************************

.. tip::

   See the :ref:`nanogui_including_custom_icon_fonts` section for how to get custom icon
   fonts embedded in NanoGUI.

The process for custom icon fonts is nearly the same: load the font and override the
defaults.  Assuming you embedded ``customicons.ttf`` with
``NANOGUI_EXTRA_ICON_RESOURCES`` (meaning there was a corresponding ``customicons.h``
C++ header file defining the newly available icons):

.. code-block:: cpp

   #include <nanogui/theme.h>
   #include <nanogui/resources.h>   // provides nanogui::createFontMem
   #include <nanogui/customicons.h> // copied to nanogui/customicons for you

   class CustomTheme : public nanogui::Theme {
   public:
       /// The ``"customicons"`` icon font.  Overriding this method is what informs NanoGUI to use it.
       virtual std::string defaultIconFont() const override { return "customicons"; }

       CustomTheme(NVGcontext *ctx) : nanogui::Theme(ctx) {
           // Load the icons font
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

1. Loading the font memory is required before you can do something like
   ``new nanogui::Label(parent, nanogui::utf8(CUSTOMICONS_ICON_SOMETHING).data(), "customicons")``.  The second parameter is what the font name will be registered as, and the third
   parameter is the *basename* of the font you requested with
   ``NANOGUI_EXTRA_ICON_RESOURCES``.
2. Overriding :func:`nanogui::Theme::defaultIcon` is what signals to NanoGUI to use this
   newly loaded font.  **Note that the value returned here is exactly what is specified as the
   second parameter to** ``nanogui::createFontMem``.

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

.. tip::

   Nothing requires that you set the theme globally on a ``Screen`` instance.  You can
   apply the theme to one specific :class:`nanogui::Window`, for example.

.. note::

   When :func:`nanogui::Widget::setTheme` is called, the call is propagated to all
   children.  So you can just as easily create all of the widgets first, and call
   ``setTheme`` on the desired parent.

.. warning::

   Notice that the ``NVGcontext *`` is a member of ``Screen``
   (:member:`nanogui::Screen::mNVGContext`).  This means that if you are loading custom
   fonts **and** are creating more than one ``Screen``, you must instantiate the custom
   theme / load the fonts **for each** ``Screen`` instance created.  If doing this, you
   may find it more convenient to create a derived type of ``Screen`` and perform the
   theme creation / setting in the constructor.

.. nanogui_usage_customization_using_custom_fonts_without_themes:

Using Custom Fonts Without Themes
****************************************************************************************

Using a derived type of :class:`nanogui::Theme` (say ``CustomTheme``) and loading this
custom theme in a derived type of :class:`nanogui::Screen` is the easiest way to ensure
that custom fonts get loaded.  However, this is not a requirement.  The only requirement
is that **for each** ``NVGcontext`` (AKA each :class:`nanogui::Screen`), the font is
loaded.  You would do this over creating a custom theme and overriding the
:func:`nanogui::Theme::defaultFont` etc methods if you just want a custom font available
for some specific widget (e.g., a fancy :class:`nanogui::Label`).  As with the examples
for custom themes, you must load the custom font.  Doing so, though, statically
registers this font for use anywhere with the same ``NVGcontext``:

.. code-block:: cpp

   auto *screen = new nanogui::Screen(/* ... */);
   auto *window = new nanogui::Window(screen, "Window Title");

   // #include <nanogui/resources.h> for nanogui::createFontMem
   int fancyFont = nanogui::createFontMem(screen->nvgContext(), "fancy", "fancy.ttf");

   new nanogui::Label(window, "Label Text", "fancy");

In short: how you load the font depends on your application.  Just ensure that it is
loaded before you try and use it!
