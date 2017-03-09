#include <stdio.h>
#define MAXLINE 1000

int get_line(char line[], int maxline);
int rstrip(char line[], int len);
void copy(char to[], char from[]);

int main() {
    int len; int max;
    char line[MAXLINE];

    max = 0;
    while ((len = get_line(line, MAXLINE)) > 0) {
        len = rstrip(line, len);
        if (len >= 0)
            printf("%s", line);
    }
    return 0;
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

int rstrip(char line[], int len) {
    int ln = 0;
    if (line[len-1] == '\n') {
        len--;
        ln = 1;
    };
    while(len--) {
        if (line[len] == ' ' || line[len] == '\t') {
            if (ln) {
                line[len] = '\n';
                line[len+1] = '\0';
            } else {
                line[len] = '\0';
            }
        } else {
            break;
        }
    }
    return len;
}

void copy(char to[], char from[]) {
    int i = 0;
    while((to[i] = from[i++]) != '\0');
}
