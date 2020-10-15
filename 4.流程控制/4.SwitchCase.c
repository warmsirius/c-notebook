//
// Created by 袁俊 on 2020/10/15.
//

#include <stdio.h>

int main(void) {
    int floor;
    printf("请输入您要进入的楼层(1-6):\n");
    scanf("%d", &floor);
    switch (floor) {
        case 1:
            printf("1层到了！");
            break;

        case 2:
            printf("2层到了！");
            break;

        case 3:
            printf("3层到了！");
            break;

        case 4:
            printf("4层到了！");
            break;

        case 5:
            printf("5层到了！");
            break;

        case 6:
            printf("6层到了！");
            break;

        default:
            printf("您没有权限进入！");
    }
    return 0;
}
