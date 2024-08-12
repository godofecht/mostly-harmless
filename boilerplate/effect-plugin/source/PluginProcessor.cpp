//
// Created by Syl on 11/08/2024.
//
#include "PluginProcessor.h"
#include <mostly_harmless/gui/mostlyharmless_WebviewEditor.h>

std::vector<mostly_harmless::Parameter<float>> createParams() {
    return {};
}
PluginProcessor::PluginProcessor(const clap_host* host) : mostly_harmless::Plugin<float>(host, createParams()) {

}

void PluginProcessor::initialise(double /*sampleRate*/, std::uint32_t /*minFrames*/, std::uint32_t /*maxFrames*/) noexcept {

}

void PluginProcessor::process(marvin::containers::BufferView<float> /*bufferView*/,
                              mostly_harmless::EventContext /*eventContext*/) noexcept {

}

void PluginProcessor::flushParams(mostly_harmless::EventContext /*eventContext*/) noexcept {

}

void PluginProcessor::reset() noexcept {

}

std::unique_ptr<mostly_harmless::gui::IEditor> PluginProcessor::createEditor() noexcept {
   return std::make_unique<mostly_harmless::gui::WebviewEditor>(400, 400);
}

MOSTLYHARMLESS_REGISTER(PluginProcessor)
