#include <stdio.h>
void sorting(int number[], int first, int last);
int main()
{
   int tedadzaviye;
   int zaviye[15];
   scanf("%d", &tedadzaviye);
   for (int i = 0; i < tedadzaviye; i++)
   {
       scanf("%d", &zaviye[i]);
       if (zaviye[i]==360)
       {
           zaviye[i]=0;
       }
   }
       sorting(zaviye,0,tedadzaviye-1);//sorted arrray
       int sum=0;
       for (int i = 0; i < tedadzaviye-1; i++)
       {
           sum=sum+zaviye[i];
       }
       if (sum == zaviye[tedadzaviye-1])
       {
           printf("YES");
       }
       else if (sum < zaviye[tedadzaviye-1])
       {
           printf("NO");
       }
       else if (sum > zaviye[tedadzaviye-1])
       {
        int mask, end;
        int positive=0, negative=0;
            for (mask=0 ; mask < (1<<tedadzaviye); mask++)
            {
                for (int j = 0; j < tedadzaviye; j++)
                {
                    if (mask & (1<<j)) //adad +
                    {
                        positive=positive+zaviye[j];
                    }
                    else //adad -
                    {
                        negative=negative+zaviye[j];
                    } 
                }
                end=(positive-negative)%360;
                if (end==0)
                {
                    printf("YES");
                    break;
                }  
                else
                {
                    positive=0;
                    negative=0;
                }
                }
                if (end!=0)
                {
                    printf("NO");
                }
       }
    return 0;
}
void sorting(int number[], int first, int last)
{
   int i, j, temp1, temp2;

   if(first<last)
   {
      temp1=first;
      i=first;
      j=last;
      while(i<j)
      {
         while(number[i]<=number[temp1] && i<last)
         {
            i++;
         }
         while(number[j]>number[temp1])
         {
            j--;
         }
         if(i<j)
         {
            temp2=number[i];
            number[i]=number[j];
            number[j]=temp2;
         }
     }
       temp2=number[temp1];
      number[temp1]=number[j];
      number[j]=temp2;
      sorting(number,first,j-1);
      sorting(number,j+1,last);
   }
}
