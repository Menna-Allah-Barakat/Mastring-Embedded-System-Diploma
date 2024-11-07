#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter a value:");
    scanf("%d",&a);
    printf("Enter b value:");
    scanf("%d",&b);
    a=a+b;
    b=a-b;//b=(a+b)-b
    a=a-b;
    printf("After swaping\na=%d\nb=%d",a,b);

}