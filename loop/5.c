# include <stdio.h>
int main()
{
    int n, i, j;
    float temp;
    char harf;
    scanf("%d", &n);
    for (int i = 1; i <= (n+1)/2; i++)
    {
        for (int j = 1; j<=i ; j++)
        {
            harf= (char) i*j+64;
            printf("%c",harf);
            printf(" ");
        }
        printf("\n");
    }
    temp=n;
    for (int j = (n+1)/2+1; j<=n; j++)
    {
        for (int i = 1; i<=temp/2.0; i++)
        {
            harf= (char) i*j+64;
            printf("%c",harf);
            printf(" ");
        }
        printf("\n");
        temp=temp-2;
    }  
    return 0;
}