#include <stdio.h>
int main()
{
    int game[1000];
    int paresh, sum1=1, sum2=1, tas;
    for (int i = 0; i < 1000; i++)
    {
        game[i+1]=i+1;
    }
    scanf("%d", &paresh);
    for (int i = 0; i < paresh; i++)
    {
        int from, to;
        scanf("%d %d", &from, &to);
        game[from]=game[to];
    } //ta inja khoobe
    int nobat=0;
    while (sum2<100 && sum1<100)
    {                                                                                                                                                                                  
        if(nobat%2==0)//player1
        {
            scanf("%d", &tas);
            sum1=game[sum1+tas];
            if (sum1==100)
            {
               printf("player1 win\n");
               break;
            }
            if (sum1>100)
            {
                sum1=game[sum1-tas];
            }
        }
        else //player2
        {
            scanf("%d", &tas);
           sum2=game[sum2+tas];
           if (sum2==100)
            {
               printf("player2 win\n");
               break;
            }
            if (sum2>100)
            {
                sum2=game[sum2-tas];
            }  
        }
        nobat++;
    }
    return 0;
}