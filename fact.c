#include<stdio.h>
int factorial(){
  int i,f=1,num;
 
  printf("Enter a number\n:");
  scanf("%d",&num);
 
  for(i=1;i<=num;i++)
      f=f*i;
 
  printf("Factorial of %d is: %d",num,f);
  return 0;
}
