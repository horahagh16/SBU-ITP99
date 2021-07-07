#include <stdio.h>
int kashi(int n);
int main()
{
    int totality, n;
    scanf("%d", &n);
    totality= kashi(n);
    printf("%d", totality);
    return 0;
}
int kashi(int n)
{
    int totality, kashi3;
    if (n>=3)
    {
        kashi3=n/3;
        if (kashi3==1)
        {
         totality =kashi(n-1)+1;
        }
        else
        {
           totality=kashi(n-1)+kashi(n-3);
        }
    }
    else
    {
        totality=1;
    }
    
   return totality;
}