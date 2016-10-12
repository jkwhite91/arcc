#include <wiringPi.h>

/***************
 * The pins are mapped as:
 * 0 = GP2 Front
 * 1 = GP3
 * 2 = GP4
 * 3 = GP14
 ***************/
#define FOR 0;
#define BACK 1;
#define LEFT 2;
#define RIGHT 3;

#define DELAY_INT 2000;

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

	return 0;
}

void forward()
{
	pinMode (FOR, OUTPUT);

	// turns the light on
	digitalWrite(FOR, 1);
	// stays on for a set amount of time
	delay(DELAY_INT);

	// turns off the light
	digitalWrite(FOR,0);

}

void left()
{
	pinMode (LEFT, OUTPUT);

	digitalWrite(LEFT, 1);
	delay(DELAY_INT);
	digitalWrite(LEFT,0);
}

void right()
{
	pinMode (RIGHT, OUTPUT);

	digitalWrite(RIGHT, 1);
	delay(DELAY_INT);
	digitalWrite(RIGHT,0);
}

void back()
{
	pinMode (BACK, OUTPUT);

	digitalWrite(BACK, 1);
	delay(DELAY_INT);
	digitalWrite(BACK,0);
}