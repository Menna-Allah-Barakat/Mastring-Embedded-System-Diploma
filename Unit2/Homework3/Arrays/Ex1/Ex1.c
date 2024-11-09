#include <stdio.h>
int main()
{
    float a[2][2];
    float b[2][2];
    float sum[2][2];
    int i,j;
    printf("Enter elements of 1st array:\r\n");//to input elements for matrix a.
    for(i=0;i<2;i++)//
    {
        for(j=0;j<2;j++)
        {
            printf("Enter a%d%d:",i,j);
            scanf("%f",&a[i][j]);
        }
    }
    printf("\r\n");
   printf("Enter elements of 2nd array:\r\n");//to input elements for matrix b.
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("Enter b%d%d:",i,j);
            scanf("%f",&b[i][j]);
        }
    }
    printf("\r\n");
    printf("sum of matrices:\r\n");//for the sum.
  for(i=0;i<2;i++)
  {
    for(j=0;j<2;j++)
    {
        sum[i][j]=a[i][j]+b[i][j];
        printf("%.1f ",sum[i][j]);
    }
    printf("\r\n");
  }
return 0;
}