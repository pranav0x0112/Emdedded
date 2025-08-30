#include <reg51.h> 

sbit buzzer = P1^1;      


void delay(unsigned int x) {
    unsigned int i, j;
    for(j = 0; j < 10; j++) {        
        for(i = 0; i < x; i++) {    
            ; 
        }
    }
}

void main() {
    while(1) {    
        buzzer = 1;          
        delay(1000);      
        buzzer = 0;          
        delay(1000);      
    }
}