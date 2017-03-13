#include <stdio.h>
#include <string.h>

#define MAX 1000

void reverse(char s[]);
void itoa(int n, char s[], int t);

int main() {
    char s[MAX];
    itoa(19322, s, 9);
    printf("%s\n", s);
}

void reverse(char s[]) {
    int c, i, j;
    for (i=0, j = strlen(s)-1; i < j; i++, j--) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}

void itoa(int n, char s[], int t) {
    int i, sign;

    if (sign = n < 0) {
        n = - n;
    }
    i = 0;
    do {
        s[i++] = n % 10 + '0';
    } while ((n/=10) > 0);
    if (sign < 0) {
        s[i++] = '-';
    }
    while (i - 1 < t) {
        s[i++] = '0';
    }
    s[i] = '\0';
    reverse(s);
}
