#include <stdio.h>

#define N 32

int rightrot(unsigned int, unsigned int);

int main() {
    printf("%d\n", rightrot(257, 4));
}

int rightrot(unsigned int x, unsigned int n) {
    return x >> n | (x << (N - n));
}
