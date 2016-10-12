#include <wiringPi.h>


#define FOR 0;
#define LEFT 0;
#define RIGHT 0;
#define BACK 0;
#define DELAY_INT 500;

void forward();
void left();
void right();
void back();


int main()
{
	// starting the function
	wiringPiSetup();

	forward();
	left();
	right();
	back();
}

void forward()
{
	pinMode (FOR, OUTPUT);

	for (;;)
	{
		digitalWrite(FOR, 1);
		delay(DELAY_INT);
		digitalWrite(FOR,0);
		delay(DELAY_INT);
	}

}

void left()
{
	pinMode (LEFT, OUTPUT);

	for (;;)
	{
		digitalWrite(LEFT, 1);
		delay(DELAY_INT);
		digitalWrite(LEFT,0);
		delay(DELAY_INT);
	}
}

void right()
{
	pinMode (RIGHT, OUTPUT);

	for (;;)
	{
		digitalWrite(RIGHT, 1);
		delay(DELAY_INT);
		digitalWrite(RIGHT,0);
		delay(DELAY_INT);
	}
}

void back()
{
	pinMode (BACK, OUTPUT);

	for (;;)
	{
		digitalWrite(BACK, 1);
		delay(DELAY_INT);
		digitalWrite(BACK,0);
		delay(DELAY_INT);
	}
}