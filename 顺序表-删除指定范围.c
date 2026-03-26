/*顺序表 删除指定范围

设计一个高效的算法，从顺序表L中删除所有值介于x和y之间(包括x和y)的所有元素（假设y>=x），要求时间复杂度为O(n)，空间复杂度为O(1)。

函数原型如下：
void del_x2y(SeqList *L, ElemType x, ElemType y);

相关定义如下：
struct _seqlist{
    ElemType elem[MAXSIZE];
    int last;
};
typedef struct _seqlist SeqList;*/

#if 0
#include <stdio.h>
#include <stdlib.h>
#include "list.h" // 请不要删除，否则检查不通过

void del_x2y
(SeqList *L, ElemType x, ElemType y) {
    int j= 0;
    int i= L->last;
    ElemType temp;

    while(i>j)
    {
        if (L->elem[i]>=x &&
        L->elem[i]<=y) {
            i--;
        } 
        else if ( !(L->elem[i]>=x &&
        L->elem[i]<=y)) {
            j++;
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
#endif
#include <stdio.h>
#include <stdlib.h>
#include "list.h" // 请不要删除，否则检查不通过

void del_x2y(SeqList *L, ElemType x, ElemType y)
{
    int i, j = 0;

    for (i = 0; i <= L->last; i++)
    {
        if (L->elem[i] < x || L->elem[i] > y)
        {
            L->elem[j] = L->elem[i];
            j++;
        }
    }

    L->last = j - 1;
}