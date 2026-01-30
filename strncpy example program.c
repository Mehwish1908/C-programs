#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char dest[10];
    char src[]="Programming";
    strncpy(dest,src,sizeof(dest)-1);
    dest[sizeof(dest)-1]='\0';
    printf("Safely copied string:%s",dest);
    return 0;
}
