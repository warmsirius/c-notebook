//
// Created by 袁俊 on 2020/10/12.
//
#include <stdio.h>

int main(void) {
    if (3 > 2)
        printf("3 > 2 正确\n");

    int i, j;
    printf("请输入2个数字(中间用空格隔开):");
    scanf("%d %d", &i, &j);
    if (i > j) {
        printf("%d\n", i);
    } else {
        printf("%d\n", j);
    }
    return 0;
}

