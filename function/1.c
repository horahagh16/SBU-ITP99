#include <stdio.h>
int adadkamel(int a);
int main()
{
    int a, b, x;
    scanf("%d %d",&a, &b);
    for (int x = a; x<=b; x++)
    {
        if (adadkamel(x)==x)
        {
            printf("%d\n", x);
        } 
    }
    return 0;
}
int adadkamel(int x)
{
     int i=0, sum=0, baghimande;
    do 
    {
       do
        {
          i++;
          baghimande=x%i;
        }while (baghimande!=0);
       sum=sum+i;
    }while (i<x);
    if (sum==2*x)
    return x;
}