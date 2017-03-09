#include <stdio.h>
#define MAXLINE 1000

int htoi(char s[]);
int lower(int c);
int ctoi(char c);
int get_line();

int main() {
    int len;
    char line[MAXLINE];

    while ((len = get_line(line, MAXLINE)) > 0)
        printf("%d\n", htoi(line));
}

int htoi(char s[]) {
    int i = 0;
    int n = 0;
    int start = 0;
    char c;

    while((s[i] = lower(s[i++])) != '\0');
    
    if (s[0] == '0' && s[1] == 'x')
        start = 2;

    while((c = s[start++]) != '\0' && c != '\n')
        n = n * 16 + ctoi(c);
    return n;
}

int lower(int c) {
    if (c >= 'A' && c <= 'Z') {
        return c - 'A' + 'a';
    } else {
        return c;
    }
}

int ctoi(char c) {
    c = lower(c);
    if (c >= '0' && c <= '9')
        return c - '0';
    if (c >= 'a' && c <= 'f')
        return c - 'a' + 10;
}

int get_line(char line[], int maxline) {
    int c, i;
    for (i=0; i < maxline -1 && (c = getchar()) != EOF && c != '\n'; i++) {
        line[i] = c;
    }
    if (c == '\n') {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}

