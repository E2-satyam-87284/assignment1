#include<stdio.h>
#include<math.h>

int main()
{
  float a,b,c,s,perimeter,area;
  printf("Enter the value of sides of triangle:");
  scanf("%f%f%f",&a,&b,&c);
  perimeter = (a+b+c);
  printf("Perimeter of triangle=%.2f\n",perimeter);
  s = (a+b+c)/2;
  area = sqrt(s*(s-a)*(s-b)*(s-c));
  //printf("Perimeter of triangle=%.2f\n",perimeter);
  printf("s=%f\n",s );
  printf("Area of traingle=%.2f\n",area);

  return 0;
}
