#include <stdio.h>

int sum(const int ar[], int n); /* 函数原型 */

int sum(const int ar[], int n) /* 函数定义 */
{
    int i;
    int total = 0;

    for( i = 0; i < n; i++)
        total += ar[i];
    return total;
}
//这样使用const 并不是要求原数组是常量
//而是该函数在处理数组时将其视为常量
//（报警）：意外修改数组的值，那么编译器将生成一个编译期错误消息
//所以，对函数使用const吧！

void ptr_const(const int * pta, int n)
{
    //pta[0] = 42; //错误，不能修改pta所指向的值
    pta++;//允许，指针本身不是常量
    //*ar=10;——这个就报错
    printf("Now ar points to %d\n", *pta);
    printf("\n");
    //总结：
    //const修饰指针时，不能用指针的形式来修改指针指向的值！！
    //其他的想怎么改怎么改（比如指针的值）
    //归纳：
    //就近原则，只管const修饰的对象
}

int main(void)
{
    int marbles[5] = { 20, 30, 25, 35, 40 };
    int total;

    total = sum(marbles, 5);
    printf("The total number of marbles is %d.\n", total);
    printf("The size of marbles is %zu bytes.\n", sizeof marbles);
    
    return 0;
}