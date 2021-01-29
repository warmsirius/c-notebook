//
// Created by 袁俊 on 2021/1/29.
//
#include <stdio.h>

int main(void) {
    int a[3][4] = {
            {1, 2,  3,  4},
            {5, 6,  7,  8},
            {9, 10, 11, 12},
    };

    for (int i = 0; i < 3; ++i) {
        printf("\n");
        for (int j = 0; j < 4; ++j) {
            printf("a的第%d行，第%d列的元素: %d\n", i + 1, j + 1, a[i][j]);
        }
    }

    return 0;
}
