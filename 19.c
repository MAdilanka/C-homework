#include<stdio.h>

int main()
{
int deci_num,oct_num,a,b;

printf("Enter octal number(0to7) :");
scanf("%d" ,&oct_num);

deci_num=0;
b=1;

while(oct_num!=0)
   {
     a=oct_num%10;
    deci_num+=a*b;
     b=b*8;
     oct_num=oct_num/10;
  }
printf("Decimal Number =%d \n" ,deci_num);
return 0;
}
