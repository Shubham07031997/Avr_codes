#include<avr/io.h>
#define F_CPU 8000000
#include<util/delay.h>
void main()
{
   DDRC=0Xff;
   DDRD=0Xff;
   PORTC=0b00001000;
   while(1)
   {
      PORTD=0X00;
	  _delay_ms(100);
	  PORTD=0X80;
	  _delay_ms(100);
	  PORTD=0XC0;
	  _delay_ms(100);
	  PORTD=0XE0;
	  _delay_ms(100);
	  PORTD=0XF0;
	  _delay_ms(100);
	  PORTD=0XF8;
	  _delay_ms(100);
	  PORTD=0XFC;
	  _delay_ms(100);
	  PORTD=0XFE;
	  _delay_ms(100);
	  PORTD=0xFF;
	  _delay_ms(100);
	  }
}
