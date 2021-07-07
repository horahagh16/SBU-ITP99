#include <iostream>
#include <stdlib.h>
using namespace std;
int main() 
{ 
    int years, prisonernumber, filenumber;
    cin >> years;//salhay tasis
    int** wanted =new int*[years+1]();
    for (int  i = 1; i <= years; i++)
    {
        cin >> prisonernumber;//tedad zendani dar oon sal
        wanted[i]=new int[prisonernumber];
        for (int j = 0; j < prisonernumber; j++)
        {
            cin >> filenumber;//shomare parvande
            wanted[i][j] = filenumber; 
        } 
    } 
    int memorynumber;
    int wyear, wprisoner;//sal v zendani ke mikhad bebine
    cin >> memorynumber;
    for (int i = 1; i <= memorynumber; i++)
    {
        cin >> wyear >> wprisoner;
        cout << wanted[wyear][wprisoner-1] << endl;
    }
    
    for (int i = 0; i < prisonernumber; i++)
    {
        delete[] wanted[i];
    }
    delete wanted;

    return 0; 
}   
