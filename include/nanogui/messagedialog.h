/*
    nanogui/messagedialog.h -- Simple "OK" or "Yes/No"-style modal dialogs

    NanoGUI was developed by Wenzel Jakob <wenzel.jakob@epfl.ch>.
    The widget drawing code is based on the NanoVG demo application
    by Mikko Mononen.

    All rights reserved. Use of this source code is governed by a
    BSD-style license that can be found in the LICENSE.txt file.
*/
/** \file */

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
        Information,///< An information dialog.  Uses \ref Theme::mMessageInformationIcon.
        Question,   ///< An interogative dialog.  Uses \ref Theme::mMessageQuestionIcon.
        Warning     ///< A warning dialog.  Uses \ref Theme::mMessageWarningIcon.
    };

    /**
     * \brief Constructs a MessageDialog confined to the specified parent.
     *
     * \param parent
     *     The parent, typically a \ref Screen instance.  It can also be e.g., a
     *     \ref Window, but make sure that the parent is at least 250 pixels
     *     wide.  If it is not, the positioning may be odd and moving the dialog
     *     will produce "snapping".
     *
     * \param title
     *     The title of the window to use (default: ``"Untitled"``).
     *
     * \param type
     *     The type of message dialog (determines the icon displayed, see \ref Theme).
     *
     * \param message
     *     The dialog text you wish to display to the user (default: ``"Message"``).
     *
     * \param buttonText
     *     The button text for the confirmation button (default: ``"Ok"``).
     *     This button's icon is defined by \ref Theme::mMessagePrimaryButtonIcon.
     *
     * \param altButtonText
     *     The button text for the alternate button (default: ``"Cancel"``).
     *     This button's icon is defined by \ref Theme::mMessageAltButtonIcon.
     *
     * \param altButton
     *     Whether or not to include the alternate button (default: ``false``).
     *
     * \param theme
     *     When the parent widget has a different \ref Theme than desired for
     *     this MessageDialog, set this parameter.  Note that calling
     *     ``setTheme`` will **not** perform an equivalent action **when** the
     *     \ref Theme defines alternative icons such as
     *     \ref Theme::mMessageInformationIcon.
     */
    MessageDialog(Widget *parent, Type type, const std::string &title = "Untitled",
                  const std::string &message = "Message",
                  const std::string &buttonText = "OK",
                  const std::string &altButtonText = "Cancel", bool altButton = false,
                  Theme *theme = nullptr);

    /// The Label that contains the ``message`` parameter to the constructor.
    Label *messageLabel() { return mMessageLabel; }

    /// The Label that contains the ``message`` parameter to the constructor.
    const Label *messageLabel() const { return mMessageLabel; }

    /// The callback used for this MessageDialog.  See \ref mCallback.
    std::function<void(int)> callback() const { return mCallback; }

    /// Sets the callback for this MessageDialog.  See \ref mCallback.
    void setCallback(const std::function<void(int)> &callback) { mCallback = callback; }

protected:
    /**
     * The callback to execute when either the primary or alternate button are
     * pressed.  When constructed with ``altButton=false``, only one button will
     * be added (defined by ``buttonText``).  In this case, the callback will
     * always be called with ``0``.
     *
     * When ``altButton=true``, two buttons are added.  If the user presses the
     * primary button (``buttonText`` in the constructor), the callback will
     * still be called with ``0``.  If the user presses the alternate button
     * (``altButtonText`` in the constructor), the callback will be called with ``1``.
     */
    std::function<void(int)> mCallback;

    /// A Label that contains the ``message`` supplied to the constructor, with a fixed width of ``200``.
    Label *mMessageLabel;

public:
    EIGEN_MAKE_ALIGNED_OPERATOR_NEW
};

NAMESPACE_END(nanogui)
