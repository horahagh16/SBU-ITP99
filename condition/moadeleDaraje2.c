#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c, delta, x1, x2;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
    
    delta=(b*b)-(4*a*c);

    if (a==0)
    {
        x1=(-c)/b;
        printf("%.2lf", x1);
    }
    else
     if (delta==0)
    {
        x1=(-b)/(2*a);
        printf("%.2lf",x1); 
    }
    else 
    if (delta>0)
    {        
        x1=((-b)+(sqrt(delta)))/(2*a);
        x2=((-b)-(sqrt(delta)))/(2*a);
    
        if (x1>x2)
        
            printf("%0.2lf %.2lf",x1, x2);
        
        else
            printf("%0.2lf %.2lf",x2, x1);
    }
    else
     if (delta<0)
        printf("Equation has no real roots\n");
    

    return 0;
}