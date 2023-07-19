#include <stdio.h>

extern int add(int a, int b);

int main(void) {
    int result = add(1,2);
    printf("result:%d\n", result);
    return 0;
}

