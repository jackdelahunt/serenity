/*
 * Copyright (c) 2018-2020, Andreas Kling <kling@serenityos.org>
 * Copyright (c) 2021, Mustafa Quraish <mustafa@cs.toronto.edu>
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#include "Tool.h"
#include "ImageEditor.h"
#include <LibGUI/Action.h>

namespace PixelPaint {

Tool::Tool()
{
}

Tool::~Tool()
{
}

void Tool::setup(ImageEditor& editor)
{
    m_editor = editor;
}

void Tool::set_action(GUI::Action* action)
{
    m_action = action;
}

void Tool::on_keydown(GUI::KeyEvent& event)
{
    switch (event.key()) {
    case KeyCode::Key_LeftBracket:
        if (m_primary_slider)
            m_primary_slider->set_value(m_primary_slider->value() - 1);
        break;
    case KeyCode::Key_RightBracket:
        if (m_primary_slider)
            m_primary_slider->set_value(m_primary_slider->value() + 1);
        break;
    case KeyCode::Key_LeftBrace:
        if (m_secondary_slider)
            m_secondary_slider->set_value(m_secondary_slider->value() - 1);
        break;
    case KeyCode::Key_RightBrace:
        if (m_secondary_slider)
            m_secondary_slider->set_value(m_secondary_slider->value() + 1);
        break;
    default:
        break;
    }
}

}
