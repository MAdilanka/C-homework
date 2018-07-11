#include<stdio.h>
int main()
{
 int a;
 
 printf("Enter An Integer :");
 scanf("%d" ,&a);

 if (a>0)
   printf("Possitive Integer \n");
 
 else if (a<0)
   printf("Negetive Integer \n");

 else
   printf("Wrong Number Type");
 
 return 0;

}

