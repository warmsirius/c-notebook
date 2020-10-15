//
// Created by 袁俊 on 2020/10/14.
//
#include <stdio.h>

int main(void){
    int i;
    int j;
    int k;
    int m;

    i = j = 3; //等价于i=3; j=3
    k = i++;
    m = ++j;
    printf("k = %d，m = %d，i = %d, j = %d\n", k, m, i, j);

    return 0;
}
