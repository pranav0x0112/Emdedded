#include<reg51.h> // mapping of memory , where particular registers are already referenced with names which is easier to remember. this mapping information is present in reg51.h
void delay(unsigned long int x); 
sbit led0 = P1^0;      
sbit led1 = P1^1;


main()
{
	while(1)    // when we want to perform the task within the loop for infinie times, which is called as super loop
	{
		led0= 1;
		delay(0x20000);
		led0=0;
		delay(0x20000);
		
		led1 = 1;
		delay(0x20000);
		led1 = 0;
		
	}
}

void delay(unsigned long int x)
{
	unsigned long int i;
	for(i=0;i<x;i++)
	{
		
	}
}