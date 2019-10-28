#include<avr/io.h>
#define F_CPU 8000000
#include<util/delay.h>
#include<lcdavr.h>

unsigned char keyscan();
int main()
{	
    
	DDRA = 0X00;
	DDRD = 0X0FF;
	DDRC=0XFF;
	PORTA= 0XFF;
	DDRB = 0X00;
	PORTB=0xff;
	
	


	while(1)
	{
	keyscan();
	_delay_ms(10);
	}
	return 0;
}
//*****************************************SUBROTINE************************************************


unsigned char keyscan()
{
		while(1)
	{
	PORTD = 0X0e;// switch no. is taken as reference or ground
	_delay_ms(5);  /////must for response at porta when key press
	
	if((PINA&0b00000010)==0)

	{while(!(PINA&0b00000010));
	     if((PINB &0b11110000)==0b01000000)
		 {PORTC=0b10100000;
	       _delay_ms(100);
	            return'4';}}

	PORTD = 0X0d;//switch no. two is taken as ground/reference
	_delay_ms(5);
	if((PINA&0b00000001)==0){while(!(PINA&0b00000001));
	 if((PINB &0b11110000)==0b10000000)
	 { PORTC=0b01010000;
	_delay_ms(100);
	return '8';}}
	
	if((PINA&0b00000100)==0){while(!(PINA&0b00000100));
 if((PINB &0b11110000)==0b00100000)	
{	PORTC=0b00100000;
	_delay_ms(100);
	  return '2';}}
	

	PORTD = 0X0b;//switch no. three is taken as reference
	_delay_ms(5);
	
	if((PINA&0b00000010)==0){while(!(PINA&0b00000010));
		if((PINB &0b11110000)==0b01100000)

	{ PORTC=0b10000000;
	_delay_ms(100);
	  return '6';}}											

	

	}	  
}
//************************************END**************************************************

