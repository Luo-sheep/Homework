#include <stdio.h>

int main() {
    // 在这里编写你的代码
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int arr[100];
    for (int i = 0; i < n; i++) 
    scanf("%d", &arr[i]);
    for (int i = 0; i < n - 1; i++) 
    {
        int min_index = i;
        for (int j = i + 1; j < n; j++) 
        {
            if (arr[j] < arr[min_index])
            min_index = j;
        }
        if (min_index != i) 
        {
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
        }
    }
    for (int i = 0; i < n; i++) 
    {
        printf("%d", arr[i]);
        if (i < n - 1) {
            printf(" ");
        }
    }
    return 0;
}