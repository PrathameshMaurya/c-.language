#include <stdio.h>
int main()
{
    int m, h, tm;
    printf("Enter the tatal minut");
    scanf("%d", &tm);

    h = tm / 60;
    m = tm % 60;

    printf("%d : %d   Hr : Min", h, m);

    return 0;
}