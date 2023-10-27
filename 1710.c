#include<reg51.h>

voud delay(){
  unsigned int i,j;
  for (int i = 0; i < 100; i++)
  for(int j = 0; j < 1000; j++);
}

void main(){
  unsigned char seg[10] = {oxc0, 0xf9, oxa4, 0xb0, 0x82,0xf8, 0x80, 0x90};
  int i;
  P1 = )x00;
  while(1){
    for (int i = 0; i < 10; i++){
      P1 = seg[i];
      delay();
    }
  }
}
