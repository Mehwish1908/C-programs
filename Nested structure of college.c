#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct department
{
    char cse[50];
    char it[50];
    char aiml[50];
    char ds[50];
};
struct college
{
    char name[50];
    char city[50];
    struct department dept;
};
int main()
{
    struct college c1;
    strcpy(c1.name,"Garden City University");
    strcpy(c1.city,"Bengaluru");
    strcpy(c1.dept.cse,"Computer Science and Engineering");
    strcpy(c1.dept.it,"Information Technology");
    strcpy(c1.dept.aiml,"Artificial Intelligence and Machine Learning");
    strcpy(c1.dept.ds,"Data Science");
    printf("College Name:%s\n",c1.name);
    printf("City:%s\n",c1.city);
    printf("Departments:\n");
    printf("CSE:%s\n",c1.dept.cse);
    printf("IT:%s\n",c1.dept.it);
    printf("AIML:%s\n",c1.dept.aiml);
    printf("DS:%s\n",c1.dept.ds);
    return 0;
}
