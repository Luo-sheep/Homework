/*链表 合并

设线性表A=(a1, a2,…,am)，B=(b1, b2,…,bn)，试写一个按下列规则合并A、B为线性表C的算法，使得：
C= (a1, b1,…,am, bm, bm+1, …,bn) 当m≤n时；
或者
C= (a1, b1,…,an, bn, an+1, …,am) 当m>n时。
**
*/

#include <stdio.h>
#include <stdlib.h>
#include "list.h" // 请不要删除，否则检查不通过


#if 0
typedef int ElemType;  // 需要自己定义 ElemType 为 什么东西


struct _lnklist{
    ElemType data;
    struct _lnklist *next;
};

typedef struct _lnklist Node;
typedef struct _lnklist *LinkList;
#endif
void lnk_merge
(LinkList A, LinkList B, LinkList C)
{
    LinkList tail = C;  // 初始化C链表的尾指针
    #if 0
    LinkList p1 = A;    // 用p1遍历A链表
    LinkList p2 = B;    // 用p2遍历B链表
    #endif
    LinkList p1 = A->next;  // 用p1遍历A链表（A链表从第一个节点开始）
    LinkList p2 = B->next;  // 用p2遍历B链表（B链表从第一个节点开始）
    while( p1 != NULL && p2 != NULL )
    {
        tail ->next =p1;
        p1 = p1 ->next;
        tail = tail ->next;
        
        tail ->next =p2;
        p2 = p2 ->next;
        tail = tail ->next;
    }

    #if 0
    if (p1 == NULL && p2 != NULL)
    {
        while (p2 != NULL)
        {
            tail ->next =p2;
            p2 = p2 ->next;
            tail = tail ->next;
        }
    }

    if (p2 == NULL && p1 != NULL)
    {
        while (p1 != NULL)
        {
            tail ->next =p1;
            p1 = p1 ->next;
            tail = tail ->next;
        }
    }
    #endif

    if (p1 != NULL) {
        tail->next = p1;  
        // 如果A链表还有剩余，直接接到C链表
    } else if (p2 != NULL) {
        tail->next = p2;  
        // 如果B链表还有剩余，直接接到C链表
    }
}