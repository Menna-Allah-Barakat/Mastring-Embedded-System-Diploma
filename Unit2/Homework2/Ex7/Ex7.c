#include<stdio.h>
int main()
{
    int x,i;
    long long int factorial=1;
    printf("Enter an integer:");
    scanf("%d",&x);
    if(x>0){
        for(i=1;i<=x;i++)
        {
            factorial*=i;
        }
        printf("factorial=%d",factorial);
    }
    else if(x<0)
    {
        printf("Error!!:factorial of negative number doesn't exist.");
    }
    else if(x==0)
    {
        printf("factorial=%d",1);
    }
}