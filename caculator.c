/*
#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
int main()
{
    char a[101];//一定要看清楚要求！！是浮点数！！！
    printf("Enter an expression:");
    fgets(a, sizeof(a), stdin);
    int l = strlen(a);
    int c=0;
    c+=a[0];
    for (int i=1;i<l;i++)
    {
        char s=a[i];
        int t;
        t=a[i+1];
        if (s=='+')
        {
            c+=a[i+1];//a【】对应的是字符，而非数！
        }
        else if (s=='-')
        {
            c-=a[i+1];
        }
        else if (s=='*')
        {
            c*=a[i+1];
        }
        else if (s=='/')
        {
            c/=a[i+1];
        }
    }
    printf("%d",c);
    return 0;
}
//这个程序对应的是整数表达式运算！！！（还是10以内的）
*/

//要解决读取浮点数的问题！
#include <stdio.h>
#include <stdlib.h>

int main() {
    char expr[101];
    printf("Enter an expression: ");
    fgets(expr, sizeof(expr), stdin);

    char *p = expr;
    float result;
    sscanf(p, "%f", &result);  // 读取第一个数字

    // 移动指针到第一个运算符
    while (*p && (*p == ' ' || (*p >= '0' && *p <= '9') || *p == '.')) p++;

    while (*p) {
        char op = *p++;
        float num;
        sscanf(p, "%f", &num);

        // 移动指针到下一个运算符
        while (*p && (*p == ' ' || (*p >= '0' && *p <= '9') || *p == '.')) p++;

        // 从左到右执行运算（忽略优先级）
        if (op == '+') result += num;
        else if (op == '-') result -= num;
        else if (op == '*') result *= num;
        else if (op == '/') result /= num;
    }

    printf("Value of expression: %.2f\n", result);
    return 0;
}
