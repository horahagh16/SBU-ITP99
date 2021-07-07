#include <stdio.h>
int main()
{    
    int leng=100000;
    int arraynum;
    scanf("%d", &arraynum); //tedad azaye arayeh
    int chandbardare[leng];
    for (int i = 0; i < leng; i++)
    {
        chandbardare[i]=0;
    }
    for(int i=0; i < arraynum; i++)
    {
        int member;
        scanf("%d", &member); // azaro dare migire
        chandbardare[member]+=1; // mishmore oon ozve chand bar oomade
    }
    int k;
    scanf("%d", &k); //chand bar bayad biyad
    for (int i = 0; i < leng; i++)
    {
        if (chandbardare[i]==k)
        {
            printf("%d ", i);
            break;
        }  
    }
    return 0;
}