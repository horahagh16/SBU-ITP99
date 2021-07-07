#include <stdio.h>
int main()
{
    char a;
    scanf("%c", &a);
    char b;
    scanf("%c", &b);
    char c;
    scanf("%c", &c);
    char end1 = a-32;
    char end2 = b-32;
    char end3 = c-32;
    printf("%c", end1);
    printf("%c", end2);
    printf("%c", end3);

    return 0;
}