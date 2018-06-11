#include "python.h"

class PyTheme : public Theme {
public:
    using Theme::Theme;
};

void register_theme(py::module &m) {
    py::class_<Theme, ref<Theme>, PyTheme> theme(m, "Theme", D(Theme));
    theme.def(py::init<NVGcontext *>(), D(Theme, Theme))
         .def_readwrite("mDefaultFont", &Theme::mDefaultFont, D(Theme, mDefaultFont))
         .def_readwrite("mDefaultBoldFont", &Theme::mDefaultBoldFont, D(Theme, mDefaultBoldFont))
         .def_readwrite("mDefaultMonoFont", &Theme::mDefaultMonoFont, D(Theme, mDefaultMonoFont))
         .def_readwrite("mDefaultMonoBoldFont", &Theme::mDefaultMonoBoldFont, D(Theme, mDefaultMonoBoldFont))
         .def_readwrite("mDefaultIconFont", &Theme::mDefaultIconFont, D(Theme, mDefaultIconFont))
         .def_readwrite("mIconScale", &Theme::mIconScale, D(Theme, mIconScale))
         .def_readwrite("mStandardFontSize", &Theme::mStandardFontSize, D(Theme, mStandardFontSize))
         .def_readwrite("mButtonFontSize", &Theme::mButtonFontSize, D(Theme, mButtonFontSize))
         .def_readwrite("mTextBoxFontSize", &Theme::mTextBoxFontSize, D(Theme, mTextBoxFontSize))
         .def_readwrite("mWindowFontSize", &Theme::mWindowFontSize, D(Theme, mWindowFontSize))
         .def_readwrite("mWindowCornerRadius", &Theme::mWindowCornerRadius, D(Theme, mWindowCornerRadius))
         .def_readwrite("mWindowHeaderHeight", &Theme::mWindowHeaderHeight, D(Theme, mWindowHeaderHeight))
         .def_readwrite("mWindowDropShadowSize", &Theme::mWindowDropShadowSize, D(Theme, mWindowDropShadowSize))
         .def_readwrite("mButtonCornerRadius", &Theme::mButtonCornerRadius, D(Theme, mButtonCornerRadius))
         .def_readwrite("mTabBorderWidth", &Theme::mTabBorderWidth, D(Theme, mTabBorderWidth))
         .def_readwrite("mTabInnerMargin", &Theme::mTabInnerMargin, D(Theme, mTabInnerMargin))
         .def_readwrite("mTabMinButtonWidth", &Theme::mTabMinButtonWidth, D(Theme, mTabMinButtonWidth))
         .def_readwrite("mTabMaxButtonWidth", &Theme::mTabMaxButtonWidth, D(Theme, mTabMaxButtonWidth))
         .def_readwrite("mTabControlWidth", &Theme::mTabControlWidth, D(Theme, mTabControlWidth))
         .def_readwrite("mTabButtonHorizontalPadding", &Theme::mTabButtonHorizontalPadding, D(Theme, mTabButtonHorizontalPadding))
         .def_readwrite("mTabButtonVerticalPadding", &Theme::mTabButtonVerticalPadding, D(Theme, mTabButtonVerticalPadding))
         .def_readwrite("mDropShadow", &Theme::mDropShadow, D(Theme, mDropShadow))
         .def_readwrite("mTransparent", &Theme::mTransparent, D(Theme, mTransparent))
         .def_readwrite("mBorderDark", &Theme::mBorderDark, D(Theme, mBorderDark))
         .def_readwrite("mBorderLight", &Theme::mBorderLight, D(Theme, mBorderLight))
         .def_readwrite("mBorderMedium", &Theme::mBorderMedium, D(Theme, mBorderMedium))
         .def_readwrite("mTextColor", &Theme::mTextColor, D(Theme, mTextColor))
         .def_readwrite("mDisabledTextColor", &Theme::mDisabledTextColor, D(Theme, mDisabledTextColor))
         .def_readwrite("mTextColorShadow", &Theme::mTextColorShadow, D(Theme, mTextColorShadow))
         .def_readwrite("mIconColor", &Theme::mIconColor, D(Theme, mIconColor))
         .def_readwrite("mButtonGradientTopFocused", &Theme::mButtonGradientTopFocused, D(Theme, mButtonGradientTopFocused))
         .def_readwrite("mButtonGradientBotFocused", &Theme::mButtonGradientBotFocused, D(Theme, mButtonGradientBotFocused))
         .def_readwrite("mButtonGradientTopUnfocused", &Theme::mButtonGradientTopUnfocused, D(Theme, mButtonGradientTopUnfocused))
         .def_readwrite("mButtonGradientBotUnfocused", &Theme::mButtonGradientBotUnfocused, D(Theme, mButtonGradientBotUnfocused))
         .def_readwrite("mButtonGradientTopPushed", &Theme::mButtonGradientTopPushed, D(Theme, mButtonGradientTopPushed))
         .def_readwrite("mButtonGradientBotPushed", &Theme::mButtonGradientBotPushed, D(Theme, mButtonGradientBotPushed))
         .def_readwrite("mTooltipOpacity", &Theme::mTooltipOpacity, D(Theme, mTooltipOpacity))
         .def_readwrite("mTooltipBackgroundColor", &Theme::mTooltipBackgroundColor, D(Theme, mTooltipBackgroundColor))
         .def_readwrite("mTooltipTextColor", &Theme::mTooltipTextColor, D(Theme, mTooltipTextColor))
         .def_readwrite("mWindowFillUnfocused", &Theme::mWindowFillUnfocused, D(Theme, mWindowFillUnfocused))
         .def_readwrite("mWindowFillFocused", &Theme::mWindowFillFocused, D(Theme, mWindowFillFocused))
         .def_readwrite("mWindowTitleUnfocused", &Theme::mWindowTitleUnfocused, D(Theme, mWindowTitleUnfocused))
         .def_readwrite("mWindowTitleFocused", &Theme::mWindowTitleFocused, D(Theme, mWindowTitleFocused))
         .def_readwrite("mWindowHeaderGradientTop", &Theme::mWindowHeaderGradientTop, D(Theme, mWindowHeaderGradientTop))
         .def_readwrite("mWindowHeaderGradientBot", &Theme::mWindowHeaderGradientBot, D(Theme, mWindowHeaderGradientBot))
         .def_readwrite("mWindowHeaderSepTop", &Theme::mWindowHeaderSepTop, D(Theme, mWindowHeaderSepTop))
         .def_readwrite("mWindowHeaderSepBot", &Theme::mWindowHeaderSepBot, D(Theme, mWindowHeaderSepBot))
         .def_readwrite("mWindowPopup", &Theme::mWindowPopup, D(Theme, mWindowPopup))
         .def_readwrite("mWindowPopupTransparent", &Theme::mWindowPopupTransparent, D(Theme, mWindowPopupTransparent))
         .def_readwrite("mCheckBoxIcon", &Theme::mCheckBoxIcon, D(Theme, mCheckBoxIcon))
         .def_readwrite("mCheckBoxIconExtraScale", &Theme::mCheckBoxIconExtraScale, D(Theme, mCheckBoxIconExtraScale))
         .def_readwrite("mMessageInformationIcon", &Theme::mMessageInformationIcon, D(Theme, mMessageInformationIcon))
         .def_readwrite("mMessageQuestionIcon", &Theme::mMessageQuestionIcon, D(Theme, mMessageQuestionIcon))
         .def_readwrite("mMessageWarningIcon", &Theme::mMessageWarningIcon, D(Theme, mMessageWarningIcon))
         .def_readwrite("mMessageAltButtonIcon", &Theme::mMessageAltButtonIcon, D(Theme, mMessageAltButtonIcon))
         .def_readwrite("mMessagePrimaryButtonIcon", &Theme::mMessagePrimaryButtonIcon, D(Theme, mMessagePrimaryButtonIcon))
         .def_readwrite("mPopupChevronRightIcon", &Theme::mPopupChevronRightIcon, D(Theme, mPopupChevronRightIcon))
         .def_readwrite("mPopupChevronLeftIcon", &Theme::mPopupChevronLeftIcon, D(Theme, mPopupChevronLeftIcon))
         .def_readwrite("mPopupIconExtraScale", &Theme::mPopupIconExtraScale, D(Theme, mPopupIconExtraScale))
         .def_readwrite("mTabHeaderLeftIcon", &Theme::mTabHeaderLeftIcon, D(Theme, mTabHeaderLeftIcon))
         .def_readwrite("mTabHeaderRightIcon", &Theme::mTabHeaderRightIcon, D(Theme, mTabHeaderRightIcon))
         .def_readwrite("mTextBoxUpIcon", &Theme::mTextBoxUpIcon, D(Theme, mTextBoxUpIcon))
         .def_readwrite("mTextBoxDownIcon", &Theme::mTextBoxDownIcon, D(Theme, mTextBoxDownIcon))
         .def_readwrite("mTextBoxIconExtraScale", &Theme::mTextBoxIconExtraScale, D(Theme, mTextBoxIconExtraScale));

/* NOTE: leave these "unindented"!  These are enumerated manually because the author
 *       is unable to determine why docs/mkdoc_rst.py skips this class.  It may be
 *       fixed in the future, in which case remove the NOTE in include/nanogui/theme.h
 *       and simply delete these __doc_nanogui_Theme_GlobalDefaultFonts_* definitions.
 */
static const char *__doc_nanogui_Theme_GlobalDefaultFonts =
R"doc(The font face string identifiers that are always loaded / available for every Widget.

In the (rare) event that a Widget does not have a Theme instance (this only
happens when a Widget is constructed without a parent), these values are also
used in the Widget font getter methods.

See also: The *implementation* of nanogui::Widget::font.)doc";

static const char *__doc_nanogui_Theme_GlobalDefaultFonts_Normal =
R"doc(``"sans"``.  See nanogui::Theme::mDefaultFont.)doc";

static const char *__doc_nanogui_Theme_GlobalDefaultFonts_Bold =
R"doc(``"sans-bold"``.  See nanogui::Theme::mDefaultBoldFont.)doc";

static const char *__doc_nanogui_Theme_GlobalDefaultFonts_Mono =
R"doc(``"mono"``.  See nanogui::Theme::mDefaultMonoFont.)doc";

static const char *__doc_nanogui_Theme_GlobalDefaultFonts_MonoBold =
R"doc(``"mono-bold"``.  See nanogui::Theme::mDefaultMonoBoldFont.)doc";

static const char *__doc_nanogui_Theme_GlobalDefaultFonts_Icons =
R"doc(``"icons"``.  See nanogui::Theme::mDefaultIconFont.)doc";

    py::class_<Theme::GlobalDefaultFonts>(theme, "GlobalDefaultFonts", py::metaclass(), D(Theme, GlobalDefaultFonts))
        .def(py::init<>())
        .def_readonly_static("Normal",   &Theme::GlobalDefaultFonts::Normal,   D(Theme, GlobalDefaultFonts, Normal))
        .def_readonly_static("Bold",     &Theme::GlobalDefaultFonts::Bold,     D(Theme, GlobalDefaultFonts, Bold))
        .def_readonly_static("Mono",     &Theme::GlobalDefaultFonts::Mono,     D(Theme, GlobalDefaultFonts, Mono))
        .def_readonly_static("MonoBold", &Theme::GlobalDefaultFonts::MonoBold, D(Theme, GlobalDefaultFonts, MonoBold))
        .def_readonly_static("Icons",    &Theme::GlobalDefaultFonts::Icons,    D(Theme, GlobalDefaultFonts, Icons));
}
