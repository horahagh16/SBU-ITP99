#include <stdio.h>
int main()
{
    int en, pc, prp;
    scanf("%3d", &en);
    scanf("%3d", &pc);
    scanf("%3d", &prp);

    int rat1, rat2, rat3;
    rat1=en/100;
    rat2=pc/100;
    rat3=prp/100;
    en=en%100;
    pc=pc%100;
    prp=prp%100;

    float miangin;
    miangin=(float) (rat1*en+ rat2*pc+ rat3*prp)/(rat1+rat2+rat3);
    printf("%.4f", miangin);

    return 0;
}