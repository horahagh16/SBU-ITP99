#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cmath>
double simulation1(int step);
double simulation3(int step);
using namespace std;

int main()
{
    int step;
    double average, average3, sum3=0;
    scanf("%d", &step);
    int n=1000, sum=0;

   for (int j = 0; j<n ; j++)
   {
     sum= sum + simulation1(step);
   }
   average= (double) sum/n;

   for (int k = 0; k < n; k++)
   {
       sum3=sum3+ simulation3(step);
   }
   average3=(double) sum3/n;
    
    printf("Average disposition of a one dimensional random walk in %d steps is: %.1lf unit\n", step, average);
    printf("Average disposition of a three dimensional random walk in %d steps is: %.1lf unit", step, average3);

    return 0;
}

double simulation1(int step)
{
    int location=0, dir;

       for (int i = 0; i < step ; i++)
       {
        dir=rand()%3;
        if (dir==0)
        {
            location=location;
        }
        else if (dir==1)
        {
            location++;
        }
        else
        {
            location--;
        } 
        location=location;
       }
       location=fabs(location);

    return location;
}
double simulation3(int step)
{
    int locationx=0, locationy=0, locationz=0, dir;
    double distance;
    for (int i = 0; i < step; i++)
    {
        dir=rand()%7;
        switch (dir)
        {
        case 6: locationz--; break;
        case 5: locationz++; break;
        case 4: locationy--; break;
        case 3: locationy++; break;
        case 2: locationx--; break;
        case 1: locationx++; break;
        case 0: break;
        }
    }
    distance=(double) sqrt((locationx*locationx)+(locationy*locationy)+(locationz*locationz));

    return distance;
}