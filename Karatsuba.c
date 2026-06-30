#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

long long Karatsuba(int,int);
int get_digit(long long);
long long power(int ,int);

int main(){

    assert(power(10, 2) == 100);
    assert(get_digit(25) == 2);

    printf("请输入两位位数相同&&为2^k的正整数：\n");
    int x,y;
    scanf("%d %d", &x, &y);
    printf("%lld",Karatsuba(x,y));
    return 0;
}

long long Karatsuba(int x, int y){
    
    int dit = get_digit(x);
    
    if ( dit == 1){
        int sum = x*y;
        return sum;
    }

    else{
        
    int half = dit / 2;
    int base = power(10, half);

    int xh = x / base;
    int xl = x % base;
    int yh = y / base;
    int yl = y % base;

    
    long long p,q,A,B,C;
    A = Karatsuba(xh,yh);
    C = Karatsuba(xl,yl);
    p = xh + xl;
    q = yh + yl;
    B = Karatsuba(p ,q) - A - C;
    
    return power(10,dit)*A + power(10,dit/2)*B + C;
    }

};

int get_digit(long long n){
    int i=1;
    while (n>=10)
    {
        n /= 10;
        i++;
    }
    return (i);
};

long long power(int b,int e){
    long long res = 1;
    for (int i=0;i<e;i++)
    res *= b;
    return res;
};

/*
递归调用的时候出现了雪崩式的反应
就是因为当时呃这个幂函数它的第一次向设置成了B而不是一嗯
这就导致了后面就是一大堆跟着错误然后就导致他无尽的递归下去
最后就导致了他的战役书然后出现了segmentation error
后来只要改了这个小错误就解决了了
但是以后的话可以就是加入一个assert库来进行一个断言
然后在主函数的主体运行之前先加入一个测试这种要重复大量多次调用的函数来测试他是否能正常运行
不能正常运行立马切断
这样就是能避免一个大规模错误的产生吧*/