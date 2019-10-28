#include<avr/io.h>
#define F_CPU 8000000
#include<util/delay.h>
int x,y,z,units,tens;
void main()
{
   DDRA=0Xff;
   DDRD=0Xff;
   DDRC=0xff;
   DDRB=0x00;
   PORTB=(1<<PA7)|(1<<PA6)|(1<<PA5)|(1<<PA4);
   ;
   
   while(1)
      {   
	     
	         
			     for(x=0;x<60;) //for seconds display
				     {    
					 if((PINB & 0b11110000)==0b01110000)
			             
					 {    x++;
						 units=x%10;
						 tens=x/10;
						 PORTD=tens;
						 PORTD |=(units<<4);
						 _delay_ms(10); 

						  } 
						 
						 }
						 

            //  if((PINB &0b11110000)==0b10110000)
			    					 
			         {   for(y=0;y<60;)  //for min display
				         
                             {
							    y++;
								units=y%10;
								tens=y/10;
								PORTC=tens;
								PORTC |=(units<<4);
								_delay_ms(10);
								for(x=0;x<60;)
							{	x++;
					      	 units=x%10;
					     	 tens=x/10;
					     	 PORTD=tens;
						    PORTD |=(units<<4);
						       _delay_ms(10);}
								}
							//	if((PINB &0b11110000)==0b11010000)
								  for(z=0;z<24;)  //for hr display
				          
                                      {
							              z++;
								          units=z%10;
								          tens=z/10;
								         PORTA=tens;
							         	PORTA |=(units<<4);
								        _delay_ms(10);
								 for(y=0;y<60;)
										    {
							    y++;
								units=y%10;
								tens=y/10;
								PORTC=tens;
								PORTC |=(units<<4);
								_delay_ms(10);
								for(x=0;x<60;)
							{	x++;
						      units=x%10;
						       tens=x/10;
					         	 PORTD=tens;
						      PORTD |=(units<<4);
						       _delay_ms(10);}
								}
								
						 
						 
						
						 
						 
								   }
								

								

         }
}}
