#include <stdio.h>

int bitcount(unsigned int);

int main() {
    printf("%d\n", bitcount(259));
}

int bitcount(unsigned int x) {
    int b = 0;
    for (; x != 0; x &= (x-1)) b++;
    return b;
}
