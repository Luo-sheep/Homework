/*#include <stdio.h>
#include <stdlib.h> 

int main()
{
    char a[101];
    printf("Enter message to be encrypted: ");
    gets(a);
    int l;
    l=strlen(a);
        注意头文件的使用#include <string.h>
    printf("Enter shift amount (1-25):");
    int ad;
    scanf("%d",&ad);
    for (int i=0;i<=l;i++)
    {
        char t=a[i];
        int s='t';
        
            if (s>='A' && s<='Z')
            {
                int b='A'-1;
                a[i]=(s+ad-b)%26+b;
            }
            else if (s>='a' && s<='z')
            {
                int b='a'-1;
                a[i]=(s+ad-b)%26+b;
            }
            else
            continue;其实这行就没必要了
    }
    printf("Encrypted message:");
    puts(a);
    return 0;
}
*/

#include <stdio.h>
#include <string.h>  // 加入 strlen 和 fgets 支持

int main() {
    char a[101];
    printf("Enter message to be encrypted: ");
    fgets(a, sizeof(a), stdin);  // 安全读取字符串

    int ad;
    printf("Enter shift amount (1-25): ");
    scanf("%d", &ad);

    int l = strlen(a);
    for (int i = 0; i < l; i++) {
        char t = a[i];
        int s = t;

        if (s >= 'A' && s <= 'Z') 
        {
            a[i] = (s - 'A' + ad) % 26 + 'A';
        }
        else if (s >= 'a' && s <= 'z') {
            a[i] = (s - 'a' + ad) % 26 + 'a';
        }
        // 非字母字符不变
    }

    printf("Encrypted message: ");
    puts(a);
    return 0;
}
