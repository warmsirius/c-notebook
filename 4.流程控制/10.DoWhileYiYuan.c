//
// Created by 袁俊 on 2020/10/15.
//

#include <stdio.h>
#include <math.h>


int main(void) {
    double a, b, c;
    double delta;
    double x1, x2;
    char ch;

    do {
        printf("请输入a,b,c系数\n");
        printf("a = ");
        scanf("%lf", &a);

        printf("b = ");
        scanf("%lf", &b);

        printf("c = ");
        scanf("%lf", &c);

        delta = b * b - 4 * a * c;

        if (delta > 0) {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("有两个解，x1=%lf, x2=%lf", x1, x2);
        } else if (delta == 0) {
            x1 = -b / (2 * a);
            printf("有唯一解，x1=x2=%lf", x1);
        } else {
            printf("无解");
        }
        printf("您想继续吗？(Y/N):\n");
        scanf(" %c", &ch); //%c前面必须有个空格，原因略。

    } while ('Y' == ch || 'y' == ch);

    return 0;
}