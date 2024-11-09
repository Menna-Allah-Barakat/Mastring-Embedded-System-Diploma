#include <stdio.h>
int main()
{
   char chr;
   printf("Enter a character:");
   scanf ("%c",&chr);
   if(chr>='A'&& chr<='z')
   {
    printf("%c is an alphabet.",chr);
   }
   else{
    printf("%c is not an alphabet.",chr);
   }
}