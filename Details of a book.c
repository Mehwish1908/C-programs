#include <stdio.h>
#include <stdlib.h>
struct Book
{
    char title[50];
    char author[50];
    float price;
};
int main()
{
    struct Book books[3];
    for(int i=0;i<3;i++)
        {
           printf("Enter details of book %d:\n",i+1);
           printf("Title:");
           scanf("%s",books[i].title);
           printf("Author:");
           scanf("%s",books[i].author);
           printf("Price:");
           scanf("%f",&books[i].price);
        }
    for(int i=0;i<3;i++)
        {
           printf("Book:%d\n",i+1);
           printf("Title:%s\n",books[i].title);
           printf("Author:%s\n",books[i].author);
           printf("Price:%.2f\n",books[i].price);
       }
     return 0;
}
