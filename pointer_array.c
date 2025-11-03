#include <stdio.h>
void array (void)
{
    int flizny[10];
    printf("%d\n",flizny == &flizny[0]); 
    // 数组名是该数组首元素的地址
    printf("%p\n",flizny);
    printf("%p\n\n",&flizny[0]);
}

// pnt_add.c -- 指针地址
#include <stdio.h>
#define SIZE 4
int main(void)
{
    
    array();

    short dates[SIZE];
    short * pti;
    short index;
    double bills[SIZE];
    double * ptf;
    pti = dates;    // 把数组地址赋给指针
    ptf = bills;
    printf("%23s %15s\n", "short", "double");
    for (index = 0; index < SIZE; index++)
        printf("pointers + %d: %10p %10p\n", index, pti + index, ptf + index);
    return 0;
}
/*
1.16进制
2.指针加1 指的是增加一个存储单元 。
    对数组而言，
    这意味着加1 后的地址是下一个元素 的地址，
    而不是下一个字节的地址

故有
dates + 2 == &dates[2]       // 相同的地址
*(dates + 2) == dates[2]    // 相同的值
*/