//
// Created by 袁俊 on 2020/10/15.
//
#include <stdio.h>

int main(void) {
    //1.判断斐波那契额序列第n个值
    int n;
    printf("你要查询序列哪位数:\n");
    scanf("%d", &n);

    int a = 0, b = 1;
    int c = 0;
    while (n > 0) {
        c = a + b;
        a = b;
        b = c;
        n--;
    }

    printf("第%d个数字是%d\n", n, b);


    return 0;
}
