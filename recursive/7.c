#include <stdio.h>
long long int fastpower(long long int n,long long int m,long long int M);
int main()
{
    long long int base, power, mod;
    scanf("%lld %lld", &base, &power);
    mod= fastpower(base, power,1000000007);
    printf("%lld",mod);
    return 0;
}
 long long int fastpower(long long int  base, long long int power ,long long int M)
{
    long long int temp;
    M=1000000007;
    if(power==0)
       return 1;
    if(power==1)
    return base;
    temp =fastpower(base,power/2,M);
    if(power%2==0)
        return (temp*temp) % M;
    else
        return ( ( (temp*temp)% M) * base ) % M;
}