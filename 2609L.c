#include <reg51.h>

int index = 0;
sbit x = P1^1;

void main() {
	TMOD = 0x02;
	IE = 0x82;
	TL0 = 0xE1;
	TH0 = 0X0A;
	TR0 = 1;
	x=1;
	while(1) {
		if(index==70) {
			x=0;
		}
		if(index==100) {
			x=1;
			index=0;
		}
	}
}

void isr(void) interrupt 1  {
	index++;
}
