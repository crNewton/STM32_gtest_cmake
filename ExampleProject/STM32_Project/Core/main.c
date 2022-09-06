#include "main.h"
#include "projectMain.h"
#include "hardwarespecific.h"
#include "c_libraries.h"
#include "stm32libsx.h"

This file is representing the non-abstracted code, so the code that interacts with the STM32 HAL.
We don't want to unittest this, we only want to test the abstracted functions (projectMain.c).

int main(void){
    projectMain();
    return 0;
}

