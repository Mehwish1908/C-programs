#include <stdio.h>
#include <stdlib.h>
int getnumber()
{
   int num;
   printf("Enter a number:\n");
   scanf("%d",&num);
   return num;
}
int main()
{
   int n=getnumber();
   printf("You entered:%d",n);
}
