#include <stdio.h>
int main()
{
    int y, n;
    scanf("%i", &y);
    n= (y%4);
    y= y+3-n;
    printf("%i", y);
    return 0;
}