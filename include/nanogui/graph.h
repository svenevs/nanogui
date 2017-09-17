/*
    NanoGUI was developed by Wenzel Jakob <wenzel.jakob@epfl.ch>.
    The widget drawing code is based on the NanoVG demo application
    by Mikko Mononen.

    All rights reserved. Use of this source code is governed by a
    BSD-style license that can be found in the LICENSE.txt file.
*/
/**
 * \file nanogui/graph.h
 *
 * \brief Simple graph widget for showing a function plot.
 */

#pragma once

#include <nanogui/widget.h>

NAMESPACE_BEGIN(nanogui)

/**
 * \class Graph graph.h nanogui/graph.h
 *
 * \brief Simple graph widget for showing a function plot.
 */
class NANOGUI_EXPORT Graph : public Widget {
public:
    /**
     * Creates a Graph attached to the specified parent.
     *
     * \param parent
     *     The Widget to add this Graph to.
     *
     * \param caption
     *     The caption of the graph (default: ``"Untitled"``).
     */
    Graph(Widget *parent, const std::string &caption = "Untitled");

    /// The caption of this Graph.
    const std::string &caption() const { return mCaption; }

    /// Sets the caption of this Graph.
    void setCaption(const std::string &caption) { mCaption = caption; }

    /// The heading caption of this Graph.
    const std::string &header() const { return mHeader; }

    /// Sets the heading caption of this Graph.
    void setHeader(const std::string &header) { mHeader = header; }

    /// The footer caption of this Graph.
    const std::string &footer() const { return mFooter; }

    /// Sets the footer caption of this Graph.
    void setFooter(const std::string &footer) { mFooter = footer; }

    /// The background color of this Graph.
    const Color &backgroundColor() const { return mBackgroundColor; }

    /// Sets the background color of this Graph.
    void setBackgroundColor(const Color &backgroundColor) { mBackgroundColor = backgroundColor; }

    /// The foreground color of this Graph.
    const Color &foregroundColor() const { return mForegroundColor; }

    /// Sets the foreground color of this Graph.
    void setForegroundColor(const Color &foregroundColor) { mForegroundColor = foregroundColor; }

    /// The text color of this Graph.
    const Color &textColor() const { return mTextColor; }

    /// Sets the text color of this Graph.
    void setTextColor(const Color &textColor) { mTextColor = textColor; }

    /// A ``const`` *reference* (cannot change) to the values being displayed in this Graph.
    const VectorXf &values() const { return mValues; }

    /// A *reference* (can change) to the values being displayed in this Graph.
    VectorXf &values() { return mValues; }

    /// Explicit set method of the values being displayed in this Graph.
    void setValues(const VectorXf &values) { mValues = values; }

    /// The preferred size of this Graph.
    virtual Vector2i preferredSize(NVGcontext *ctx) const override;

    /// Draws this Graph.
    virtual void draw(NVGcontext *ctx) override;

    /// Saves the state of this Graph to the specified Serializer.
    virtual void save(Serializer &s) const override;

    /// Sets the state of this Graph from the specified Serializer.
    virtual bool load(Serializer &s) override;

protected:
    /// The caption of this Graph (default: ``"Untitled"``).
    std::string mCaption;

    /// The header caption of this Graph.
    std::string mHeader;

    /// The footer caption of this Graph.
    std::string mFooter;

    /// The background color of this Graph.
    Color mBackgroundColor;

    /// The foreground color of this Graph.
    Color mForegroundColor;

    /// The text color of this Graph.
    Color mTextColor;

    /// The values being displayed by this Graph.
    VectorXf mValues;

public:
    EIGEN_MAKE_ALIGNED_OPERATOR_NEW
};

NAMESPACE_END(nanogui)
