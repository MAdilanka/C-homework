#include<stdio.h>

int main()
{
  int M,N,t;
  printf("Enter number M and N : \n");
  scanf("%d%d" ,&M,&N);

  printf("Before Swaping\nM = %d \nN = %d\n" , M, N);
  
  t=M;
  M=N;
  N=t;
 
  printf("After Swaping\nM = %d \nN = %d\n" , M, N);

return 0;


}
