#include "projectMain.h"

void projectMain() {
	// main loop
	printf("HELLO WORLD!\n");

//	while (1) {
//
//	}
}

void SetLed(uint8_t brightness_percentage) {
	//create pwm data & start DMA pwm for led control
	for (uint16_t i = 0; i < sizeof(pwmData) / sizeof(pwmData[0]); i++) {
		//10, 20, 30, 40, 50, 60, 70, 80, 90, 100
		//pwmData[i] = (i + 1) * 10;
		pwmData[i] = brightness_percentage;
	}
}

uint8_t SerialCmdHandler(uint8_t UART2_rxBuffer[]) {
	//
	if (UART2_rxBuffer[0] > 0 && UART2_rxBuffer[0] <= 100) {
		SetLed(UART2_rxBuffer[0]);
	}
	else{
		return 0;
	}

	return 1;
}

