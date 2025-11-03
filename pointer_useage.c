// ptr_ops.c -- 指针操作
#include <stdio.h>
int main(void)
{
    int urn[5] = { 100, 200, 300, 400, 500 };
    int * ptr1, *ptr2, *ptr3;

    ptr1 = urn;            // 把一个地址赋给指针
    ptr2 = &urn[2];        // 把一个地址赋给指针
                           // 解引用指针，以及获得指针的地址
    printf("pointer value, dereferenced pointer, pointer address:\n");
    printf("ptr1 = %p, *ptr1 =%d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1);

    // 指针加法
    ptr3 = ptr1 + 4;
    printf("\nadding an int to a pointer:\n");
    printf("ptr1 + 4 = %p, *(ptr1 + 4) = %d\n", ptr1 + 4, *(ptr1 + 4));
    ptr1++;                // 递增指针
    printf("\nvalues after ptr1++:\n");
    printf("ptr1 = %p, *ptr1 =%d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1);
    ptr2--;                // 递减指针
    printf("\nvalues after --ptr2:\n");
    printf("ptr2 = %p, *ptr2 = %d, &ptr2 = %p\n", ptr2, *ptr2, &ptr2);
    --ptr1;                // 恢复为初始值
    ++ptr2;                // 恢复为初始值
    printf("\nPointers reset to original values:\n");
    printf("ptr1 = %p, ptr2 = %p\n", ptr1, ptr2);
    // 一个指针减去另一个指针
    printf("\nsubtracting one pointer from another:\n");
    printf("ptr2 = %p, ptr1 = %p, ptr2 - ptr1 = %td\n", ptr2, ptr1, ptr2 - ptr1);
    /*类似的命名模式：
    printf("%zd", size_value);   // z = size_t, d = decimal
    printf("%td", diff_value);   // t = ptrdiff_t, d = decimal  
    printf("%lld", long_long_value); // ll = long long, d = decimal*/
    //得到的是————元素个数！！！

    //指针相加————没有！！！
    /*（无意义，你想想相加能表示啥，表示不了嘛）
    （A+n）+（A+m）——根本不关心A的！
    你看
    指针 ± 整数 = 指针（移动位置）
    指针 - 指针 = 整数（计算距离）
    指针 + 指针 = ???（没有合理的类型）*/
    
    // 一个指针减去一个整数
    printf("\nsubtracting an int from a pointer:\n");
    printf("ptr3 = %p, ptr3 - 2 = %p\n", ptr3, ptr3 - 2);

    return 0;
}
