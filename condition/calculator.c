#include <stdio.h>
int main()
{
    double n,m,end;
    char a;
    scanf("%lf\n %c\n %lf", &n, &a,&m);
    switch (a)
    {
    case '+': end= n + m; break;
    case '-': end= n - m; break;
    case '/': end= n / m; break;
    case '*': end= n * m; break;
   
    default:
        break;
    }
    printf("%.2lf", end);
    
    return 0;
    
}
    