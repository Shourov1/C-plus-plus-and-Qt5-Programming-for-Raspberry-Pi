
#include <iostream>
#include <wiringPi.h>
#include <cstdlib>
#define LedPin 0

using namespace std;

int main(int argc, char **argv)
{
	setenv("WIRINGPI_GPIOMEM", "1", 1);
	wiringPiSetup();
	
	pinMode(LedPin, OUTPUT);
	
	while(1) {
		digitalWrite(LedPin, LOW);
		cout << "led on ..." << endl;
		delay(500);
		digitalWrite(LedPin, HIGH);
		cout << "... led off" << endl;
		delay(500);
	}	
	
	return 0;
}

