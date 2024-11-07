#include <stdio.h>
int main()
{
float x,y,product;
printf("Enter the two numbers:");
fflush(stdout);
scanf("%f\n%f",&x,&y);
product=x*y;
printf("%f",product);
return 0;
}