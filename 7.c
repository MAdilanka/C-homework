#include<stdio.h>
int main()
{
 int num,dig,sum;
 sum=0;
 
 printf("Enter an Integer : \n");
 scanf("%d" ,&num);

  for(num; num>0 ;(num/=10))
   {
     dig=num%10;
     sum+=dig;
    }

printf("Sum of Digits in Given Integer = %d \n" ,sum);
return 0;

}
