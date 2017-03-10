#include <stdio.h>
#define MAXLINE 1000

int get_line();
int squeeze(char s1[], char s2[]);

int main() {
    int len;
    char line[MAXLINE];
    char *rep = "wq";

    while ((len = get_line(line, MAXLINE)) > 0) {
        printf("%d\n", squeeze(line, "aa"));
    }
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

int squeeze(char s1[], char s2[]) {
    char c2;
    int i, j;
    i = 0;

    while (s1[i] != '\0') {
        j = 0;
        while((c2 = s2[j]) == s1[i+j]) j++;
        if (c2 == '\0') {
            return i;
        }
        i++;
    }
    return -1;
}
