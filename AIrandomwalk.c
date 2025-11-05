#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

void go(char (*pt)[10]);
int check(char (*pt)[10],int x,int y);

int main()
{
    srand((unsigned int)time(NULL));

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
                printf("%c ", map[i][j]);  // 修改1：添加空格使输出更清晰
                if (j==9)
                    printf("\n");
            }
    }

    go(map);

    printf("\n最终地图:\n");
    for (int i=0;i<10;i++)
    {
        for (int j=0;j<10;j++)
            {
                printf("%c ", map[i][j]);  // 修改2：添加空格使输出更清晰
                if (j==9)
                    printf("\n");
            }
    }
    return 0;
}

//gogogo，出发啦！
void go(char (*pt)[10])
{
    char ch='A';
    int r, n=0, m=0;  // r方向，n行，m列

    // 修改3：修正数组索引，应该是pt[n][m]而不是pt[m][n]
    pt[n][m] = ch++;   // 标记起始位置
    
    while(ch<='Z')
    {
        int a[4]={0};  // 记录已尝试的方向
        int tried_count = 0;  // 修改4：添加尝试次数计数器
        int found = 0;        // 修改5：添加找到方向的标志
        
        // 保存当前位置
        int current_m = m;
        int current_n = n;
        
        // 修改6：重写方向尝试逻辑，确保尝试所有方向
        while (tried_count < 4 && !found)
        {
            r = rand() % 4;
            
            // 如果这个方向已经尝试过，跳过
            if (a[r] == 1) {
                tried_count++;
                continue;
            }
            
            a[r] = 1;
            tried_count++;
            
            // 计算新位置
            int chkh = current_m;
            int chkv = current_n;
            
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
            
            // 检查新位置是否合法
            if(check(pt, chkh, chkv))
            {
                // 修改7：合法移动，更新位置和标记
                pt[chkv][chkh] = ch++;
                m = chkh;
                n = chkv;
                found = 1;  // 标记已找到可行方向
            }
        }
        
        // 修改8：如果四个方向都尝试过但无法移动，提前结束
        if (!found)
            break;
    }
}

//判断是否合法移动
int check(char (*pt)[10],int x,int y)
{
    if (x<0||x>9||y<0||y>9)//越界
        return 0;
    if (pt[y][x]!='.')//已有标记
        return 0;
    return 1;
}