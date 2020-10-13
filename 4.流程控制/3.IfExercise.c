//
// Created by 袁俊 on 2020/10/13.
//
#include <stdio.h>

int main(void) {
    //1. 分数判断
    int score;
    printf("请输入您的分数:\n");
    scanf("%d", &score);

    if (score > 100) {
        printf("总分只有100分");
    } else if (score >= 90) {
        printf("优秀");
    } else if (score >= 80) {
        printf("良好");
    } else if (score >= 60) {
        printf("及格");
    } else if (score > 0) {
        printf("不及格");
    } else {
        printf("分数不可能为负数");
    }

    //2.互换两个数字
    int i = 3, j = 40;
    //方法1: 中间变量
    int tmp = i;
    i = j;
    j = tmp;
    printf(" i = %d, j = %d\n", i, j);

    //方法2: 位运算
    i = j ^ i;
    j = i ^ j;
    i = i ^ j;//i=j,

    printf(" i = %d, j = %d\n", i, j);

    //3.对任意三个数字排序，从小到大
    int a,b,c;
    printf("请输入3个数字(中间以空格分开):");
    scanf("%d %d %d", &a, &b, &c);
    if(a < b){
        a = a ^ b;
        b = a ^ b;
        a = a ^ b;
    }

    if(a < c){
        c = c ^ a;
        a = a ^ c;
        c = a ^ c;
    }

    if(b < c){
        b = b ^ c;
        c = b ^ c;
        b = b ^ c;
    }

    printf("%d %d %d", a, b, c);

    return 0;
}
