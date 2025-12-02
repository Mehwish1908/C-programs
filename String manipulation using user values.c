#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str1[30];
    char str2[30];
    printf("Enter string1:");
    scanf("%s",str1);
    printf("Enter string2:");
    scanf("%s",str2);
    printf("Length of str1:%lu\n",strlen(str1));
    strcat(str1,str2);
    printf("After concatenation:%s\n",str1);
    strcpy(str2,str1);
    printf("Copied string:%s\n",str2);
    printf("Comparison result:%d\n",strcmp(str1,str2));
}
