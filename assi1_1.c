#include<stdio.h>

int main()
{
 int a,b;
 
 printf("Enter two numbers:");
 scanf("%d%d",&a,&b);

  int add,diff,prod;
  add=a+b;
  diff=a-b;
  prod=a*b;
  printf("addition is:%d\n", add);
  printf("difference is:%d\n", diff);
  printf("product is:%d\n", prod);
 
 return 0;

}
