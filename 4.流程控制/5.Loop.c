//
// Created by 袁俊 on 2020/10/14.
//

#include <stdio.h>

int main(void) {
    int i;
    int sum = 0;
    for (i = 1; i <= 10; i++) {
        sum += i;
    }
    printf("sum = %d", sum);// sum = 55
    return 0;
}
