#include<avr/io.h>
#define F_CPU 8000000
#include<util/delay.h>
#include<lcdavr.h>
#include<stdio.h>
int x;
char j[3];
void main()
{
   DDRB=0xff;
   lcd_init();
   while(1)
   {   for(x=0;x<=20;x++)
        {
              lcd_clear();
	         sprintf(j,"%d",x);//x is converted in j's data type 
			 lcd_string(j);
		    _delay_ms(100);
			}
	   }
	   }
