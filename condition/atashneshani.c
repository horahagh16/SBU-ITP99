#include <stdio.h>
int main()
{
    int x1, y1, y2, x2, x3, y3, xh, yh; 
    double dis1, dis2, dis3, co;   
    scanf("%d %d %d %d %d %d",&x1, &y1, &x2, &y2, &x3, &y3);
    scanf("%d %d", &xh, &yh);
    scanf("%lf", &co);
     if (xh>=0 && xh<=1700 && yh>=0 && yh<=1200) 
     {
         dis1=((x1-xh)*(x1-xh))+((y1-yh)*(y1-yh)); 
         dis2=((x2-xh)*(x2-xh))+((y2-yh)*(y2-yh));
         dis3=((x3-xh)*(x3-xh))+((y3-yh)*(y3-yh));
         if (dis1<=dis2 && dis1<=dis3) 
         {
        if (dis1<160000)
        {
            printf("Center1\nGreen area\n");
        }    
            else if (dis1>=160000 && dis1<=640000)
            {
                printf("Center1\nYellow area\n");
            }
            else if (dis1>640000)
            {
                printf("Center1\nRed area\n");
            }
         }
         else if (dis2<dis1 && dis2<=dis3) 
         {
              if (dis2<160000)
        {
            printf("Center2\nGreen area\n");
        }    
            else if (dis2>=160000 && dis2<=640000)
            {
                printf("Center2\nYellow area\n");
            }
            else if (dis2>640000)
            {
                printf("Center2\nRed area\n");
            }
         }
         else if (dis3<dis1 && dis3<dis2) 
         {
              if (dis3<160000)
        {
            printf("Center3\nGreen area\n");
        }    
            else if (dis3>=160000 && dis3<=640000)
            {
                printf("Center3\nYellow area\n");
            }
            else if (dis3>640000)
            {
                printf("Center3\nRed area\n");
            }
         } 
     if (co>3000)
     {
         printf("Emergency situation");
     }
     else if (co<0)
     {
        printf("Invalid amount of carbon monoxide");
     }
     }
     else
     {
         printf("Invalid coordinates");
     }
    return 0;
}