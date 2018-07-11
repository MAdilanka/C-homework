#include<stdio.h>

int main()
{
 int num,i,odd,even;
 
 printf("Enter Number : ");
 scanf("%d" ,&num);
 odd = 0;
 even = 0; 

 for(i=1 ;i<=num ;i++)
   {
    if (i%2 == 0)
        even += i;
        
    else 
        odd += i ;    
   }
     printf("sum of even numbers = %d \n" ,even);
     printf("Sum of Odd numbers = %d \n" ,odd);
 return 0;
}
