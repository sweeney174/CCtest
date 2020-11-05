#include <stdio.h>
int main()
{
    while (1)
    {
        printf("请输入天数：\n");
        int days;
        scanf("%d", &days);
        if (days<=0)
        {
            break;
        }
        
        printf("%d days are %d weeks,%d days.\n", days, days / 7, days % 7);
        
    }

    return 0;
}