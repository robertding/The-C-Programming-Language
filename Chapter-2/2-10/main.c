#include <stdio.h>
#define MAXLINE 1000

int lower(int c);

int main() {
    printf("%c\n", lower('A'));
}

int lower(int c) {
    return (c >= 'A' && c <= 'Z') ?  c - 'A' + 'a': c;
}
