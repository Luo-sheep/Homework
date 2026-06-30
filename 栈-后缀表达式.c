
#define Stack_Size 50
typedef struct{
ElemType elem[Stack_Size];
int top;
}Stack;

bool push(Stack* S, ElemType *x);
bool pop(Stack* S, ElemType *x);
void init_stack(Stack *S);

void init_stack(Stack *S){
    S->top = -1;
}

int compute_reverse_polish_notation(char *str)
{
    //为numStack分配内存
    Stack *numStack = (Stack *)malloc(sizeof(Stack));
    if (numStack == NULL) { //如果分配失败, 输出错误信息并返回-1
    printf("Failed to allocate memory for numStack\n");
    return -1;
    }
    init_stack(numStack); //初始化numStack

    char temp[30];//存放读取的字符串
    int offset = 0;//存放读取的字符数量

    while (sscanf(str,"%29s",temp,&offset) == 1)
    {
        str += offset;

        if (temp[0] >= '0' && temp[0] <= '9') {
            push(s, atoi(temp));
        }
        else
        {
            int x,y;
            pop(s,&y);
            pop(s,&x);

            int r;
            switch (temp[0]) {
                case '+': r = x + y; break;
                case '-': r = x - y; break;
                case '*': r = x * y; break;
                case '/': r = x / y; break;
                case '%': r = x % y; break;
            }

            push(s,r);
        }

        temp[0] = '\0';
    }

    int ans;
    pop(s, &ans);
    free(s);
    
    return res;
}