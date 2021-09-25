
#include <avr/io.h>
#include <util/delay.h>

//PB5 is arduino pin 13

main (void)
{
	DDRB |= _BV(DDB5);
	
	while(1)
	{
		PORTB ^= _BV(PB5);
		_delay_ms(2000);
	}
}
