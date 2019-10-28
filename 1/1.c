#include<avr/io.h>
#define F_CPU 8000000
#include<util/delay.h>
int main(void)
{
  unsigned char z;
  DDRB=0xFF;
for(z=0;z<=255;z++)
{
   PORTB=z;
   _delay_ms(50);
   }
return 0;
}
