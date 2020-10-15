//
// Created by 袁俊 on 2020/10/15.
//

#include <stdio.h>

int main(void ){
    //求1-100和
    int sum = 0;
    int i = 0;
    while(i <= 100){
        sum += i;
        i++;
    }

    for(int i = 0; i <= 100; i++){
        sum += i;
    }

    printf("1-100的和是: %d", sum);
    return 0;
}