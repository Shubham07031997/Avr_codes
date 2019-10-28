#include<avr/io.h>
#define F_CPU 8000000
#include<util/delay.h>

int x,y=1;

void main()
{
DDRB=0XFF;

while(1)
{
for(x=1;x<=8;x++)
{
PORTB |= x<<1;
_delay_ms(50);
x++;
}

}
}
