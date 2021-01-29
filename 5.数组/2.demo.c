//
// Created by 袁俊 on 2021/1/29.
//

#include <stdio.h>

int main(void){
    //赋值
    int a[5] = {0};
    printf("请给数组的第1个元素赋值:");
    scanf("%d", &a[0]);
    printf("%d\n", a[0]);

    // 交换2个元素
    int b[2] = {0, 1};
    printf("交换前: b[0] = %d\n", b[0]);
    printf("交换前: b[0] = %d\n", b[1]);
    int i = b[0];
    int j = b[1];
    int tmp = i;
    b[0] = j;
    b[1] = tmp;
    printf("交换后: b[0] = %d\n", b[0]);
    printf("交换后: b[0] = %d\n", b[1]);

    // 倒置
    int c[7] = {1, 2, 3, 4, 5, 6, 7};
    int m = 0;
    int n = 6;
    while(m < n){
        int t = c[m];
        c[m] = c[n];
        c[n] = t;
        m++;
        n--;
    }

    for(int i=0;i<7; i++){
        printf("%d\n", c[i]);
    }

    return 0;
}

