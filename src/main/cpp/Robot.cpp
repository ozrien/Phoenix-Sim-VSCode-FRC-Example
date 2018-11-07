/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/
#include "frc/IterativeRobot.h"
#include "ctre/Phoenix.h"

class Robot : public frc::IterativeRobot
{
	TalonSRX *_testMotor = new TalonSRX(1);

  public:
	void RobotInit()
	{
		printf("RobotInit\n");
	}
	void TeleopInit()
	{
		printf("TeleopInit\n");
	}

	void TeleopPeriodic()
	{
		printf("TeleopPeriodic\n");
	}
};

#ifndef RUNNING_FRC_TESTS
int main()
{
	return frc::StartRobot<Robot>();
}
#endif
