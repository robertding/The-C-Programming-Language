#include <stdio.h>
#include <limits.h>

void to_min_int();

int main() {
    int c = 0;
    to_min_int();
    printf("MIN CHAR %d\n", CHAR_MIN);
    printf("MAX CHAR %d\n", CHAR_MAX);
    printf("MAX UNSIGNED CHAR %d\n", UCHAR_MAX);
    printf("MIN SHORT %d\n", SHRT_MIN);
    printf("MAX SHORT %d\n", SHRT_MAX);
    printf("MAX UNSIGNED SHORT %d\n", USHRT_MAX);
    printf("MIN INT %d\n", INT_MIN);
    printf("MAX INT %d\n", INT_MAX);
    printf("MAX UNSIGNED INT %ud\n", UINT_MAX);
    printf("MIN LONG %ld\n", LONG_MIN);
    printf("MAX LONG %ld\n", LONG_MAX);
    printf("MAX UNSIGNED LONG %lu\n", ULONG_MAX);
}

void to_min_int() {
    short a = 0;
    while(a+1 == ++a);
    printf("%d\n", a);
}
