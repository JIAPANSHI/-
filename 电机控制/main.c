#include"main.h"

#define uint unsigned int
#define uchar unsigned char
sbit anjian1=P3^0;//jiasu
sbit anjian2=P3^1;//jiansu
sbit dianji=P1^7;
sbit wei=P2^7; //weixuan
sbit duan=P2^6;	//duanxuan

void main()
{
   while(1)
   {
      init(); //chushihua
	  key(); //anjian
	  led();
	  display();//shumaguanxianshi
	  qudong();//dianji
   }
}

void delayms(uint x)//yanshihanshu
{
   uint i;
   while(x--)
   for(i=0;i<123;i++);
}
