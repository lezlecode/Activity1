/*
 */

#include <avr/io.h> // This contains the definitions of the terms used
#include <util/delay.h>

int main()
{
DDRB &= ~(1 << PINB4);
DDRB &= ~(1 << PINB5);
DDRD = 0b00000100; // Port D2 (Pin 4 in the ATmega) made output
PORTD = 0b00000000; // Turn LED off
while(1){
if((PINB & (1 << PINB4))&& (PINB & (1 << PINB5)))
{
    PORTD = 0b00000100; //Turn LED on
_delay_ms(200); // delay of 200 millisecond
}
else
{
    PORTD = 0b00000000; //Turn LED off
    _delay_ms(200); // delay of 200 millisecond

}
}
}
