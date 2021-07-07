#include <stdio.h>
int main()
{
    int n, i=0, sum=0, baghimande;
    scanf("%d",&n); 
    do 
    {
       do
        {
          i++;
          baghimande=n%i;
        }while (baghimande!=0);
       sum=sum+i;
    }while (i<n);
    if (sum==2*n)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}