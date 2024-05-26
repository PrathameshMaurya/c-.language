#include <stdio.h>
int main()
{
    float km;
    printf("Enter km/Hr : ");
    scanf("%f", &km);

    float ml = km / 1.6;
    printf("%f miles/Hr.", ml);

    return 0;
}