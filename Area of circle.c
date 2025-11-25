#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159
struct Circle
{
    float radius;
    float area;
};
int main()
{
    struct Circle c;
    printf("Enter the radius of the circle:\n");
    scanf("%f",&c.radius);
    c.area=PI*c.radius*c.radius;
    printf("Radius=%.2f\n",c.radius);
    printf("Area of the circle=%.2f\n",c.area);
    return 0;
}
