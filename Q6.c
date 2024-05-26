#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Enter your num1 : ");
    scanf("%d", &num1);

    printf("Enter your num2 : ");
    scanf("%d", &num2);

    int sum = num1 + num2;
    printf("SUM OF %d AND %d = %d", num1, num2, sum);

    return 0;
}