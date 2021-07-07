#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
double logari(double low, double high,int n);
int main()
{
    int n;
    scanf("%d", &n);
    double javab=logari(1,1000,n); //n==1 x==1 && n==4000 x==1000
    printf("%.3lf",javab);
    return 0;
}
double logari(double low, double high, int n)
{ 
  double mid = (low + high) / 2; 
  float eps=0.00001;
    if (fabs(mid*log10(mid)+mid-n)<eps)  //sharte paye
    { 
      return mid; 
    } 
    else if((mid*log10(mid)+mid-n)>eps) //meghdar bozorgtar shode bayad kamesh konim
    { 
      return logari(low, mid,n); 
    } 
    else
    { 
      return logari(mid, high,n); //meghdar koochiktar shode bayed ziyad beshe
    } 
}
