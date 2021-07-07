#include <stdio.h>
#include <math.h>
int main()
{
    float a , b, n,gold;
    scanf("%f", &a);
    scanf("%f", &b);
    n = a/b;
    gold=((sqrt(5))+1)/2;
    n<gold+0.05 && n>gold-0.05 ? printf("true") : printf("false");

    return 0;
}
