#include<stdio.h>

int main()
{
  int bin_num,deci_num,dig,y,x,nu_of_1s;

  printf("Enter Deccimal number : ");
  scanf("%d" ,&deci_num);

  y=1;
  x=0;
  bin_num=0;
  dig=0;
  nu_of_1s=0;

 for( deci_num ;deci_num>0 ;(deci_num/=2))
   {
     x=deci_num%2;
    if (x==1)
      { nu_of_1s++;}
     dig=x*y;
     bin_num+=dig;
     y*=10;
   }

 printf("Binary value = %d \n" ,bin_num);
 printf("nu of 1s = %d \n" ,nu_of_1s);

return 0;
}
