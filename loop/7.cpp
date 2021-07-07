#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;
int main()
{
    double n, x, x1,a,b, eps=0.00001;
    scanf("%lf", &n);
    a=sqrt(n-1);
    b=sqrt(n+1);
   while ((fabs((x*x-cos(x)-n)))>eps)
   {
       x=(a+b)/2;
       if ((b*b-cos(b)-n)*(x*x-cos(x)-n)>0)
       {
           b=x;
       }
       else
       {
           a=x;
       }   
   }
    x1=-x;
    printf("%.3lf\n%.3lf", x1, x);
    return 0;
}