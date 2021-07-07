#include <stdio.h>
int main()
{
    long int n, t1, t2, t3;
    long int min;

    scanf("%ld", &n);
    scanf("%ld", &t1);
    scanf("%ld", &t2);
    scanf("%ld", &t3);
  if ((n%4)==0)
  {
      printf("0");
  }
  else if ((n%4)==3)
  {
      if (t1>(t2+t3))
      {
          if ((t2+t3)>3*t3)
          {
              min=3*t3;
              printf("%ld", min);
          }
          else
          {
              min=t2+t3;
              printf("%ld", min);
          }
      }
      else
      {
          if (t1>(3*t3))
          {
              min=3*t3;
              printf("%ld", min);
          }
          else
          {
              printf("%ld", t1);
          }
          
          
      }
  }
  else if ((n%4)==2)
  {
      if (t2>(2*t1))
      {
           if ((t1)>(t3))
           {
               min=2*t3;
               printf("%ld", min);
           }
           else
           {
               min=t1+t1;
               printf("%ld", min);
           }
       }
       else
           if (t2>(2*t3))
           {
              min=2*t3;
              printf("%ld", min);
           }
            else
       {
           printf("%ld", t2);
       }
   }
   else if ((n%4)==1)
   {
       if (t3>(t1+t2))
       {
           if ((t1+t2)>(3*t1))
           {
               min=3*t1;
               printf("%ld", min);
           }
           else
           {
               min=t1+t2;
               printf("%ld", min);
           }
       }
       else
           if (t3>(3*t1))
           {
              min=3*t1;
              printf("%ld", min);
           }
       else
       {
           printf("%ld", t3);
       }
   }
      
      return 0;
}  