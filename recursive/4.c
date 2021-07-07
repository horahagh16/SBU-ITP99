#include <stdio.h>
int numberofsituations(int numberofpencil);
int main()
{
    int numberofpencil;
    scanf("%d", &numberofpencil);
    printf("%d", numberofsituations(numberofpencil));
    return 0;
}
int numberofsituations(int numberofpencil)
{
    if (numberofpencil==0)
    {
    return 0;
    }
    if (numberofpencil==1)
   {
      return 1;
   }
   else
    {
     return ( numberofsituations(numberofpencil-1) + numberofsituations(numberofpencil-2) );
    }
}