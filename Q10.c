#include <stdio.h>
int main()
{
    float r;
    printf("Enter the radius of sphere : ");
    scanf("%f", &r);

    float vol = 4 / 3 * 3.14 * r * r * r;

    printf("The volume of sphere is  = %f", vol);

    return 0;
}