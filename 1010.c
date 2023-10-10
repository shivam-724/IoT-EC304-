#include <reg51.h>
int i;
unsigned char A[5]= "anant";
void main()
{
	TMOD=0X20;
	TH1=0XFD;
	SCON=0x50; // limited to this for now
	TR1=1;
	while(1){
		for(i=0; i<=4; i++){
			SBUF=A[i]; //SBUF does the job of data transfer
			while(TI==0);
			TI=0;
		}
	}
}

// divide by cf. divide by 32. convert in hz. divide by baud rate
// subtract by 256. convert in H. that's the value of TH1
