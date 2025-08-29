#include <reg51.h>

sbit switch1= P1^0;  
sbit led1= P2^0;   

void main() {
    while(1) {
        if (switch1==0)  
            led1=1;      
        else
            led1=0;      
    }
}