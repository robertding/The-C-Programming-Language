#include <stdio.h>
#include <string.h>

#define MAX 1000

void reverse(char s[]);
void itob(int n, char s[], int b);

int main() {
    char s[MAX];
    itob(12, s, 2);
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

void itob(int n, char s[], int b) {
    int i, sign;

    if (sign = n < 0) {
        n = - n;
    }
    i = 0;
    do {
        s[i] = n % b;
        s[i] += s[i] < 10 ? '0': 'a' - 10;
        i++;
    } while ((n/=b) > 0);
    if (sign < 0) {
        s[i++] = '-';
    }
    s[i] = '\0';
    reverse(s);
}
