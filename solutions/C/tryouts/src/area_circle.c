#include"../include/sumit.h"

void calculate_area()
{   
    float radius,area;
    printf("\n\n\nenter value of radius: ");
    scanf("%f",&radius);
    area=pi*pow(radius,2);
    printf("\narea of circle:%f ",area);
}