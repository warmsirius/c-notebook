//
// Created by 袁俊 on 2020/9/29.
//

#include <stdio.h>
#include <math.h>

int main(void) {
    int a = 1;
    int b = 2;
    int c = 1;

    int delta;
    delta = b * b - 4 * a * c;

    double x1, x2;
    if (delta > 0) {
        double x;
        x = sqrt(delta);
        x1 = (-b + x) / 2 * a;
        x2 = (-b - x) / 2 * a;
        printf("该方程2个解: x1=%.2f, x2=%.2f", x1, x2);
    } else if (delta == 0) {
        x1 = x2 = -b / 2 * a;
        printf("该方程1个解: x1=x2=%.2f", x1);
    } else {
        printf("该方程无解");
    }
}



