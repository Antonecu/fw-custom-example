#include "pch.h"

Gpio getCommsLedPin() {
	return Gpio::Unassigned;
}

Gpio getRunningLedPin() {
	return Gpio::Unassigned;
}

Gpio getWarningLedPin() {
	return Gpio::Unassigned;
}

static void setInjectorPins() {
	engineConfiguration->injectionPins[0] = Gpio::D13;
	engineConfiguration->injectionPins[1] = Gpio::D12;
	engineConfiguration->injectionPins[2] = Gpio::D11;
	engineConfiguration->injectionPins[3] = Gpio::D10;
}

static void setIgnitionPins() {
	engineConfiguration->ignitionPins[0] = Gpio::E8;
	engineConfiguration->ignitionPins[1] = Gpio::E9;
	engineConfiguration->ignitionPins[2] = Gpio::E10;
	engineConfiguration->ignitionPins[3] = Gpio::E11;
}

static void setupVbatt() {
	// 470 high side/ 910 low side
	engineConfiguration->analogInputDividerCoefficient = 1.55f;
	
	// 6.34k high side/ 1k low side
	engineConfiguration->vbattDividerCoeff = (6.34 + 1) / 1; 

	// Battery sense on PC3
	engineConfiguration->vbattAdcChannel = EFI_ADC_13;

	engineConfiguration->adcVcc = 3.3f;
}

static void setSdCardSpi3() {
    engineConfiguration->isSdCardEnabled = true;
	engineConfiguration->sdCardSpiDevice = SPI_DEVICE_3;
	engineConfiguration->spi3mosiPin = Gpio::C12;
	engineConfiguration->spi3misoPin = Gpio::C11;
	engineConfiguration->spi3sckPin = Gpio::C10;
	engineConfiguration->is_enabled_spi_3 = true;
	engineConfiguration->sdCardCsPin = Gpio::D2;
}

// board-specific configuration setup
void setBoardDefaultConfiguration() {
	setInjectorPins();
	setIgnitionPins();
	setupVbatt();
	setSdCardSpi3();

	engineConfiguration->clt.adcChannel = EFI_ADC_10;
	engineConfiguration->iat.adcChannel = EFI_ADC_7;
	engineConfiguration->clt.config.bias_resistor = 2490;
	engineConfiguration->iat.config.bias_resistor = 2490;

        engineConfiguration->triggerInputPins[0] = Gpio::E0;
	engineConfiguration->triggerInputPins[1] = Gpio::Unassigned;

//CAN 1 bus overwrites
	engineConfiguration->canRxPin = Gpio::D0;
	engineConfiguration->canTxPin = Gpio::D1;	
}
