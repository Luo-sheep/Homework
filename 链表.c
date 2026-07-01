/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode* a = list1;
    struct ListNode* b = list2;

    struct ListNode m;
    struct ListNode* tail = m;

    while (a && b)
    {
        if ( a->val <= b->val)
        {
            tail->next = a;
            a = a->next;
        }
        else 
        {
            c->next = b;
            b = b->next;
        }
        c = c->next;
    }

    return m.next;

}

//三指针逆转链表
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNod* p = NULL;
    struct ListNod* c = head->next;
    struct ListNod* n = null;

    while (c){
        n = c->next;
        c->next = p;
        p = c;
        c = n;

    }

    return prev;
}














*prev = NULL;
    struct ListNode *cur = head;
    struct ListNode *next = NULL;

    while (cur != NULL) {
        next = cur->next;   // 1. 保存下一个节点
        cur->next = prev;   // 2. 反转指针
        prev = cur;         // 3. prev前进
        cur = next;         // 4. cur前进
    }