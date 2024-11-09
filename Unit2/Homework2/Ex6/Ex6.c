#include <stdio.h>
int main()
{
 int x,i,sum=0;
 printf("Enter an integer:");
 scanf("%d",&x);
 if(x>0){
    for(i=0;i<=x;i++)
    {
    sum=sum+i;
    }
    printf("sum=%d",sum);
 }
else{
    printf("Enter a positive value");
}
}