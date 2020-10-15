//
// Created by 袁俊 on 2020/10/14.
//
#include <stdio.h>
int main(void){
    int i;
    int j;
    i = (3, 2, 5, 6);
    printf("i = %d\n", i);

    j = (i++, ++i, i+2, i+3);
    printf("j = %d\n", j);

    return 0;
}
