#include <stdio.h>
int prime(int a);
void goldbach(int n);
int main()
{
    int n, tafazol, x;
    scanf("%d", &n);
    goldbach(n);
    return 0;
}
int prime(int a)
{
    int flag = 1;
    for (int j = 2; j <= a/2; j++)
    {
        if((a%j) == 0)
        {
            return flag-1;
        }
    }
    return flag;
}
void goldbach(int n)
{
     for (int x=2 ; x<=n/2 ;x++)
    {
       int tafazol= n- x;
       if (prime(tafazol) == 1 && prime(x)==1) 
      {
        printf("%d %d\n", x, tafazol);  
      } 
    }
}