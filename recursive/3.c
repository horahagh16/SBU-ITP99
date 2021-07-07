#include <stdio.h>
int rowoftriangle(int rownumber, int i);
int main()
{
    int row, j=0;
    scanf("%d", &row);
    for(int i=0; j>=i; i++)
    {
     printf("%d ", rowoftriangle(j,i));
     while (j<row)
     {
         j++;
     }
    }
    return 0;
}
int rowoftriangle(int rownumber, int i)
{
 if(rownumber == i || i == 0)
 {
   return 1;
 }
 else
 {
    return rowoftriangle(rownumber-1, i) + rowoftriangle(rownumber-1, i-1);
 }
}