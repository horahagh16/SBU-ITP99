#include <iostream>
void calculator(char str[]);
using namespace std;
int main()
{
    char str[500];
    cin>>str;
    calculator(str);
    return 0;
}
void calculator(char str[])
{
    long long int sum=0;
    for (int i = 0; str[i]!='\0' ;)
    {
        if (str[i]=='+')
        {
            long long int num=0;
            i++;
            while (str[i]>='0' && str[i]<='9'&& str[i]!='\0')
            {
                num=num*10+(str[i]-'0');
                i++;
            }
            sum=sum+num;  
        }
        else if (str[i]=='-')
        {
            long long int num=0;
            i++;
            while (str[i]>='0' && str[i]<='9'&& str[i]!='\0')
            {
                num=num*10+(str[i]-'0');
                i++;
            }
            sum=sum-num;
        }
        else
        {
            long long int num=0;
            while (str[i]>='0' && str[i]<='9'&& str[i]!='\0')
            {
                num=num*10+(str[i]-'0');
                i++;
            }
            sum=num; 
        }   
    }
    cout<<sum<<endl;
}