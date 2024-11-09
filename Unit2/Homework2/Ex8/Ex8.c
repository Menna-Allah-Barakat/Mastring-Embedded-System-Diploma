#include<stdio.h>
int main()
{
float x,y,result=0;
char op;
printf("Enter the operator (+ or - or * or /): ");
scanf(" %c",&op);
printf("Enter the two oprands: ");
scanf("%f\r\n%f",&x,&y);
switch(op){
    case '+':
    {
        result=x+y;
    }
    break;
    case '-':
    {
        result=x-y;
    }
    break;
    case '*':
    {
        result=x*y;
    }
    break;
    case '/':
    {
        if(y!=0){
        result=x/y;
        }
        else{
            printf("Error!!:devision by zero");
            return 1;
        }
    }
    break;
}
printf("%.2f %c %.2f= %.2f",x,op,y,result);
return 0;
}