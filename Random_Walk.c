/*随机步法（Random Walk）

编写程序，生成一种贯穿10×10字符数组（初始时全为字符'.'）的“随机步法”。程序必须随机地从一个元素“走到”另一个元素，每次都向上、向下、向左或向右移动一个元素位置。已访问过的元素按访问顺序用字母A到Z进行标记。

下面是一个输出示例：

A	.	.	.	.	.	.	.	.	.
B	C	D	.	.	.	.	.	.	.
.	F	E	.	.	.	.	.	.	.
H	G	.	.	.	.	.	.	.	.
I	.	.	.	.	.	.	.	.	.
J	.	.	.	.	.	.	.	Z	.
K	.	.	R	S	T	U	V	Y	.
L	M	P	Q	.	.	.	W	X	.
.	N	O	.	.	.	.	.	.	.
利用srand函数和rand函数产生随机数，然后查看次数除以4的余数。
余数一共有4种可能的值（0、1、2和3），指示下一次移动的4种可能方向。
在执行移动之前，需要检查两项内容：
一是不能走到数组外面，二是不能走到已有字母标记的位置。
只要一个条件不满足，就得尝试换一个方向移动。
如果4个方向都堵住了，程序就必须终止了。下面是提前结束的一个示例:

A	B	G	H	I	.	.	.	.	.
.	C	F	O	J	K	.	.	.	.
.	D	E	N	M	L	.	.	.	.
.	.	.	.	.	.	.	.	.	.
.	.	.	.	.	.	.	.	.	.
.	.	.	.	.	.	.	.	.	.
.	.	.	.	.	.	.	.	.	.
.	.	.	.	.	.	.	.	.	.
.	.	.	.	.	.	.	.	.	.
因为Y的4个方向都堵住了，所以没有地方可以放置下一步的Z了。*/

#include <stdio.h>
#include <stdlib.h> 

#include <time.h>  // 添加这个头文件，以使用time函数，获取时间（随机数种子）

void go(char (*pt)[10]);
int check(char (*pt)[10],int x,int y);
//函数声明不可或缺！！！（规范就是规范）

int main()
{
    srand((unsigned int)time(NULL));//添加随机种子

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
                printf("%c",map[i][j]);
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
                printf("%c",map[i][j]);
                if (j==9)
                    printf("\n");
            }
    }
    return 0;
}

//gogogo，出发啦！
void go(char (*pt)[10])//（*pt）亦可作pt[]
{
    char ch='A';
    int r,l,n=0,m=0;//r方向，l临时变量，n行，m列

    pt[m][n] = ch++;   // 标记起始位置
    
    while(ch<='Z')//终止判断
    {
        int a[4]={0};//记录方向
        int chkh=m;//水平位置
        int chkv=n;//垂直位置

        while(!check(pt,chkh,chkv))
        {
            r=rand()%4;
            a[r]=1;
        
        /*本来这里goto的，但是把后面的语句都包进去了，思路不清晰，但现在好了
        tryagain:
        while(a[r]==1)//排除已走过的方向
        {
            r=rand()%4;
            a[r]=1;
            if(a[0]==1&&a[1]==1&&a[2]==1&&a[3]==1)
                goto end;//四个方向都走过，结束
        }*/

        //检验方向合法性
        switch(r)
        {
            case 0://上
                chkv--;
                break;
            case 1://下
                chkv++;
                break;
            case 2://左
                chkh--;
                break;
            case 3://右
                chkh++;
                break;
        }

        //合法移动
        if(check(pt,chkh,chkv))
        {
            pt[chkv][chkh]=ch++;
            m=chkh;
            n=chkv;
        }

        //四个方向都走过，结束
        if(a[0]==1&&a[1]==1&&a[2]==1&&a[3]==1)
            break;
        //不合法，复原
        else
        {
            chkh=m;
            chkv=n;
            continue;
        }

        }
    }
    return 0;
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

