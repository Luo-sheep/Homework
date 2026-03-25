/*
 * 顺序表 数据调整

已知顺序表L中的数据元素类型为int。
设计算法将其调整为左右两部分，
左边的元素（即排在前面的）均为奇数，
右边所有元素（即排在后面的）均为偶数，
并要求算法的时间复杂度为O(n),空间复杂度为O（1）。

函数原型如下：
void odd_even(SeqList *L);

相关定义如下：
struct _seqlist{
    ElemType elem[MAXSIZE];
    int last;
};
typedef struct _seqlist SeqList;
 */

#include <stdio.h>
#include <stdlib.h>
#include "list.h" // 请不要删除，否则检查不通过

void odd_even(SeqList *L) {
    int i = 0;
    int j = L->last;
    ElemType temp;

    #if 0
    while ( i < j )
    {
        while ( i<j && L->elem[i] %2 != 0)
        i++;
        while ( i<j && L->elem[j] %2 == 0)
        j--;
        // i<j 只要改变过i,j，就要记得判断是否满足条件
        
        if ( i<j ) 
        //但执行完这两个内层 while 之后，
        //可能已经变成 i == j，甚至逻辑上已经不该交换了
        {
            temp = L->elem[i];
            L->elem[i] = L->elem[j];
            L->elem[j] = temp;
        }
    //凡是“先判断一次，中间又改了变量，后面还要做危险操作”的地方，就再检查一次。
    }
    #endif

    while(i<j)
    {
        if (L->elem[i] % 2 != 0) {
            i++;
        } 
        else if (L->elem[j] % 2 == 0) {
            j--;
        } 
        else {
            temp = L->elem[i];
            L->elem[i] = L->elem[j];
            L->elem[j] = temp;
            i++;
            j--;
        }
    }


}