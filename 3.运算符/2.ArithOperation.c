//
// Created by 袁俊 on 2020/10/12.
//
#include <stdio.h>

int main(void) {
    int i = 16, j = 5;
    printf(" i / j = %d", i / j);// i / j = 3

    int m = 13, n = -3, o = 3;

    printf(" 13 取余 3 = %d\n", m % o);// 13 % 3 = 1
    printf(" 13 取余 -3 = %d\n", m % n);// 13 % -3 = 1

    int m1 = -13, n1 = -3, o1 = 3;
    printf(" -13 取余 3 = %d\n", m1 % o1);// -13 % 3 = -1
    printf(" -13 取余 -3 = %d\n", m1 % n1);// -13 % -3 = -1

    return 0;
}