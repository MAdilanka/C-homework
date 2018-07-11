#include<stdio.h>

int main()
{
  int x,y,z,p,q,r,days;
   x=0;
   y=0;
   z=0;
   p=0;
   q=0;
   r=0;

 printf("Enter number : ");
 scanf("%d" ,&days);

if (days>=365)
{
    x=days/365;
    y= days-(x*365);
    z=y/30;
    p=y-(30*z);
    q=p/7;
    r=p-(q*7);
   
   printf("years =%d \n" ,x);
   printf("months =%d \n" ,z);
   printf("weeks =%d \n" ,q);
   printf("days =%d \n" ,r);

}
 else if (days<365 && days>=30)
{
    z=days/30;
    p=y-(30*z);
    q=p/7;
    r=p-(q*7);
  
   printf("months =%d" ,z);
   printf("weeks =%d" ,q);
   printf("days =%d" ,r);

}
 else if(days<30 && days>=7)
{
   q=days/7;
    r=p-(q*7); 
   
  printf("weeks =%d" ,q);
   printf("days =%d" ,r);
}
else
  printf("dates =%d" ,days);

return 0;
}






