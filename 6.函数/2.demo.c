//
// Created by 袁俊 on 2021/1/30.
//
#include <stdio.h>

void f(void){
    int i;
    for (i=0; i<5;i++){
        printf("大家辛苦了!\n");
//        break;
        return;
    }

    printf("同志们好!");
}


int main(void ){
    f();
    return 0;
}
