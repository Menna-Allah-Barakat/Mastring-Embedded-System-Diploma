#include <stdio.h>
int main()
{
int n;
float num[n],average=0,sum=0;
printf("Enter number of data:");
scanf("%d",&n);
for(int i=1;i<=n;i++)
 {
 printf("%d.Enter number:",i);
 scanf("%f",&num[i]);
 sum=sum+num[i];
 }
average=sum/n;
printf("average=%.2f",average);
return 0;
}