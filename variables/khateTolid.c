#include <stdio.h>
int main()
{
    int adad;
    char d,e, f;
    scanf("%i", &adad);
    scanf("%c", &d);
    scanf("%c", &e);
    scanf("%c", &f);
    d=d-32;
    e=e-32;
    f=f-32; 
    int a, b, c;
    a=adad%10;
    adad=adad/10;
    b=adad%10;
    adad=adad/10;
    c=adad%10;
    a=a*100;
    b=b*10;
    adad=c+b+a;
    printf("%c",d);
    printf("%c",e);
    printf("%c",f);
    printf("%i", adad);

    return 0;
}