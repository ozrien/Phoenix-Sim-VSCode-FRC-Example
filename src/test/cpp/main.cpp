#include <hal/HAL.h>

#include "gtest/gtest.h"
#include "ctre/Phoenix.h"

int main(int argc, char** argv) {
  HAL_Initialize(500, 0);
  ::testing::InitGoogleTest(&argc, argv);
  int ret = RUN_ALL_TESTS();
  return ret;
}

TEST(TalonIDTest, TalonSRX) {
  /* make a talon */
  TalonSRX killerBees(33);
  /* check the ID */
  EXPECT_EQ(33, killerBees.GetDeviceID());
}
