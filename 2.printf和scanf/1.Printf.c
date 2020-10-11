//
// Created by 袁俊 on 2020/10/11.
//

#include <stdio.h>

int main(void) {
    // printf: 直接输出字符串
    printf("Hello World!\n");

    //printf: 第二种格式
    int i = 10;
    printf("%d\n", i);//按照10进制输出
    printf("%x\n", i);//按照16进制输出
    printf("%o\n", i);//按照8进制输出

    //printf: 第三种格式
    int j = 3;
    int k = 5;
    printf("K = %d, J=%d\n", k, j);

    int x = 47;//100 是10进制
    printf("%d\n", x);//输出结果是: 47
    printf("%x\n", x);//输出结果是: 2f
    printf("%#x\n", x);//输出结果是: 0x2f
    printf("%#X\n", x);//输出结果是: 0X2F
    return 0;
}
