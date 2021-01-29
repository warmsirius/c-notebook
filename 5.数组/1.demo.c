//
// Created by 袁俊 on 2021/1/29.
//
#include <stdio.h>

int main(void){
    int a[5] = {1, 2, 3, 4, 5};
    int i;
    for(i=0; i<5; i++){
        printf("%d\n", a[i]);
    }

    printf("%d\n", a[10]);
    return 0;
}
