/*
    NanoGUI was developed by Wenzel Jakob <wenzel.jakob@epfl.ch>.
    The widget drawing code is based on the NanoVG demo application
    by Mikko Mononen.

    All rights reserved. Use of this source code is governed by a
    BSD-style license that can be found in the LICENSE.txt file.
*/
/**
 * \file nanogui/imagepanel.h
 *
 * \brief Image panel widget which shows a number of square-shaped icons.
 */

#pragma once

#include <nanogui/widget.h>

NAMESPACE_BEGIN(nanogui)

/**
 * \class ImagePanel imagepanel.h nanogui/imagepanel.h
 *
 * \brief Image panel widget which shows a number of square-shaped icons.
 */
class NANOGUI_EXPORT ImagePanel : public Widget {
public:
    /**
     * \rst
     * Convenience typedef.  See :func:`nanogui::loadImageDirectory`.
     * \endrst
     */
    typedef std::vector<std::pair<int, std::string>> Images;

public:
    /**
     * Creates an ImagePanel attached to the specified parent.
     *
     * \param parent
     *     The Widget to attach this ImagePanel to.
     */
    ImagePanel(Widget *parent);

    /**
     * \rst
     * Sets the images to display.  See :func:`nanogui::loadImageDirectory`.
     * \endrst
     */
    void setImages(const Images &data) { mImages = data; }

    /// The current set of images being displayed.
    const Images& images() const { return mImages; }

    /// The callback to execute when a given image is selected.
    std::function<void(int)> callback() const { return mCallback; }

    /// Sets the callback to execute when a given image is selected.
    void setCallback(const std::function<void(int)> &callback) { mCallback = callback; }

    /// Handles mouse motion events (when mouse hovers, image is highlighted).
    virtual bool mouseMotionEvent(const Vector2i &p, const Vector2i &rel, int button, int modifiers) override;

    /// Handles mouse click events (and calls \ref nanogui::ImagePanel::mCallback if provided).
    virtual bool mouseButtonEvent(const Vector2i &p, int button, bool down, int modifiers) override;

    /// The preferred size of this ImagePanel.
    virtual Vector2i preferredSize(NVGcontext *ctx) const override;

    /// Draws the ImagePanel.
    virtual void draw(NVGcontext* ctx) override;

protected:
    /// The number of images displayed in the grid (``x()`` is width, ``y()`` is height).
    Vector2i gridSize() const;

    /// Computes which image index corresponds to the input point.
    int indexForPosition(const Vector2i &p) const;

protected:
    /**
     * \rst
     * The images being displayed.  See :func:`nanogui::loadImageDirectory`.
     * \endrst
     */
    Images mImages;

    /// The callback to execute when an image is selected.
    std::function<void(int)> mCallback;

    /// The size of the thumbnails.
    int mThumbSize;

    /// The spacing between images.
    int mSpacing;

    /// The margin between the outer images and the boundary of the Widget.
    int mMargin;

    /// Contains the image that the mouse is currently positioned over.  ``-1`` means none.
    int mMouseIndex;

public:
    EIGEN_MAKE_ALIGNED_OPERATOR_NEW
};

NAMESPACE_END(nanogui)
