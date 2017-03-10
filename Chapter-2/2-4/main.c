#include <stdio.h>
#define MAXLINE 1000

int get_line();
int squeeze(char s1[], char s2[]);

int main() {
    int len;
    char line[MAXLINE];
    char *rep = "wq";

    while ((len = get_line(line, MAXLINE)) > 0) {
        squeeze(line, "aa");
        printf("%s", line);
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
    char c1, c2;
    int i, j, p1;
    i = j = p1 = 0;

    while (s1[i] != '\0') {
        j = 0;
        while((c2 = s2[j]) == s1[i+j]) j++;
        if (c2 == '\0') {
            i += j;
            continue;
        }
        s1[p1++] = s1[i++];
    }
    s1[p1] = '\0';
}
