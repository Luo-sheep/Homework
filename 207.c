#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    // 你的代码写在 TODO 和 END OF TODO 之间。
    // 请勿修改这对标签外的任何代码！！！

    // TODO
    int remainder[10], i = 0, j;
    while (N != 0) {
        remainder[i++] = N % 2;
        N = N / 2;
    }
    for (j = i - 1; j >= 0; j--) {
        printf("%d", remainder[j]);
    }
    if (i == 0) printf("0"); // 如果输入是0，输出0
    printf("\n");
    // END OF TODO

    return 0;
}