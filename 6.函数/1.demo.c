//
// Created by 袁俊 on 2021/1/30.
//
#include <stdio.h>

void max(int i, int j) {
    if (i > j) {
        printf("%d\n", i);
    } else {
        printf("%d\n", j);
    }
}

int func1(void ){
   return 10.5;
}

void func2(void){
//    return 0;//error 与返回的void不符合
}

int main(void) {
    int a, b, c, d, e, f;
    a = 1, b = 2, c = 3, d = 4, e = 5, f = 6;
    max(a, b);
    max(c, d);
    max(e, f);
    /*if (a>b){
        printf("%d\n", a);
    } else{
        printf("%d\n", b);

    }*/

    int j = 88;
    j = func1();

//    j = func2();//错误，函数返回void，不能赋值给j

    return 0;
}
