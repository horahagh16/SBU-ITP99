# include <stdio.h>
int main()
{
    unsigned long long int n, i=1, nejat=0, baghimande;
    scanf("%llu", &n);
    while (n>0)
    {
        baghimande= n%9;
        n=n/9;
        nejat=nejat+(baghimande*i);
        i=i*10;
    }
    printf("%llu",nejat);
    return 0;
}