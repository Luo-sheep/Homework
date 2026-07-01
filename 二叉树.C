int countX(BiTree T, int x) {
    if (T == NULL) return 0;
    return (T->data ==  x)+countX(T->L, x)+...;
}

//非递归方法统计二叉树值为x的节点
int countX(BiTree T, int x) {
    if (T == NULL) return 0;
    
    int cnt=0;
    
    BiTree stack [1000];//非递归，那肯定用栈转化
    //简便一点，直接用静态栈解决（数组）
    int top=-1;
    
    stack [++top] = T;

    while (top != -1)
    {
        BiTree node =stack [top--];

        if (node->data == x)
        cnt++;

        if (node->R) stack[++top] = ...;
        ...
    }
    return cnt;
}


//题目——二叉树确定同时有左节点和右节点的孩子数目
int countBoth(BiTree T) {
int cnt=0;
//do
if  (T->lchild == NULL || T->rchild == NULL)//关键是没有考虑叶节点后存在空节点NULL，它没有子节点啊！！
    cnt = 0 + countBoth(T->lchild) + countBoth(T->rchild);;
    //而且也不好修改
if  (T->lchild != NULL && T->rchild != NULL)
    cnt = 1+ countBoth(T->lchild) + countBoth(T->rchild);
//enddo
return cnt;
}

//正确答案应该直接像下面这样写
int countBoth(BiTree T) {
    if (T == NULL) return 0;//首先解决递归到最终的情况

    int cnt = (T->lchild != NULL && T->rchild != NULL) ? 1 : 0;

    return cnt + countBoth(T->lchild) + countBoth(T->rchild);
}