#include <iostream>
#include <math.h>
using namespace std;
struct distance
{
    double length, width;
};
int main()
{
   struct distance first, second; 
   cin>>first.length;
   cin>>first.width;
   cin>>second.length;
   cin>>second.width;
   double a, b;
   double result;
   a=(first.length-second.length)*(first.length-second.length);
   b=(first.width-second.width)*(first.width-second.width);
   result=sqrt(a+b);
   printf("%.5lf", result);
    return 0;
}