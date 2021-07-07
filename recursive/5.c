#include <stdio.h>
void hanoim(int n,char ebteda, char miyani, char enteha);
int main()
{
    int n;
    scanf("%d", &n);
    hanoim(n, 'A', 'B', 'C');
    return 0;
}
void hanoim(int n,char ebteda, char miyani, char enteha)
{
    if (n>=1){
        hanoim((n-1),ebteda,miyani,enteha);
        printf("%c->%c\n",ebteda,miyani);
        hanoim((n-1),enteha,miyani,ebteda);
        printf("%c->%c\n",miyani,enteha);
        hanoim((n-1),ebteda,miyani,enteha);
    }
}