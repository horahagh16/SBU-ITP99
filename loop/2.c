#include <stdio.h>
int main()
    {
        double num, b;
        int a=0;
        do{
        scanf("%lf", &num);
        a=num;
        b=num-a;
        if (num>999)
        {
            fprintf(stderr, "Your number is big");
        }
        else if (num<0)
        {
            fprintf(stderr, "Your number is small");
        }
        else if (b!=0)
        {
            fprintf(stderr, "your number is not integer");
        }
        
        }while (a<1 || a>999 || b!=0);
    
        printf("%d", a);

        return 0;
    }