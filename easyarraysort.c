    #include <stdio.h>
    #include <stdlib.h>
    int main()
    {
        int a[10], i, j, t;
        for(i=0; i<=9; i++)
          a[i]=0; // 初始化为0，非常重要

        for(i=1; i<=5; i++)  // 循环读入5个数
        {
            scanf("%d", &t); // 把每一个数读到变量t中
            a[t]++;          // t所对应小房子中的值增加1
        }

       for(i=0; i<=9; i++)    // 依次判断0～9这个10个小房子
            for(j=1; j<=a[i]; j++)   //出现了几次就打印几次
                  printf("%d ", i);

        system("pause");
        return 0;
    }