

//可能没有第k个
#include <stdio.h>
#include <stdlib.h>
#include "list.h" // 请不要删除，否则检查不通过

int lnk_search
(LinkList L, int k, ElemType* p_ele) {
    LinkList pre; 
    LinkList head = L->next;
    LinkList node = L->next;
    int n=1,i=1;
    while ( head != NULL)
    {
        n++;
        head = head->next;
        pre = head;
    }
    while(i<=n+1-k)
    {
        i++;
        node = node->next;
    }
    if (node->data)
    {
        *p_ele = node->data;
        return 1;
    }
    else
    return 0;

}