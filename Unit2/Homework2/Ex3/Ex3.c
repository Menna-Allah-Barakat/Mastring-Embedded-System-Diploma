#include <stdio.h>
int main()
{
float a ,b,c;
printf("Enter three numbers: ");
scanf("%f\r\n%f\r\n%f",&a,&b,&c);
if (a>b&& a>c)
{
    printf("%f is the largest number",a);
}
else if (b>a && b>c)
{
    printf("%f is the largest number",b);
}
else{
    printf("%f is the largest number",c);
}
}