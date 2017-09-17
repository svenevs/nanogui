/*
    NanoGUI was developed by Wenzel Jakob <wenzel.jakob@epfl.ch>.
    The widget drawing code is based on the NanoVG demo application
    by Mikko Mononen.

    All rights reserved. Use of this source code is governed by a
    BSD-style license that can be found in the LICENSE.txt file.
*/
/**
 * \file nanogui/label.h
 *
 * \brief Text label with an arbitrary font, color, and size.
 */

#pragma once

#include <nanogui/widget.h>

NAMESPACE_BEGIN(nanogui)

/**
 * \class Label label.h nanogui/label.h
 *
 * \brief Text label widget.
 *
 * The font and color can be customized. When \ref Widget::setFixedWidth
 * is used, the text is wrapped when it surpasses the specified width.
 */
class NANOGUI_EXPORT Label : public Widget {
public:
    /**
     * Creates a Label attached to the specified parent.
     *
     * \param parent
     *     The Widget to attach this Label to.
     *
     * \param caption
     *     The text of this Label.
     *
     * \param font
     *     The font face to use for this label (default: ``"sans"``).
     *
     * \param fontSize
     *     The size of the font.  See \ref nanogui::Widget::mFontSize.
     */
    Label(Widget *parent, const std::string &caption,
          const std::string &font = "sans", int fontSize = -1);

    /// Get the label's text caption.
    const std::string &caption() const { return mCaption; }

    /// Set the label's text caption.
    void setCaption(const std::string &caption) { mCaption = caption; }

    /// Set the currently active font (2 are available by default: 'sans' and 'sans-bold').
    void setFont(const std::string &font) { mFont = font; }

    /// Get the currently active font.
    const std::string &font() const { return mFont; }

    /// Get the label color.
    Color color() const { return mColor; }

    /// Set the label color.
    void setColor(const Color& color) { mColor = color; }

    /// Set the \ref Theme used to draw this widget.
    virtual void setTheme(Theme *theme) override;

    /// Compute the size needed to fully display the label.
    virtual Vector2i preferredSize(NVGcontext *ctx) const override;

    /// Draw the label.
    virtual void draw(NVGcontext *ctx) override;

    /// Saves the state of this Label to the specified Serializer.
    virtual void save(Serializer &s) const override;

    /// Sets the state of this Label from the specified Serializer.
    virtual bool load(Serializer &s) override;

protected:
    /// The caption of this Label.
    std::string mCaption;

    /// The font face being used for this Label.
    std::string mFont;

    /// The (background) color of this Label.
    Color mColor;

public:
    EIGEN_MAKE_ALIGNED_OPERATOR_NEW
};

NAMESPACE_END(nanogui)
