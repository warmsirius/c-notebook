//
// Created by 袁俊 on 2020/10/11.
//
#include <stdio.h>

int main(void){
    char c1 = 'A';// OK
    printf("%c\n", c1);

    //char c2 = "AB"; //error: 因为"AB"是字符串，我们不能把字符串赋值给单个字符变量

    //char c3 = "A";//error: 字符串，"A" = "A" + "\0"，输出\0了
    //printf("%c\n", c3);

    //char c4 = 'cd';
    //printf("%c\n", c4);// 输出d了


    char c5 = 'A';
    printf("%d\n", c5);//65

    char c6 = '0';
    printf("%d\n", c6);//48
    return 0;
}
