/*
    NanoGUI was developed by Wenzel Jakob <wenzel.jakob@epfl.ch>.
    The widget drawing code is based on the NanoVG demo application
    by Mikko Mononen.

    All rights reserved. Use of this source code is governed by a
    BSD-style license that can be found in the LICENSE.txt file.
*/
/**
 * \file nanogui/popupbutton.h
 *
 * \brief Button which launches a popup widget.
 */

#pragma once

#include <nanogui/button.h>
#include <nanogui/popup.h>
#include <nanogui/entypo.h>

NAMESPACE_BEGIN(nanogui)

/**
 * \class PopupButton popupbutton.h nanogui/popupbutton.h
 *
 * \brief Button which launches a popup widget.
 */
class NANOGUI_EXPORT PopupButton : public Button {
public:
    /**
     * Creates a PopupButton attached to the specified parent.
     *
     * \param parent
     *     The Widget to attach this PopupButton to.
     *
     * \param caption
     *     The Button caption (default: ``"Untitled"``).
     *
     * \param buttonIcon
     *     The icon for this Button.  See \ref nanogui::Button::mIcon.
     */
    PopupButton(Widget *parent, const std::string &caption = "Untitled",
                int buttonIcon = 0);

    /// Sets the icon to use that indicates this PopupButton "pops up".
    void setChevronIcon(int icon) { mChevronIcon = icon; }

    /// The icon to use that indicates this PopupButton "pops up".
    int chevronIcon() const { return mChevronIcon; }

    /// Sets the side that this PopupButton opens on.
    void setSide(Popup::Side popupSide);

    /// The side that this PopupButton opens on.
    Popup::Side side() const { return mPopup->side(); }

    /// The Popup being used.
    Popup *popup() { return mPopup; }

    /// A ``const`` pointer to the Popup being used.
    const Popup *popup() const { return mPopup; }

    /// Draws the PopupButton.
    virtual void draw(NVGcontext* ctx) override;

    /// The preferred size of this PopupButton.
    virtual Vector2i preferredSize(NVGcontext *ctx) const override;

    /// Responsible for computing / adjusting child Widget sizes and locations.
    virtual void performLayout(NVGcontext *ctx) override;

    /// Saves the state of this PopupButton to the specified Serializer.
    virtual void save(Serializer &s) const override;

    /// Sets the state of this PopupButton from the specified Serializer.
    virtual bool load(Serializer &s) override;

protected:
    /// The Popup being used.
    Popup *mPopup;

    /// The icon indicating this PopupButton "pops up".
    int mChevronIcon;

public:
    EIGEN_MAKE_ALIGNED_OPERATOR_NEW
};

NAMESPACE_END(nanogui)
