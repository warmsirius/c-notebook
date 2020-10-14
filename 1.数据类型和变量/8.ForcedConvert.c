//
// Created by 袁俊 on 2020/10/14.
//
#include <stdio.h>

int main(void) {
    int j = (int) (1 / 2.0);
    printf("%d", j);

    float m = (float) 5;
    printf("%f\n", m);

    // 计算: 1 + 1/2 + 1/3 + ... + 1/100
    float sum = 0;
    for(int j = 1; j <=100 ; j++){
        //(类型) 值: 进行强行转换
        //sum += (float )1 / j;
        // 写成1.0也行
        sum += 1.0 / j;
    }
    printf("sum = %f\n", sum);

    //第二种解法(但是是不正确的，浮点数存在精度问题)
    float sum1 = 0;
    for (float i = 1.0; i <= 100; i++) {
        sum1 += 1 / i;
    }
    printf("sum1 = %f", sum1);


    return 0;
}

