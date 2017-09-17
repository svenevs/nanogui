/*
    NanoGUI was developed by Wenzel Jakob <wenzel.jakob@epfl.ch>.
    The widget drawing code is based on the NanoVG demo application
    by Mikko Mononen.

    All rights reserved. Use of this source code is governed by a
    BSD-style license that can be found in the LICENSE.txt file.
*/
/**
 * \file nanogui/messagedialog.h
 *
 * \brief Simple "OK" or "Yes/No"-style modal dialogs.
 */

#pragma once

#include <nanogui/window.h>

NAMESPACE_BEGIN(nanogui)

/**
 * \class MessageDialog messagedialog.h nanogui/messagedialog.h
 *
 * \brief Simple "OK" or "Yes/No"-style modal dialogs.
 */
class NANOGUI_EXPORT MessageDialog : public Window {
public:
    /// Classification of the type of message this MessageDialog represents.
    enum class Type {
        Information,///< An information dialog.
        Question,   ///< An interrogative dialog.
        Warning     ///< A warning dialog.
    };

    /**
     * Creates a MessageDialog attached to the specified parent.
     *
     * \param parent
     *     The Widget to attach this MessageDialog to.
     *
     * \param type
     *     The type of MessageDialog.  See \ref MessageDialog::Type.
     *
     * \param title
     *     The title of the window (default: ``"Untitled"``).
     *
     * \param message
     *     The message text to display inside the MessageDialog.
     *
     * \param buttonText
     *     The primary button text (default: ``"OK"``).
     *
     * \param altButtonText
     *     The alternative button text (default: ``"Cancel"``).
     *
     * \param altButton
     *     Whether or not an alternative button should be included *in addition*
     *     to the primary button (default: ``false``).
     */
    MessageDialog(Widget *parent, Type type, const std::string &title = "Untitled",
                  const std::string &message = "Message",
                  const std::string &buttonText = "OK",
                  const std::string &altButtonText = "Cancel", bool altButton = false);

    /// The Label being used for this MessageDialog.
    Label *messageLabel() { return mMessageLabel; }

    /// A ``const`` pointer to the Label being used for this MessageDialog.
    const Label *messageLabel() const { return mMessageLabel; }

    /// The callback to execute when a user clicks on one of the buttons.
    std::function<void(int)> callback() const { return mCallback; }

    /// Sets the callback to execute when a user clicks on one of the buttons.  See \ref mCallback.
    void setCallback(const std::function<void(int)> &callback) { mCallback = callback; }

protected:
    /**
     * When a user clicks on one of the buttons, this callback is executed.  The
     * ``int`` parameter to the callback is either ``0`` or ``1`` depending on
     * which button was clicked:
     *
     * 1. If constructed with ``altButton = false``, the result will always be
     *    ``0`` (there is only one button to click).
     *
     * 2. If constructed with ``altButton = true``, the "primary" button maps
     *    to ``0`` (the ``"OK"`` button), and the "alternative" button maps
     *    to ``1`` (the ``"Cancel"`` button).
     */
    std::function<void(int)> mCallback;

    /// The Label being used with this MessageDialog.
    Label *mMessageLabel;

public:
    EIGEN_MAKE_ALIGNED_OPERATOR_NEW
};

NAMESPACE_END(nanogui)
