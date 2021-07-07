#include <iostream>
bool isvawel(char c);
using namespace std;
int main()
{
    char kalame[100];
    int temp[100];
    for (int i = 0; i < 100; i++)
    {
        temp[i]=0;
    }
    cin>>kalame;
    int n=0;
        do
        {
            n++;
        } while (kalame[n]!='\0');
    int max=0;
    for (int  i=0,j=0; i < n; i++, j++)
    {
        if (isvawel(kalame[i])==1)
        {
            max++;
            if (i==n-1)
            {
                temp[j]=max;
            }
            
        }
        else
        {
            temp[j]=max;
            max=0;
        }
    }
    for (int  i = 1; i < 100; i++)
    {
        if (temp[0]<temp[i])
        {
            temp[0]=temp[i];
        }    
    }
    cout<<temp[0]<<endl;
    return 0;
}
bool isvawel(char c)
{
    switch (c)
    {
    case 'a':case 'i':case 'o':case 'e':case 'u':
    case 'A':case 'I':case 'O':case 'E':case 'U':
    return 1;
    }
    return 0;
}