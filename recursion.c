/*递归--斐波那契数列*/
#include <stdio.h>
#include <stdlib.h> 

long fb(int);

int main()
{
    printf("请输入一个正整数：");
    int n;
    scanf("%d",&n);
    if(n<=0)
    {
        printf("输入错误！");
        return 0;
    }
    else if (n == 1)
    {
        printf("斐波那契数列的前1项是：1");
        return 0;
    }
    else if (n == 2)
    {
        printf("斐波那契数列的前2项是：1 1");
        return 0;
    }
    else 
    {
        printf("斐波那契数列的前%d项是：1 1 ",n);
        for(int i=3;i<=n;i++)
        printf("%d ",fb(i));//第i个项而非第n项
    }
    

    return 0;
}

long fb (int n)//n为形参，和上面的n不一样！
{
    long ans;
    if (n>=3)
    ans= fb(n-1)+fb(n-2);
    else
    ans = 1;
    return ans;
}
/*这个函数不太好，为什么呢？
调用次数会指数爆炸！
然后程序崩溃
*/