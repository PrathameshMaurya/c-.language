#include <stdio.h>
int main()
{
    int td, y, w, d, temp1;

    printf("Enter total no. of day : ");
    scanf("%d", &td);

    y = td / 365;
    temp1 = td % 365;
    w = temp1 / 7;
    d = temp1 % 7;

    printf("%d year : %d week : %d day", y, w, d);

    return 0;
}