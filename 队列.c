typedef struct _QueueNode {
ElemType data;          // 数据域
struct _QueueNode *next;      // 指针域
}LinkQueueNode, *LinkQueue;

#include <stdio.h>
#include <stdlib.h>
#include "list.h" // 请不要删除，否则检查不通过
 
bool init_queue(LinkQueue *LQ)
{
  
}
 
bool enter_queue(LinkQueue *LQ, ElemType x)
{
  
}
 
bool leave_queue(LinkQueue *LQ, ElemType *x)
{
  
}