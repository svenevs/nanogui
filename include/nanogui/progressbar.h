/*
    NanoGUI was developed by Wenzel Jakob <wenzel.jakob@epfl.ch>.
    The widget drawing code is based on the NanoVG demo application
    by Mikko Mononen.

    All rights reserved. Use of this source code is governed by a
    BSD-style license that can be found in the LICENSE.txt file.
*/
/**
 * \file nanogui/progressbar.h
 *
 * \brief Standard widget for visualizing progress.
 */

#pragma once

#include <nanogui/widget.h>

NAMESPACE_BEGIN(nanogui)

/**
 * \class ProgressBar progressbar.h nanogui/progressbar.h
 *
 * \brief Standard widget for visualizing progress.
 */
class NANOGUI_EXPORT ProgressBar : public Widget {
public:
    /// Creates a ProgressBar attached to the specified parent.
    ProgressBar(Widget *parent);

    /// The current amount of progress.
    float value() { return mValue; }

    /// Sets the current amount of progress.  Assumed to be in ``[0.0, 1.0]``.
    void setValue(float value) { mValue = value; }

    /// The preferred size of this ProgressBar.
    virtual Vector2i preferredSize(NVGcontext *ctx) const override;

    /// Draws this ProgressBar.
    virtual void draw(NVGcontext* ctx) override;

    /// Saves the state of this ProgressBar to the specified Serializer.
    virtual void save(Serializer &s) const override;

    /// Sets the state of this ProgressBar from the specified Serializer.
    virtual bool load(Serializer &s) override;

protected:
    /// The current amount of progress.  Should be normalized (in range ``[0.0, 1.0]``).
    float mValue;

public:
    EIGEN_MAKE_ALIGNED_OPERATOR_NEW
};

NAMESPACE_END(nanogui)
