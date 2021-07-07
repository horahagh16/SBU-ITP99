#include <stdio.h>
#include <math.h>
int main()
{
    int m; 
    float d; 
    int r; 
    int h; 
    scanf("%d", &m);
    scanf("%f", &d);
    scanf("%d", &r);
    scanf("%d", &h);
    float va; 
    va= m*1000/d;
    float vj;
    float a,sh;
    int b, c; 
    #define M_PI 3.14159265358979323846
    sh=(h*r)/(sqrt(h*h+r*r)+r);
    a=4*(M_PI)/3;
    vj=a*sh*sh*sh;
    int num;
    num= va/vj; 
    printf("%d", num);
  
    return 0;
}