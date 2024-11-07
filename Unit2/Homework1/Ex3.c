#include <stdio.h>
int main()
{
 int x,y,sum;
 printf("enter the 2 numbers: ");
 fflush(stdout);
 scanf("%d\n%d",&x,&y);
 sum=x+y;
 printf("sum:%d",sum);
 return 0;
}