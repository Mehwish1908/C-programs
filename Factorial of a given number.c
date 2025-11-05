#include <stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    int fact=1;
    printf("Enter a positive integer\n");
    scanf("%d",&n);
    if(n<0)
    {
        printf("Factorial is not defined for negative numbers\n");
    }
    else
    {
        for(int i=1;i<=n;i++)
        {
            fact=fact*i;
        }
        printf("Factorial of %d = %d\n",n,fact);
    }
    return 0;
}
