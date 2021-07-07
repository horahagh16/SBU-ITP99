#include <stdio.h>
int main()
{
    int n, sum=0;
    scanf("%d", &n);
   for (int i=0; i<n; i++) 
   {
       int number;
       scanf("%d", &number);
       sum=sum+number;
       if(number==1)
       {
       printf("%d", i);
       break;
       }
   }
   if(sum==0)
   {
    int a=-1;
    printf("%d",a);
   }
   return 0;
}