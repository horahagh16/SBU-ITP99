#include <stdio.h>
void merge_sort(long int i,long int j, long int a[], long int temp[]);
int main()
{
  long long int numberofsticker;
  long long int numberhecanbuy=0;
  long long int sum=0;
  long int parsamarket[100000];
  long  int temp[100000];
  long long int nimahas;
  scanf("%lld",&numberofsticker); //stickeraye parsa
  for(long int i=0; i < numberofsticker; i++)
  {
    scanf("%ld", &parsamarket[i]); 
  }//gheymate stickerharo gerefte
  scanf("%lld", &nimahas);//boodje nima
 merge_sort(0, numberofsticker-1, parsamarket, temp);
    //araye morattab shode 
    for (long int i = 0; i < numberofsticker; i++)
    {
        sum=sum+parsamarket[i];                                 
        if (sum<=nimahas && i==numberofsticker-1)
        {
            numberhecanbuy++;
            printf("%lld",numberhecanbuy);
            break;
        }
        if (sum<=nimahas)
        {
            numberhecanbuy++;
            if (i== numberofsticker-1)
            {
              printf("%lld",numberhecanbuy);
              break;
            }
        }   
        else
        {
            printf("%lld",numberhecanbuy);
            break;
        }
        
    }
    return 0;
}
void merge_sort( long int i,long int j,long int a[],long int temp[]) 
{
    if (j <= i) {
        return;     
    }
    int mid = (i + j) / 2;       
    merge_sort(i, mid, a, temp);     // bakhshe aval ro sort mikone
    merge_sort(mid + 1, j, a, temp);     // bakhsh dovom ro sort mikone

    int first1 = i;       //bakhshe aval
    int first2 = mid + 1;   //bakhshe dovom   
    int k;      //counter
    for (k = i; k <= j; k++) 
    {
        if (first1 == mid + 1) // akhare avali berese be avale dovomi
        {      
            temp[k] = a[first2];
            first2++;
        }
         else if (first2 == j + 1) //dovomi ham tamoom she
        {        
            temp[k] = a[first1];
            first1++;
        }
        else if (a[first1] < a[first2]) //avali az dovomi koochiktare
        {        
            temp[k] = a[first1];
            first1++;
        } 
        else //dovomi az avali koochiktare
        {        
            temp[k] = a[first2];
            first2++;
        }
    }

    for (k = i; k <= j; k++) 
    {      
        a[k] = temp[k];// barmigarde tooye a
    }
}