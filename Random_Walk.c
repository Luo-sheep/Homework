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
利用srand函数和rand函数产生随机数，然后查看次数除以4的余数。余数一共有4种可能的值（0、1、2和3），指示下一次移动的4种可能方向。在执行移动之前，需要检查两项内容：一是不能走到数组外面，二是不能走到已有字母标记的位置。只要一个条件不满足，就得尝试换一个方向移动。如果4个方向都堵住了，程序就必须终止了。下面是提前结束的一个示例:

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