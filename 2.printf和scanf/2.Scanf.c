//
// Created by 袁俊 on 2020/10/11.
//
#include <stdio.h>


int main(void) {
    //第1种: 不含非输入控制符(请将其他代码注释后再执行)
    int i;
    printf("请输入1个数字:");
    scanf("%d", &i);
    printf("i = %d\n", i);

    //第二种: 含有非输出控制符(请将其他代码注释后再执行)
    int j;
    printf("请输入第2个数字:");
    scanf("m%d", &j);

    // 一次性给多个变量赋值(请将其他代码注释后再执行)
    int m, n;
    printf("请依次输入2个数字(中间用空格隔开):");
    scanf("%d %d", &m, &n);
    printf("m = %d, n = %d", m, n);

    int k;
    printf("请依次输入1个数字:");
    scanf("%d\n", &k);//使用\n时，必须要输入\n后才能停止输入，直接回车不行
    printf("k = %d\n", k);


    return 0;
}

