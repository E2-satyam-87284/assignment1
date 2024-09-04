#include<stdio.h>

int main()
{
 int num;
 printf("Enter the integer:");
 scanf("%d",&num);

 printf("character:%c\n",(char)num);
 printf("decimal:%d\n",num);
 printf("octal:%o\n",num);
 printf("hexadecimal:%x\n",num);
return 0;


}
