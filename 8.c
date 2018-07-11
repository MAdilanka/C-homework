#include<stdio.h>

int main()
{
  int bin_num,deci_num,dig,y,x;

  printf("Enter Binary Number(only 1s and 0s) : \n");
  scanf("%d" ,&bin_num);

  y=1;
  x=0;
  deci_num=0;
  dig=0;

 for( bin_num ;bin_num>0 ;(bin_num/=10))
   {
     x=bin_num%10;
     dig=x*y;
     deci_num+=dig;
     y*=2;
   }

 printf("Decimal Number = %d \n" ,deci_num);     
 return 0;
}

