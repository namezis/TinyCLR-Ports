#include "GHIElectronics_TinyCLR_Devices_Adc.h"

static const TinyCLR_Interop_MethodHandler methods[] = {
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    Interop_GHIElectronics_TinyCLR_Devices_Adc_GHIElectronics_TinyCLR_Devices_Adc_Provider_AdcControllerApiWrapper::get_ChannelCount___I4,
    Interop_GHIElectronics_TinyCLR_Devices_Adc_GHIElectronics_TinyCLR_Devices_Adc_Provider_AdcControllerApiWrapper::get_ResolutionInBits___I4,
    Interop_GHIElectronics_TinyCLR_Devices_Adc_GHIElectronics_TinyCLR_Devices_Adc_Provider_AdcControllerApiWrapper::get_MinValue___I4,
    Interop_GHIElectronics_TinyCLR_Devices_Adc_GHIElectronics_TinyCLR_Devices_Adc_Provider_AdcControllerApiWrapper::get_MaxValue___I4,
    Interop_GHIElectronics_TinyCLR_Devices_Adc_GHIElectronics_TinyCLR_Devices_Adc_Provider_AdcControllerApiWrapper::IsChannelModeSupported___BOOLEAN__GHIElectronicsTinyCLRDevicesAdcAdcChannelMode,
    Interop_GHIElectronics_TinyCLR_Devices_Adc_GHIElectronics_TinyCLR_Devices_Adc_Provider_AdcControllerApiWrapper::GetChannelMode___GHIElectronicsTinyCLRDevicesAdcAdcChannelMode,
    Interop_GHIElectronics_TinyCLR_Devices_Adc_GHIElectronics_TinyCLR_Devices_Adc_Provider_AdcControllerApiWrapper::SetChannelMode___VOID__GHIElectronicsTinyCLRDevicesAdcAdcChannelMode,
    Interop_GHIElectronics_TinyCLR_Devices_Adc_GHIElectronics_TinyCLR_Devices_Adc_Provider_AdcControllerApiWrapper::OpenChannel___VOID__I4,
    Interop_GHIElectronics_TinyCLR_Devices_Adc_GHIElectronics_TinyCLR_Devices_Adc_Provider_AdcControllerApiWrapper::CloseChannel___VOID__I4,
    Interop_GHIElectronics_TinyCLR_Devices_Adc_GHIElectronics_TinyCLR_Devices_Adc_Provider_AdcControllerApiWrapper::Read___I4__I4,
    nullptr,
    nullptr,
    Interop_GHIElectronics_TinyCLR_Devices_Adc_GHIElectronics_TinyCLR_Devices_Adc_Provider_AdcControllerApiWrapper::Acquire___VOID,
    Interop_GHIElectronics_TinyCLR_Devices_Adc_GHIElectronics_TinyCLR_Devices_Adc_Provider_AdcControllerApiWrapper::Release___VOID,
};

const TinyCLR_Interop_Assembly Interop_GHIElectronics_TinyCLR_Devices_Adc = {
    "GHIElectronics.TinyCLR.Devices.Adc",
    0xEBDB74BC,
    methods
};
