#include<stdio.h>

int main()
{

 int bin_num,deci_num,oct_num,y,x,z,p;
 
 printf("Enter binary Number : ");
 scanf("%d" ,&bin_num);
 y=1;
 deci_num=0;
 oct_num=0;
 p=1;
 
 
  while(bin_num>0)

   {
     x = bin_num % 10 ;
     bin_num=bin_num/10;
     deci_num += x * y;
     y=y*2;
   }
 printf("deci num : %d \n" ,deci_num);
  while(deci_num!=0)
   {
     z = deci_num % 8;
     oct_num+=z*p ;
     deci_num=deci_num/8;
     p=p*10;
   }
 
 printf("oct num : %d \n" ,oct_num);
 return 0;
 }
     
     
