#pragma config(Sensor, S1,     Sound,          sensorSoundDB)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	while (true)
	{
		if(SensorValue(Sound) > 50)
		{
			motor(motorA) = 30;
			wait1Msec (1000);
			motor(motorA) = 0;
			motor(motorA) = -30;
			wait1Msec (1000);
			motor (motorA) = 0;
		}
		//wait for a high value
		//Do wahtever you want to do on that edge
		//wait for a low value
	}
	//Go forward forever


	void shortForward()
	{
		motor(left) = 100;
		motor(right) = 100;
		wait1Msec (1000)
	}
	void goForTime(int speed, int time)
	{
		goForTime(30, 1000)
		wait1Msec (500)
	}

	{
		shortForward();
	}



}
