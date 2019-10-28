#include<avr/io.h>
#define F_CPU 8000000
#include<util/delay.h>
void main()
{
  DDRC=0Xff;
  DDRA=0X00;
  PORTA=(1<<PA0);
  while(1)
  { if((PINA &0b00000001)==0)
     
     {PORTC=0b00000001;
      _delay_ms(100);
	  PORTC=0b00000000;
	  _delay_ms(100);}
    }
	}
      
