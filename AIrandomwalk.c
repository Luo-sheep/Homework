#include <stdio.h>
#include <stdlib.h>
#include <time.h>  // 添加这个头文件

void go(char (*pt)[10]);
int check(char (*pt)[10],int x,int y);

int main()
{
    srand((unsigned)time(NULL));  // 添加随机数种子
    
    //初始化
    char map[10][10];
    for (int i=0;i<10;i++)
        for (int j=0;j<10;j++)
            map[i][j] = '.';

    printf("初始地图:\n");
    for (int i=0;i<10;i++)
    {
        for (int j=0;j<10;j++)
        {
            printf("%c ", map[i][j]);
        }
        printf("\n");
    }

    go(map);

    printf("\n最终地图:\n");
    for (int i=0;i<10;i++)
    {
        for (int j=0;j<10;j++)
        {
            printf("%c ", map[i][j]);
        }
        printf("\n");
    }
    return 0;
}

void go(char (*pt)[10])
{
    char ch='A';
    int r, n=0, m=0, chkh=m, chkv=n;
    
    // 标记起始位置
    pt[chkv][chkh] = ch;
    ch++;
    
    while(ch<='Z')
    {
        int a[4]={0}; // 记录已尝试的方向
        int tried_count = 0;
        int found = 0;
        
        // 保存当前位置
        int current_m = m;
        int current_n = n;
        
        while(tried_count < 4 && !found)
        {
            r = rand() % 4;  // 只生成0-3四个方向
            
            // 如果这个方向已经尝试过，重新生成
            if(a[r] == 1)
            {
                tried_count++;
                continue;
            }
            
            a[r] = 1;
            tried_count++;
            
            // 根据方向计算新位置
            chkh = current_m;
            chkv = current_n;
            
            switch(r)
            {
                case 0: // 上
                    chkv--;
                    break;
                case 1: // 下
                    chkv++;
                    break;
                case 2: // 左
                    chkh--;
                    break;
                case 3: // 右
                    chkh++;
                    break;
            }
            
            if(check(pt, chkh, chkv)) // 合法移动
            {
                pt[chkv][chkh] = ch;
                ch++;
                m = chkh;
                n = chkv;
                found = 1;
            }
        }
        
        // 如果四个方向都尝试过但无法移动，提前结束
        if(!found)
            break;
    }
}

//判断是否合法移动
int check(char (*pt)[10],int x,int y)
{
    if (x<0||x>9||y<0||y>9) // 越界
        return 0;
    if (pt[y][x]!='.') // 已有标记
        return 0;
    return 1;
}