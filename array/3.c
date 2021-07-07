#include <stdio.h>
int main()
{
    int tedadnomarat;
    const  int tedad=99999;
    int marks[tedad];
    scanf("%d", &tedadnomarat); 
    for(int i=0; i < tedadnomarat; i++)
    {
        int nomre;
        scanf("%d", &nomre);
        marks[i]=nomre; 
    }
    for(int i=0; i<tedadnomarat; i++)
    {
      for(int j=i+1; j<=tedadnomarat-1; j++)
      {
          if(marks[i]<marks[j])
          break;
          if(j==tedadnomarat-1)
          {
            printf("%d ", marks[i]);
          }
      }
    }
    printf("%d", marks[tedadnomarat-1]);
    return 0;
}