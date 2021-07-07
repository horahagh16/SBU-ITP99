#include <stdio.h>
int main()
{
    int a, b, c, d, e, f, type, i, j, k;
    int arrey[6];
    scanf("%d %d %d %d %d %d", &a,&b,&c,&d,&e,&f);
    arrey[0]=a;
    arrey[1]=b;
    arrey[2]=c;
    arrey[3]=d;
    arrey[4]=e;
    arrey[5]=f;
    scanf("%d", &type);
    if(type==1)
    {
        scanf("%d", &i);
        if(i>=0)
        {
        printf("%d", arrey[i]);
        }
        else
        {
            i=6+i;
            printf("%d", arrey[i]);
        }
    }
    else if(type==2)
    {
        scanf("%d %d", &i, &j);
        if(i>=0 && j>=0) //har2 +
        {
         for (int row=i; row<j; row++)
         {
            printf("%d ", arrey[row]);
         }
        }
        else if(i>=0 && j<0) //+ -
        {
            j=6+j;
         for (int row=i; row<j; row++)
         {
            printf("%d ", arrey[row]);
         }
        }
        else if(i<0 && j>=0) //- +
        {
            i=6+i;
         for (int row=i; row<j; row++)
         {
            printf("%d ", arrey[row]);
         }
        }
        else //- -
        {
           i=6+i;
           j=6+j;
         for (int row=i; row<j; row++)
         {
            printf("%d ", arrey[row]);
         }  
        }
    }
    else
    {
      scanf("%d %d %d", &i, &j, &k);
        if(i>=0 && j>=0) //har2 +
        {
         for (int row=i; row<j; row+=k)
         {
            printf("%d ", arrey[row]);
         }
        }
        else if(i>=0 && j<0) //+ -
        {
            j=6+j;
         for (int row=i; row<j; row+=k)
         {
            printf("%d ", arrey[row]);
         }
        }
        else if(i<0 && j>=0) //- +
        {
            i=6+i;
         for (int row=i; row<j; row+=k)
         {
            printf("%d ", arrey[row]);
         }
        }
        else //- -
        {
           i=6+i;
           j=6+j;
         for (int row=i; row<j; row+=k)
         {
            printf("%d ", arrey[row]);
         }  
        }
    }
    return 0;
}