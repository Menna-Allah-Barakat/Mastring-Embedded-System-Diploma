#include <stdio.h>
int main()
{
    float a,b,temp;
    printf("Enter the value of a:");
    scanf("%f",&a);
    printf("Enter the value of b:");
    scanf("%f",&b);
    temp=a;
    a=b;
    b=temp;
   printf("After swaping the value of a=%f\n",a);
   printf("After swaping the value of b=%f\n",b);
 return 0;
}
