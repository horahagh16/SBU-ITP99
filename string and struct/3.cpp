#include <iostream>
void reshteha(char first[], char doer[]);
int elementnumber(char arrey[]);
using namespace std;
int main()
{
    char first[200], doer[200];
    cin.getline(first,200);
    cin.getline(doer,200);
    reshteha(first,doer);
    return 0;
}
void reshteha(char first[], char doer[])
{
    int i, j=0, k=0, flag=0;
    for ( i = 0;first[i]!='\0'; i++)
   {
       k=i;
       while (first[i] == doer[j])
       {
           i++;
           j++;
           if (j == elementnumber(doer))
           {
               flag=1;
               for (int m = k; m < i; m++)
               {
                   first[m]='*';
               }
               break;
           }
       }
      j=0;
      if (flag==0)
      {
        i=k;
      }
      else
      {
        flag=0;
      }
   }
   cout<<first<<endl;
}
int elementnumber(char arrey[])
{
    int n=0;
        do
        {
            n++;
        } while (arrey[n]!='\0');
        return n;
}