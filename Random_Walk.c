#include <stdio.h>
#include <stdlib.h> 
int main()
{
    //初始化
    char map[10][10];
    for (int i=0;i<10;i++)
        for (int j=0;j<10;j++)
            map[i][j] = '.';

    for (int i=0;i<10;i++)
    {
        for (int j=0;j<10;j++)
            {
                printf("%c",map[i][j]);
                if (j==9)
                    printf("\n");
            }
    }

    return 0;
}

//gogogo，出发啦！
int go(void)
{
    switch (rand()%4)
    {
        case 0: return 'U'; break;
        case 1: return 'D'; break;
        case 2: return 'L'; break;
        case 3: return 'R'; break;
    }
    return 0;
}
//终止判断