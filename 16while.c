#include<stdio.h>

int main()
{

  int bin_num,deci_num,oct_num,a,b,c,x ;
 
  printf("Enter Octal number :");
  scanf("%d" ,&oct_num);
  
 deci_num=0;
 b=1;  
 x=1;
 bin_num=0;

  while(oct_num!=0)
  {
    a=oct_num%10;
    deci_num+=a*b;
    oct_num=oct_num/10;
    b=b*8;
  }
    printf("Decimal number = %d \n" ,deci_num);
   
  while (deci_num!=0)
  {
    c=deci_num%2;
    bin_num+=c*x;
    deci_num=deci_num/2;
    x=x*10;
  }
   printf("Binary Value = %d\n" ,bin_num);
   return 0;

}
  

