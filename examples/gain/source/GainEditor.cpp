//
// Created by Syl Morrison on 11/08/2024.
//

#include "GainEditor.h"
#include <iostream>
namespace examples::gain {
    GainEditor::GainEditor(std::uint32_t width, std::uint32_t height) : mostly_harmless::gui::WebviewEditor(width, height) {
    }

    void GainEditor::initialise() {
        mostly_harmless::gui::WebviewEditor::initialise();
        m_internalWebview->navigate("https://localhost:5173");
    }
} // namespace examples::gain