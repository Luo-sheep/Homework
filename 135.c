/*
编写在给定数组里面找最大值和最小值的函数，函数原型如下：
void max_min(int a[], int n, int *max, int *min);
*/
#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
void max_min(int a[], int n, int *max, int *min);
int main()
{
    //我自己生成了一个数组来检验
    srand((unsigned int)time(NULL));
    int rand_ar[20];
    for(int i=0;i<20;i++)
        {rand_ar[i]=rand()%100;
        printf("%d ",rand_ar[i]);}
    printf("\n");
    max_min(rand_ar,20,rand_ar,rand_ar);
    return 0;
}

void max_min(int a[], int n, int *max, int *min)
{
    int ax=*max,in=*min;
    for(int i=0;i<n;i++)
    {
    if(max[i]>ax)
    ax=max[i];
    if(min[i]<in)
    in=min[i];
    }
    printf("Max is %d\n",ax);
    printf("Min is %d",in);

}