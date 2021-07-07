#include <stdio.h>
int main()
{
    int n,a, b,c,d;
    scanf("%i", &n);

    a=n%10; 
    n=n/10; 
    
    b=n%10;
    n=n/10;

    c=n%10;
    n=n/10;

    d=n%10;

    if (a!=b)
        {
            if (a!=c)
            {
                if (a!=d)
                printf("%d",a);
            }
            else (printf("%d",b));
        } 
    else if (c!=b)
            {
                printf("%d",c); 
            }
    else if (c!=d)
           printf("%d",d);

    
    return 0;
}