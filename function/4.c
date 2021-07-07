#include <stdio.h>
int circle(int x0, int y0, int r, int x, int y); 
int main()
{
    int x1, x2, x3, y1, y2, y3, r1, r2, r3, x, y;
    scanf("%d %d %d", &x1, &y1, &r1);
    scanf("%d %d %d", &x2, &y2, &r2);
    scanf("%d %d %d", &x3, &y3, &r3);
    scanf("%d %d", &x, &y);

    if (circle(x1, y1, r1, x, y)==2 && circle(x2, y2, r2, x, y)==2 && circle(x3, y3, r3, x, y)==2)
    {
        printf("1");
    }
    else if (circle(x1, y1, r1, x, y)==1 && circle(x2, y2, r2, x, y)==2 && circle(x3, y3, r3, x, y)==2)
    {
        printf("2");
    }
    else if (circle(x1, y1, r1, x, y)==2 && circle(x2, y2, r2, x, y)==1 && circle(x3, y3, r3, x, y)==2)
    {
        printf("3");
    }
    else if (circle(x1, y1, r1, x, y)==1 && circle(x2, y2, r2, x, y)==1 && circle(x3, y3, r3, x, y)==2)
    {
        printf("4");
    }
    else if (circle(x1, y1, r1, x, y)==2 && circle(x2, y2, r2, x, y)==2 && circle(x3, y3, r3, x, y)==1)
    {
        printf("5");
    }
    else if (circle(x1, y1, r1, x, y)==1 && circle(x2, y2, r2, x, y)==2 && circle(x3, y3, r3, x, y)==1)
    {
        printf("6");
    }
    else if (circle(x1, y1, r1, x, y)==2 && circle(x2, y2, r2, x, y)==1 && circle(x3, y3, r3, x, y)==1)
    {
        printf("7");
    }
    
    else if (circle(x1, y1, r1, x, y)==1 && circle(x2, y2, r2, x, y)==1 && circle(x3, y3, r3, x, y)==1)
    {
        printf("8");
    }
    return 0;
}

int circle(int x0, int y0, int r, int x, int y)
{

   if ((x-x0)*(x-x0)+(y-y0)*(y-y0)<=r*r)
   {
       return 1; //dakhel ast
   }
   else
   {
       return 2; //dakhel nist
   }
   
}