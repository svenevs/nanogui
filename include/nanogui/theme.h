/*
    The text box widget was contributed by Christian Schueller.

    NanoGUI was developed by Wenzel Jakob <wenzel.jakob@epfl.ch>.
    The widget drawing code is based on the NanoVG demo application
    by Mikko Mononen.

    All rights reserved. Use of this source code is governed by a
    BSD-style license that can be found in the LICENSE.txt file.
*/
/**
 * \file nanogui/theme.h
 *
 * \brief Storage class for basic theme-related properties.
 */

#pragma once

#include <nanogui/common.h>
#include <nanogui/object.h>

NAMESPACE_BEGIN(nanogui)

/**
 * \class Theme theme.h nanogui/theme.h
 *
 * \brief Storage class for basic theme-related properties.
 */
class NANOGUI_EXPORT Theme : public Object {
public:
    Theme(NVGcontext *ctx);

    /* Fonts */
    /* NOTE: updating documentation for Theme::GlobalDefaultFonts?  Please also
     *       update the manual documentation in python/theme.cpp at the bottom.
     *       This class is not processed by docs/mkdoc_rst.py.
     */
    /**
     * \struct GlobalDefaultFonts theme.h nanogui/theme.h
     *
     * \brief The font face string identifiers that are always loaded / available
     *        for every Widget.
     *
     * In the (rare) event that a Widget does not have a Theme instance (this only
     * happens when a Widget is constructed without a parent), these values are also
     * used in the Widget font getter methods.
     *
     * \sa The *implementation* of \ref nanogui::Widget::font.
     */
    struct GlobalDefaultFonts {
        static const char *Normal;  ///< ``"sans"``: see \ref nanogui::Theme::mDefaultFont.
        static const char *Bold;    ///< ``"sans-bold"``: see \ref nanogui::Theme::mDefaultBoldFont.
        static const char *Mono;    ///< ``"mono"``: see \ref nanogui::Theme::mDefaultMonoFont.
        static const char *MonoBold;///< ``"mono-bold"``: see \ref nanogui::Theme::mDefaultMonoBoldFont.
        static const char *Icons;   ///< ``"icons"``: see \ref nanogui::Theme::mDefaultIconFont.
    };

    /// The default font face: ``"sans"`` from ``resources/Roboti-Regular.ttf``.
    std::string mDefaultFont;
    /// The default bold font face: ``"sans-bold"`` from ``resources/Roboto-Bold.ttf``.
    std::string mDefaultBoldFont;
    /**
     * \brief The default monospace font: ``"mono"`` from ``resources/RobotoMono-Regular.ttf``.
     *
     * Not used directly in NanoGUI, but loaded and available for all applications.
     */
    std::string mDefaultMonoFont;
    /**
     * \brief The default monospace bold font: ``"mono-bold"`` from ``resources/RobotoMono-Bold.ttf``.
     *
     * Not used directly in NanoGUI, but loaded and available for all applications.
     */
    std::string mDefaultMonoBoldFont;
    /// The default icon font face: ``"icons"`` from ``resources/entypo.ttf``.
    std::string mDefaultIconFont;

    /**
     * \brief The font memory identifier loaded for \ref mDefaultFont.
     *
     * Most applications should not have a need to use this variable.  Its value should
     * **never** be reassigned.
     */
    int mFontNormal;
    /**
     * \brief The font memory identifier loaded for \ref mDefaultBoldFont.
     *
     * Most applications should not have a need to use this variable.  Its value should
     * **never** be reassigned.
     */
    int mFontBold;
    /**
     * \brief The font memory identifier loaded for \ref mDefaultMonoFont.
     *
     * Most applications should not have a need to use this variable.  Its value should
     * **never** be reassigned.
     */
    int mFontMonoNormal;
    /**
     * \brief The font memory identifier loaded for \ref mDefaultMonoBoldFont.
     *
     * Most applications should not have a need to use this variable.  Its value should
     * **never** be reassigned.
     */
    int mFontMonoBold;
    /**
     * \brief The font memory identifier loaded for \ref mDefaultIconFont.
     *
     * Most applications should not have a need to use this variable.  Its value should
     * **never** be reassigned.
     */
    int mFontIcons;
    /**
     * The amount of scaling that is applied to each icon to fit the size of
     * NanoGUI widgets.  The default value is ``0.77f``, setting to e.g. higher
     * than ``1.0f`` is generally discouraged.
     */
    float mIconScale;

    /* Spacing-related parameters */
    /// The font size for all widgets other than buttons and textboxes (default: `` 16``).
    float mStandardFontSize;
    /// The font size for buttons (default: ``20``).
    float mButtonFontSize;
    /// The font size for text boxes (default: ``20``).
    float mTextBoxFontSize;
    /// The font size for Window captions (default: ``18``).
    float mWindowFontSize;
    /// Rounding radius for Window widget corners (default: ``2``).
    int mWindowCornerRadius;
    /// Default size of Window widget titles (default: ``30``).
    int mWindowHeaderHeight;
    /// Size of drop shadow rendered behind the Window widgets (default: ``10``).
    int mWindowDropShadowSize;
    /// Rounding radius for Button (and derived types) widgets (default: ``2``).
    int mButtonCornerRadius;
    /// The border width for TabHeader widgets (default: ``0.75f``).
    float mTabBorderWidth;
    /// The inner margin on a TabHeader widget (default: ``5``).
    int mTabInnerMargin;
    /// The minimum size for buttons on a TabHeader widget (default: ``20``).
    int mTabMinButtonWidth;
    /// The maximum size for buttons on a TabHeader widget (default: ``160``).
    int mTabMaxButtonWidth;
    /// Used to help specify what lies "in bound" for a TabHeader widget (default: ``20``).
    int mTabControlWidth;
    /// The amount of horizontal padding for a TabHeader widget (default: ``10``).
    int mTabButtonHorizontalPadding;
    /// The amount of vertical padding for a TabHeader widget (default: ``2``).
    int mTabButtonVerticalPadding;

    /* Generic colors */
    /**
     * The color of the drop shadow drawn behind widgets
     * (default: intensity=``0``, alpha=``128``; see \ref nanogui::Color::Color(int,int)).
     */
    Color mDropShadow;
    /**
     * The transparency color
     * (default: intensity=``0``, alpha=``0``; see \ref nanogui::Color::Color(int,int)).
     */
    Color mTransparent;
    /**
     * The dark border color
     * (default: intensity=``29``, alpha=``255``; see \ref nanogui::Color::Color(int,int)).
     */
    Color mBorderDark;
    /**
     * The light border color
     * (default: intensity=``92``, alpha=``255``; see \ref nanogui::Color::Color(int,int)).
     */
    Color mBorderLight;
    /**
     * The medium border color
     * (default: intensity=``35``, alpha=``255``; see \ref nanogui::Color::Color(int,int)).
     */
    Color mBorderMedium;
    /**
     * The text color
     * (default: intensity=``255``, alpha=``160``; see \ref nanogui::Color::Color(int,int)).
     */
    Color mTextColor;
    /**
     * The disable dtext color
     * (default: intensity=``255``, alpha=``80``; see \ref nanogui::Color::Color(int,int)).
     */
    Color mDisabledTextColor;
    /**
     * The text shadow color
     * (default: intensity=``0``, alpha=``160``; see \ref nanogui::Color::Color(int,int)).
     */
    Color mTextColorShadow;
    /// The icon color (default: \ref nanogui::Theme::mTextColor).
    Color mIconColor;

    /* Button colors */
    /**
     * The top gradient color for buttons in focus
     * (default: intensity=``64``, alpha=``255``; see \ref nanogui::Color::Color(int,int)).
     */
    Color mButtonGradientTopFocused;
    /**
     * The bottom gradient color for buttons in focus
     * (default: intensity=``48``, alpha=``255``; see \ref nanogui::Color::Color(int,int)).
     */
    Color mButtonGradientBotFocused;
    /**
     * The top gradient color for buttons not in focus
     * (default: intensity=``74``, alpha=``255``; see \ref nanogui::Color::Color(int,int)).
     */
    Color mButtonGradientTopUnfocused;
    /**
     * The bottom gradient color for buttons not in focus
     * (default: intensity=``58``, alpha=``255``; see \ref nanogui::Color::Color(int,int)).
     */
    Color mButtonGradientBotUnfocused;
    /**
     * The top gradient color for buttons currently pushed
     * (default: intensity=``41``, alpha=``255``; see \ref nanogui::Color::Color(int,int)).
     */
    Color mButtonGradientTopPushed;
    /**
     * The bottom gradient color for buttons currently pushed
     * (default: intensity=``29``, alpha=``255``; see \ref nanogui::Color::Color(int,int)).
     */
    Color mButtonGradientBotPushed;

    /**
     * \brief The maximum value for tooltip background opacity. Default: ``0.8f``.
     *
     * Lower values result in more transparent tooltips, higher values result in less
     * transparent tooltips.  This represents an OpenGL ``alpha`` value, meaning
     * ``1.0f`` (or higher) will result in no transparency.
     *
     * \rst
     * In the implementation of :func:`Screen::drawWidgets <nanogui::Screen::drawWidgets>`,
     * this variable is used as
     *
     * .. code-block:: cpp
     *
     *    float opacity = std::min(
     *        widget->theme()->mTooltipOpacity, 2.0f * (static_cast<float>(elapsed) - 0.5f)
     *    );
     *    nvgGlobalAlpha(mNVGContext, opacity);
     *
     * These mechanics allow for the tooltip to fade-in.  ``elapsed`` contains the
     * amount of time the mouse has been hovering over the Widget whose tooltip is being
     * displayed.  After subtraction and scaling, when the mouse hover begins the
     * calculation will result in smaller values (e.g., starting around ``0.05f``).
     * After enough time, ``mTooltipOpacity`` will always be the smaller value, making
     * ``mTooltipOpacity`` the *maximum* alpha channel value for the tooltip.
     * \endrst
     */
    float mTooltipOpacity;
    /**
     * The background color to use for drawing \ref nanogui::Widget::mTooltip
     * (default: intensity=``0``, alpha=``255``; see \ref nanogui::Color::Color(int,int)).
     */
    Color mTooltipBackgroundColor;
    /**
     * The text color to use for drawing \ref nanogui::Widget::mTooltip
     * (default: intensity=``255``, alpha=``255``; see \ref nanogui::Color::Color(int,int)).
     */
    Color mTooltipTextColor;

    /* Window colors */
    /**
     * The fill color for a Window that is not in focus
     * (default: intensity=``43``, alpha=``230``; see \ref nanogui::Color::Color(int,int)).
     */
    Color mWindowFillUnfocused;
    /**
     * The fill color for a Window that is in focus
     * (default: intensity=``45``, alpha=``230``; see \ref nanogui::Color::Color(int,int)).
     */
    Color mWindowFillFocused;
    /**
     * The title color for a Window that is not in focus
     * (default: intensity=``220``, alpha=``160``; see \ref nanogui::Color::Color(int,int)).
     */
    Color mWindowTitleUnfocused;
    /**
     * The title color for a Window that is in focus
     * (default: intensity=``255``, alpha=``190``; see \ref nanogui::Color::Color(int,int)).
     */
    Color mWindowTitleFocused;

    /**
     * The top gradient color for Window headings
     * (default: \ref nanogui::Theme::mButtonGradientTopUnfocused).
     */
    Color mWindowHeaderGradientTop;
    /**
     * The bottom gradient color for Window headings
     * (default: \ref nanogui::Theme::mButtonGradientBotUnfocused).
     */
    Color mWindowHeaderGradientBot;
    /// The Window header top separation color (default: \ref nanogui::Theme::mBorderLight).
    Color mWindowHeaderSepTop;
    /// The Window header bottom separation color (default: \ref nanogui::Theme::mBorderDark).
    Color mWindowHeaderSepBot;

    /**
     * The popup window color
     * (default: intensity=``50``, alpha=``255``; see \ref nanogui::Color::Color(int,int))).
     */
    Color mWindowPopup;
    /**
     * The transparent popup window color
     * (default: intensity=``50``, alpha=``0``; see \ref nanogui::Color::Color(int,int))).
     */
    Color mWindowPopupTransparent;

    /// Icon to use for CheckBox widgets (default: ``ENTYPO_ICON_CHECK``).
    int mCheckBoxIcon;
    /**
     * For the default theme, ``1.2f`` is used in conjunction with ``ENTYPO_ICON_CHECK``.
     * If overriding, \ref mCheckBoxIcon, make sure \ref mCheckBoxIconExtraScale is set
     * appropriately for the new icon choice.
     *
     * This method exists for the rare occurence that a Theme instance is not available
     * upon construction.
     *
     * \sa Widget::mIconExtraScale
     */
    static float defaultCheckBoxIconExtraScale() { return 1.2f; }
    /// Extra scaling needed for \ref mCheckBoxIcon (default: \ref defaultCheckBoxIconExtraScale).
    float mCheckBoxIconExtraScale;
    /// Icon to use for informational MessageDialog widgets (default: ``ENTYPO_ICON_INFO_WITH_CIRCLE``).
    int mMessageInformationIcon;
    /// Icon to use for interrogative MessageDialog widgets (default: ``ENTYPO_ICON_HELP_WITH_CIRCLE``).
    int mMessageQuestionIcon;
    /// Icon to use for warning MessageDialog widgets (default: ``ENTYPO_ICON_WARNING``).
    int mMessageWarningIcon;
    /// Icon to use on MessageDialog alt button (default: ``ENTYPO_ICON_CIRCLE_WITH_CROSS``).
    int mMessageAltButtonIcon;
    /// Icon to use on MessageDialog primary button (default: ``ENTYPO_ICON_CHECK``).
    int mMessagePrimaryButtonIcon;
    /// Icon to use for PopupButton widgets opening to the right (default: ``ENTYPO_ICON_CHEVRON_RIGHT``).
    int mPopupChevronRightIcon;
    /// Icon to use for PopupButton widgets opening to the left (default: ``ENTYPO_ICON_CHEVRON_LEFT``).
    int mPopupChevronLeftIcon;
    /**
     * For the default theme, ``0.8f`` is used in conjunction with ``ENTYPO_ICON_CHEVRON_{LEFT,RIGHT}``.
     * If overriding, \ref mPopupChevronRightIcon and \ref mPopupChevronLeftIcon, make sure
     * \ref mPopupIconExtraScale is set appropriately for the new icon choice.
     *
     * This method exists for the rare occurence that a Theme instance is not available
     * upon construction.
     *
     * \rst
     * .. note::
     *
     *    Observe that there is only one scale variable (instead of one for left and
     *    right).  This means that you need to choose an icon pair for left / right
     *    that are the same original size.
     * \endrst
     *
     * \sa Widget::mIconExtraScale
     */
    static float defaultPopupIconExtraScale() { return 0.8f; }
    /// Extra scaling needed for \ref mPopupChevronRightIcon and \ref mPopupChevronLeftIcon (default: \ref defaultPopupIconExtraScale).
    float mPopupIconExtraScale;
    /// Icon to indicate hidden tabs to the left on a TabHeader (default: ``ENTYPO_ICON_ARROW_BOLD_LEFT``).
    int mTabHeaderLeftIcon;
    /// Icon to indicate hidden tabs to the right on a TabHeader (default: ``ENTYPO_ICON_ARROW_BOLD_RIGHT``).
    int mTabHeaderRightIcon;
    /// Icon to use when a TextBox has an up toggle (e.g. IntBox) (default: ``ENTYPO_ICON_CHEVRON_UP``).
    int mTextBoxUpIcon;
    /// Icon to use when a TextBox has a down toggle (e.g. IntBox) (default: ``ENTYPO_ICON_CHEVRON_DOWN``).
    int mTextBoxDownIcon;
    /**
     * For the default theme, ``0.8f`` is used in conjunction with ``ENTYPO_ICON_CHEVRON_{UP,DOWN}``.
     * If overriding, \ref mTextBoxUpIcon and \ref mTextBoxDownIcon, make sure
     * \ref mTextBoxIconExtraScale is set appropriately for the new icon choice.
     *
     * This method exists for the rare occurence that a Theme instance is not available
     * upon construction.
     *
     * \rst
     * .. note::
     *
     *    Observe that there is only one scale variable (instead of one for up and
     *    down).  This means that you need to choose an icon pair for up / down
     *    that are the same original size.
     * \endrst
     *
     * \sa Widget::mIconExtraScale
     */
    static float defaultTextBoxIconExtraScale() { return 0.8f; }
    /// Extra scaling needed for \ref mTextBoxUpIcon and \ref mTextBoxDownIcon (default: \ref defaultTextBoxIconExtraScale).
    float mTextBoxIconExtraScale;

protected:
    /// Default destructor does nothing; allows for inheritance.
    virtual ~Theme() { };

public:
    EIGEN_MAKE_ALIGNED_OPERATOR_NEW
};

NAMESPACE_END(nanogui)
