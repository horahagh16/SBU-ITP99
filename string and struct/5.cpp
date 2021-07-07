#include <iostream>
int elementnumber(char arrey[]);
using namespace std;
int main()
{
    int anum=0;
    char makeitgood[10000001];
    cin>> makeitgood;
    int n=elementnumber(makeitgood);
    for (int i = 0; i < n; i++)
    {
        if (makeitgood[i]=='a')
        {
            anum++;
        }
    }
    if (anum>(n/2))
    {
        cout<<n<<endl;
    }
    else
    {
        int end=(2*anum-1);
        cout<<end<<endl;
    }
    return 0;
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