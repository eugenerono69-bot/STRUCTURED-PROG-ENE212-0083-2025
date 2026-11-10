#include <stdio.h>
#include <math.h>

int main()
{
    float radius;
    float area;

     printf("Enter radius of the circle: \n");
     scanf("%f", &radius);

    area = 4 * 3.142 * radius * radius;
    printf("Area = %.2f", area);

    return 0;
}
