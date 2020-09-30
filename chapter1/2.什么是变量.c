//
// Created by 袁俊 on 2020/9/30.
//

#include <stdio.h>

int main(void) {
    int i;
    i = 3;//3最终存放在内存中，程序终止后3所占的空间被释放
    printf("i = %d\n", i);
    return 0;
}
