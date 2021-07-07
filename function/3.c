#include <stdio.h>
void feel(int number);
int main()
{
    int number;
    scanf("%d", &number);
    feel(number);
    return 0;
}

void feel(int number)
{
    int ragham, check=0;
  
    do
    {
         do
         {
            ragham=number%10;
            check=check+(ragham*ragham);
            number=number/10;

         } while (number>0);
           if (check==1 || check==4)
            {
                number=check;
            }
            else
            {
                number=check;
                check=0;
            }

    } while (number!=1 && number!=4);   

  if (number==4)
  {
      printf("SAD");
  }
  else if (number==1)
  {
      printf("HAPPY");
  }
}