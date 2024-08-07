#ifndef MOSTLYHARMLESS_DESCRIPTOR_H
#define MOSTLYHARMLESS_DESCRIPTOR_H
#include <mostlyharmless_BusConfig.h>
#include <clap/plugin.h>
#include <vector>
namespace mostly_harmless { 
    [[nodiscard]] clap_plugin_descriptor& getDescriptor();
    [[nodiscard]] BusConfig getAudioBusConfig() noexcept; 
    [[nodiscard]] BusConfig getNoteBusConfig() noexcept;
}
#endif