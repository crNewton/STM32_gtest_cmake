#include "gtest/gtest.h"

extern "C" {
#include "projectMain.h"
}

TEST(SerialTest1, cmdHandler)
{
    uint8_t UART2_rxBuffer[12] = {0};

    const auto expected = 1;
    uint8_t actual = SerialCmdHandler(UART2_rxBuffer);
    ASSERT_EQ(expected, actual);
}
