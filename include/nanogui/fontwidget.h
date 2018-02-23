/*
    nanogui/fontwidget.h -- Base class of all widgets that draw text.

    NanoGUI was developed by Wenzel Jakob <wenzel.jakob@epfl.ch>.
    The widget drawing code is based on the NanoVG demo application
    by Mikko Mononen.

    All rights reserved. Use of this source code is governed by a
    BSD-style license that can be found in the LICENSE.txt file.
*/
/** \file */

#pragma once

#include <nanogui/widget.h>

NAMESPACE_BEGIN(nanogui)

/**
 * \class FontWidget fontwidget.h nanogui/fontwidget.h
 *
 * \brief The base class for all widgets that draw text (e.g., \ref Label or \ref Button).
 */
class NANOGUI_EXPORT FontWidget : public Widget {
public:
    /**
     * \brief Constructs a FontWidget.
     *
     * \param parent
     *     The parent of this FontWidget.
     *
     * \param font
     *     The font face to start with.  All widgets that inherit from this
     *     class default this parameter to the empty string (``""``).  By using
     *     the empty string, when ``parent`` is not ``nullptr``, the \ref Theme
     *     is queried for the font to use.  When anything other than the empty
     *     string, this implies that a user has explicitly requested a specific
     *     font face.  For example, ``new Label(parent, "text", "sans-bold")``.
     *     That is, sub-classes should always provide an explicit ``font``
     *     parameter in their constructor, with a default value of ``""``.
     *     The ``fontDefaultIsBold`` parameter defines the behavior when the
     *     empty string is supplied here.
     *
     * \param fontDefaultIsBold
     *     Different sub-classes may prefer a different default font face.  When
     *     ``font`` is ``""`` and ``fontDefaultIsBold=false``,
     *     \ref Theme::defaultFont is used to populate \ref mFont.  When
     *     ``true``, \ref Theme::defaultBoldFont is used instead.  Lastly, in
     *     the rare occurrence that ``parent`` is ``nullptr`` (and therefore no
     *     \ref Theme instance is available at the time of construction), the
     *     static \ref Theme methods are called instead.  When
     *     ``fontDefaultIsBold=false``, \ref Theme::globalDefaultFont is used.
     *     When ``true``, \ref Theme::globalDefaultBoldFont is used.
     */
    FontWidget(Widget *parent, const std::string &font, bool fontDefaultIsBold);

    /**
     * \brief Set the font used to draw the text for this FontWidget.
     *
     * There are four font faces available by default:
     *
     * 1. ``"sans"`` (\ref Theme::mFontNormal).
     * 2. ``"sans-bold"`` (\ref Theme::mFontBold).
     * 3. ``"mono"`` (\ref Theme::mFontMonoNormal).
     * 4. ``"mono-bold"`` (\ref Theme::mFontMonoBold).
     */
    void setFont(const std::string &font);

    /// Get the font used to draw the text for this FontWidget.
    const std::string &font() const { return mFont; }

    /// Return current font size. If not set the default of the current theme will be returned
    int fontSize() const;

    /// Set the font size of this widget
    void setFontSize(int fontSize) { mFontSize = fontSize; }

    /// Return whether the font size is explicitly specified for this widget
    bool hasFontSize() const { return mFontSize > 0; }

    /// Set the \ref Theme used to draw this FontWidget (updates \ref mFont if applicable).
    virtual void setTheme(Theme *theme) override;

    /// Saves the state of this FontWidget to the specified Serializer.
    virtual void save(Serializer &s) const override;

    /// Sets the state of this FontWidget from the specified Serializer.
    virtual bool load(Serializer &s) override;

protected:
    /// Sets \ref mFont accordingly.  Called in both the constructor, as well as from \ref setTheme.
    virtual void setDefaultFont();

    /// The current font face being used to draw text.
    std::string mFont;

    /**
     * Used to set the font size of a widget explicitly.  The initial value is
     * ``-1``, and a negative number indicates that the theme's font size should
     * be used instead.  Specifically, \ref fontSize will return
     * \ref Theme::mStandardFontSize when ``mFontSize < 0``.
     */
    int mFontSize;

    /**
     * When the font is specified either via the constructor or \ref setFont,
     * this is set to ``true`` to indicate that \ref setTheme should not
     * overwrite the user-specified default.  Otherwise, when \ref setTheme is
     * called, the theme's default window font will be used.
     */
    bool mFontExplicit = false;

private:
    /**
     * There are two default fonts in NanoGUI: ``"sans"`` and ``"sans-bold"``.
     * When this variable is ``true``, the bold font will be used.  When
     * ``false``, the regular font face will be used.  Subclasses are
     * responsible for specifying this behavior when calling the parent class
     * constructor (\ref FontWidget::FontWidget).  For example,
     * \ref nanogui::Label will always set this to ``false``, whereas
     * \ref nanogui::Button will always set this to ``true``.
     */
    bool mFontDefaultIsBold;
};

NAMESPACE_END(nanogui)
