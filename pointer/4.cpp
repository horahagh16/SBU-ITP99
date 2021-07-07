#include <iostream>
#include <stdlib.h>
void enqueue(char* &queue, int &n, char data);
char dequeue(char* &queue, int &n);
void print_queue(char* queue, int n);
using namespace std;
int main() 
{ 
    int n=0;
    char* queue=new char[n];
    char charecter;
    cin>>charecter;
    while (charecter!='F')
    {
        if (charecter=='E')
        {
            char data;
            cin>>data;
            enqueue(queue,n,data);
        }
        else if (charecter=='D')
        {
            cout<<dequeue(queue,n)<<endl;
        }
        else if (charecter=='P')
        {
            print_queue(queue,n);
        }
        else //if (charecter=='S')
        {
            cout<<n<<endl;
        }
        cin>>charecter;
    }
    if (charecter=='F')
    return 0;  
}
void enqueue(char* &queue, int &n, char data)
{
n++;
char* temp=new char[n];
for (int i = 0; i < n-1; i++)
{
    temp[i]=queue[i];
}
temp[n-1]=data;
delete[]queue;
queue=temp;
}
char dequeue(char* &queue, int &n)
{
    if (n==0)
    {
      cout<<"empty"<<endl;
    }
    else
    {
    n--;
    char* temp=new char[n];
    for (int i = 0; i < n; i++)
    {
        temp[i]=queue[i+1];
    }
    char save=queue[0];
    delete[]queue;
    queue=temp;
    return save;
    }
}
void print_queue(char* queue, int n)
{
    if (n==0)
    {
    cout<<"empty"<<endl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cout<<queue[i]<<" ";
        }
    }
    cout<<endl;
}
