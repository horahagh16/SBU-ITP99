#include <iostream>
using namespace std;
void anagram(char str1[], char str2[]);
int main ()
{
    char main[10000], unknown[10000];
    cin>>main;
    cin>>unknown;
    anagram(main,unknown);
    return 0;
}
void anagram(char main[], char unknown[])
{
    int i,flag = 0;
    int  tempofmain[26], tempofunknown[26];
    //har harfiro ye int mikone v mesle andis ha tedad on harf ro mishmore
    for ( i = 0; i < 26; i++)
    {
        tempofunknown[i]=0;
        tempofmain[i]=0;
    }
    for( i = 0; main[i] != '\0'; i++)
    {
        tempofmain[main[i] - 'a']++;
    //base kar ke az 0 betoone shoro beshe ro ba kam kardan harfi ke hast az 'a' be dast miyaram
    }
    for( i = 0; unknown[i] != '\0'; i++)
    {
        tempofunknown[unknown[i] - 'a']++;
    }
    for (i = 0; i < 26; i++)
    {
        if (tempofmain[i] != tempofunknown[i])
            flag = 1; 
    }
    if (flag == 1)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
}