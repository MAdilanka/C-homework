#include<stdio.h>

int main()

{

 int deci_num,oct_num,x,y ;
 oct_num=0;
 y=1;
 
 printf("Enter Decimal Number : ");
 scanf("%d" ,&deci_num);

 while(deci_num!=0)
   {
     x=deci_num % 8;
     oct_num+= x*y;
     deci_num=deci_num/8;
     y=y*10;
  }
 printf("Octal Number = %d \n" ,oct_num);
 return 0 ;
}


