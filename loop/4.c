#include <stdio.h>
int main ()
{
    double n, high, max=0;
    int j=0;
    scanf("%lf", &n);
   for (double i = 0; i < n; i++)
   {
       scanf("%lf", &high);
       if (high>max)
       {
           max=high;
           j++;
       }   
   }
   printf("%d",j);
    
    return 0;
}