#include <iostream>
struct task
{
    char title[100];
    char descr[100];
    int prior;
};
task* new_user();
void seeourworks(task* tasks[], int number);
void insertionSort(task* arr[], int n);
using namespace std;
int main()
{
    int number;
    cin>>number;
    struct task* tasks[1000];//arayeei az task ha.
    for (int i = 0; i < number; i++)
    {
        tasks[i]=new_user();
    }
    insertionSort(tasks, number);
    seeourworks(tasks, number);
    return 0;
}
task* new_user()
{
    task* tasks= new task;
    cin>> tasks->title;
    cin>> tasks->descr;
    cin>> tasks->prior;
    return tasks; 
}
void insertionSort(task* arr[], int n)  
{  
    int i, j;  
    task key;
    for (i = 1; i < n; i++) 
    {  
        key = *arr[i];  
        j = i - 1;  
        while (j >= 0 && arr[j]->prior > key.prior) 
        {  
            *arr[j + 1]= *arr[j];  
            j = j - 1;  
        } 
        *arr[j + 1] = key;  
    }  
}
void seeourworks(task* tasks[], int number)
{
    for (int i = number-1; i>=0; i--)//10 9 8 7 6...
    {
        cout<<"title: "<<tasks[i]->title<<endl;
        cout<<"descr: "<<tasks[i]->descr<<endl;
        cout<<"prior: "<<tasks[i]->prior<<endl;
    }
}