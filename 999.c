#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

char zh(char c) {
    scanf("%c", &c);
    int a = (int)c;
    return a;
}

char pd(char pd) {
    if (isdigit(pd)) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    char str1[10000], str2[10000];
    char op[10000]; // 储存相同字符
    int o = 0; // 个数统计变量

    printf("第一串: ");
    scanf("%9999s", str1);
    printf("第二串: ");
    scanf("%9999s", str2);

    for (int i = 0; str1[i] != '\0'; i++) {
        for (int j = 0; str2[j] != '\0'; j++) {
            if (str1[i] == str2[j]) {
                // 检查是否已经记录过该字符
                bool exists = false;
                for (int k = 0; k < o; k++) {
                    if (op[k] == str1[i]) {
                        exists = true;
                        break;
                    }
                }
                if (!exists) {
                    op[o++] = str1[i]; // 记录相同字符并增加计数
                }
                break; // 找到一个字符就跳出内层循环
            }
        }
    }

    // 输出相同字符
    printf("相同字符: ");
    for (int i = 0; i < o; i++) {
        printf("%c", op[i]);
    }
    printf("\n个数: %d\n", o);

    return 0;
}