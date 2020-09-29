//
// Created by 袁俊 on 2020/9/29.
//

#include <stdio.h>
#include <math.h>

int main(void) {
    int a = 1;
    int b = 3;
    int c = 2;

    int delta;
    delta = b * b - 4 * a * c;

    if (delta > 0) {
        double x;
        x = sqrt(delta);
        printf("该方程2个解");
    } else if (delta == 0) {
        printf("该方程1个解");
    } else {
        printf("该方程无解");
    }
}



