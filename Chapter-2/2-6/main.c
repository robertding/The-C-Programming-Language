#include <stdio.h>

int setbits(unsigned int, unsigned int, unsigned int, int);

int main() {
    printf("%d\n", setbits(255, 1, 3, 0));
}

int setbits(unsigned int x, unsigned int p, unsigned int n, int y) {
    unsigned int a, b;
    a = ~(~(~0 << n) << p);
    b = ((~(~1 << (n-1)) & y) << p);
    return x & a | b;
}
