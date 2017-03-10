#include <stdio.h>

int invert(unsigned int, unsigned int, unsigned int);

int main() {
    printf("%d\n", invert(256, 0, 4));
}

int invert(unsigned int x, unsigned int p, unsigned int n) {
    unsigned int a = ~(~0 << n) << p;
    return x ^ a;
}
