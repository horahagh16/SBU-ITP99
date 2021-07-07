#include <stdio.h>
int main()
{
    int day, add, b;

    scanf("%d", &day);
    scanf("%d", &add);
    
    b = (day + add) % 7;

    switch (b)
    {
    case 1: printf("SATURDAY") ; break;
    case 2: printf("SUNDAY")   ; break;
    case 3: printf("MONDAY")   ; break;
    case 4: printf("TUESDAY")  ; break;
    case 5: printf("WEDNESDAY"); break;
    case 6: printf("THURSDAY") ; break;
    case 0: printf("FRIDAY")   ; break;
    }

    return 0;
}