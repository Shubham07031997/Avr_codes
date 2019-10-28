#include<avr/io.h>
#define F_CPU 8000000
#include<util/delay.h>
void main()
{
   DDRC=0Xff;
   DDRD=0Xff;
   PORTC=0b00000101;
   while(1)
   {
      PORTD=0b10101010;
	  _delay_ms(100);
	  PORTD=0b01010101;
	  _delay_ms(100);
	  
	  }
}
