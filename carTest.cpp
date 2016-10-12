#include <wiringPi.h>


#define FOR 0;
#define LEFT 1;
#define RIGHT 2;
#define BACK 3;
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

	digitalWrite(FOR, 1);
	delay(DELAY_INT);
	digitalWrite(FOR,0);
	delay(DELAY_INT);

}

void left()
{
	pinMode (LEFT, OUTPUT);

	digitalWrite(LEFT, 1);
	delay(DELAY_INT);
	digitalWrite(LEFT,0);
	delay(DELAY_INT);
	
}

void right()
{
	pinMode (RIGHT, OUTPUT);

	digitalWrite(RIGHT, 1);
	delay(DELAY_INT);
	digitalWrite(RIGHT,0);
	delay(DELAY_INT);
	
}

void back()
{
	pinMode (BACK, OUTPUT);

	digitalWrite(BACK, 1);
	delay(DELAY_INT);
	digitalWrite(BACK,0);
	delay(DELAY_INT);
}