#include <iostream>
using namespace std;
int main()
{
    int tedadekalamat;
    cin>>tedadekalamat;
    for (int i = 0; i < tedadekalamat; i++)
    {
        char kalame[1000];
        cin>>kalame;
        int n=0;
        do
        {
            n++;
        } while (kalame[n]!='\0');
        if (n>10)
        {
            cout<<kalame[0]<<n-2<<kalame[n-1]<<endl;
        }
        else
        {
            cout<<kalame<<endl;
        }
        
    }
    
    return 0;
}