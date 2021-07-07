#include <stdio.h>
void C(double avaliye,double variz,double bardasht,double sood, int dore);
void S(double avaliye,double variz,double bardasht,double sood, int dore);
int main()
{
    char model;
    double avaliye, variz, bardasht, sood;
    unsigned int dore;
    scanf("%c %lf %lf %lf %lf %d", &model, &avaliye, &variz, &bardasht, &sood, &dore);
    if ( model== 'C')
    {
        C( avaliye, variz, bardasht, sood, dore);
    }
    else
    {
        S(avaliye, variz, bardasht, sood, dore);
    }
    
    return 0;
}
void C(double avaliye,double variz,double bardasht,double sood, int dore)
{
    int i=0;
    
    while (i<dore)
    {
    avaliye=avaliye+variz-bardasht;
    if (avaliye>0)
    {
        avaliye= avaliye *((sood+100)/100);
    }
        i++;
    }
    printf("Your balance in %d years will be: %.3lf", dore, avaliye);
}

void S(double avaliye,double variz,double bardasht,double sood, int dore)
{
    double simple=0, nahayi;
    int i=0;
    
    while (i<dore)
    {
     avaliye=avaliye+variz-bardasht;  

    if (avaliye>0)
    {
       simple= simple+(avaliye*(sood/100));  
    } 
        i++;
    }
    nahayi=avaliye+simple; 
   
   printf("Your balance in %d years will be: %.3lf", dore, nahayi);
}