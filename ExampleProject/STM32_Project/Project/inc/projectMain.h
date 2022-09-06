#ifndef PROJECTMAIN_H
#define PROJECTMAIN_H

#ifdef __cplusplus
extern "C" {
#endif


/*
 * To test the project code various includes need to be added
 * There is also the need to redefine the variables, since main.h is not included
 */
#define TESTING

#if defined TESTING
	#include <stdint.h>
	#include <stdio.h>
	uint8_t pwmData[10];
#else
	#include "main.h"
#endif


void projectMain(void);
void SetLed(uint8_t);
uint8_t SerialCmdHandler(uint8_t*);

#ifdef __cplusplus
}
#endif

#endif
