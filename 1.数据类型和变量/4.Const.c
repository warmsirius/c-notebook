//
// Created by 袁俊 on 2020/10/11.
//

#include <stdio.h>

int main(void) {
    // 浮点数常量
    float f1 = 123.45e-2F;
    printf("%f\n", f1);
    // 整数常量
    int i1 = 1024;
    printf("%d\n", i1);

    int i2 = 01024;
    printf("%d\n", i2);

    int i3 = 0X1024;
    printf("%d\n", i3);


    //字符常量
    char c1 = 'a';
    printf("%c\n", c1);

    return 0;
}