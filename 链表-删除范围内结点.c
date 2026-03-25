#include <stdio.h>
#include <stdlib.h>
#include "list.h" // 请不要删除，否则检查不通过

void lnk_del_x2y
(LinkList L, ElemType mink, ElemType maxk) 
{
    LinkList slow = L->next;
    LinkList fast = L->next;
    LinkList mins;
    LinkList maxl;

    while (fast ->data <= maxk)
    {
        fast  = fast ->next;
    }
    maxs = fast;

    while (slow ->data = maxk)
    {
        slow  = slow ->next;
    }
    
    mins = slow;

    

}
