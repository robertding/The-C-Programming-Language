#include <stdio.h>
#define MAXLINE 1000

int get_line(char line[], int maxline);
void copy(char to[], char from[]);
int reverse(char ori[], char revs[], int len);

int main() {
    int len;
    int max;
    char line[MAXLINE];
    char reversed[MAXLINE];

    max = 0;
    while ((len = get_line(line, MAXLINE)) > 0) {
        reverse(line, reversed, len);
        printf("%s", reversed);
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

int reverse(char ori[], char revs[], int len) {
    int i = 0;

    revs[len--] = '\0';
    if(ori[len] == '\n') {
        revs[len] = '\n';
    }
    while(len--) revs[i++] = ori[len]; 
}

void copy(char to[], char from[]) {
    int i;
    i = 0;
    while((to[i] = from[i]) != '\0') {
        i++;
    }
}
