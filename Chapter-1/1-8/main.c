#include <stdio.h>

int main(char argc, char *argv){
    int tab, space, newline, c;
    tab = space = newline = 0;

    while((c = getchar()) != EOF) {
        if (c == ' ') {
            space++;
        }else if ( c == '\n') {
            newline++;
        }else if ( c == '\t') {
            tab++;
        }
    }
    printf("tab\tspace\tnewline\n");
    printf("%d\t%d\t%d\n", tab, space, newline);
}
