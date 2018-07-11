#include<stdio.h>

int main()
{
 int a;
 
 printf("Enter 	number : \n");
 scanf("%d" ,&a);

 if( a%5 == 0 )
 {
   printf("Divisible Number by 5 \n");
   printf("Answer = %d \n" ,a/5);
 }
 else
  printf("Not Divisible Number by 5 \n");
  return 0;
}
