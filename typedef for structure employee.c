#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int emp_id;
    char emp_name[50];
    float emp_salary;
}Employee;
int main()
{
    int i;
    Employee employees[3];
    Employee highest;
    for(i=0;i<3;i++)
        {
           printf("Enter details of employee %d:\n",i+1);
           printf("Employee ID:");
           scanf("%d",&employees[i].emp_id);
           printf("Employee Name:");
           scanf("%s",employees[i].emp_name);
           printf("Employee Salary:");
           scanf("%f",&employees[i].emp_salary);
           if(i==0||employees[i].emp_salary> highest.emp_salary)
           {
               highest=employees[i];
           }
        }
    printf("\nEmployee with Highest Salary\n");
    printf("Employee ID:%d\n",highest.emp_id);
    printf("Employee Name:%s\n",highest.emp_name);
    printf("Employee Salary:%.2f\n",highest.emp_salary);
    return 0;
}
