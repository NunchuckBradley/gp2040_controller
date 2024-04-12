#ifndef _Analog_H
#define _Analog_H

#include "gpaddon.h"

#include "GamepadEnums.h"

#include "BoardConfig.h"

#ifndef ANALOG_INPUT_ENABLED
#define ANALOG_INPUT_ENABLED 1
#endif

#ifndef ANALOG_ADC_VRX
#define ANALOG_ADC_VRX    26
#endif

#ifndef ANALOG_ADC_VRY
#define ANALOG_ADC_VRY    27
#endif

#ifndef ANALOG_ADC_RIGHT_VRX
#define ANALOG_ADC_RIGHT_VRX    28
#endif

#ifndef ANALOG_ADC_RIGHT_VRY
#define ANALOG_ADC_RIGHT_VRY    29
#endif

// Analog Module Name
#define AnalogName "Analog"

class AnalogInput : public GPAddon {
public:
	virtual bool available();
	virtual void setup();       // Analog Setup
	virtual void process();     // Analog Process
	virtual void preprocess() {}
    virtual std::string name() { return AnalogName; }
private:
	uint8_t analogAdcPinX;
	uint8_t analogAdcPinY;
	uint8_t analogAdcRightPinX;
	uint8_t analogAdcRightPinY;
};

#endif  // _Analog_H_