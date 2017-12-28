#include <stdio.h>
#include <wiringPi.h>

int main(int argc, char** argv)
{
    // Intialize the wiringPi Library
    wiringPiSetup();

    // LED is connected on pin 3. Ensure
    // this pin is set to be an Output.
    pinMode(3, OUTPUT);

    // Ensure the LED is ON initialitial
    int state = HIGH;

    for(int i = 0; i < 10; i++)
    {
        // Turn on or off depending on state
        digitalWrite(3, state);

        // Toggle to HIGH/LOW output
        state = (state == HIGH) ? LOW : HIGH;
    }
    
    // Exit program
    return 0;
}