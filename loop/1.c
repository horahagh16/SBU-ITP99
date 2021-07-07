#include <stdio.h>
int main()
    {
        double num, b;
        int a=0;
        do{
        scanf("%lf", &num);
        a=num;
        b=num-a;
        }while (a<1 || a>999 || b!=0);
    
        printf("%d", a);

        return 0;
    }