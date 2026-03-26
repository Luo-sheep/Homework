/*顺序表 删除重复

编写算法，在一非递减的顺序表L中，
删除所有值相等的多余元素。
要求时间复杂度为O(n)，空间复杂度为O(1)。

函数原型如下：
void del_dupnum(SeqList *L)

相关定义如下：
struct _seqlist{
    ElemType elem[MAXSIZE];
    int last;
};
typedef struct _seqlist SeqList;*/

#include <stdio.h>
#include <stdlib.h>
#include "list.h" // 请不要删除，否则检查不通过

void del_dupnum(SeqList *L)  
{
    #if 0
    int temp = L->elem[j];
    
    for ( i=1 ; i<= L->last ; )
    {
        i++;
        if (temp == L->elem[i])
        {
            //删除
            //em，发现是数组不好删
            
        }
        j++;

    }
    #endif 

    /*不是真的删，而是把要保留的重新写一遍。*/
    int i ,j = 0;
    for( i=1; i <= L->last; i++)
    {
        if (L->elem[j] != L->elem[i])
        {
            j++;
            L->elem[j] = L->elem[i];
        }

    }

    L->last = j;
}