#include <stdio.h>

int main(char argc, char *argv){
    char c, prev_newline;
    prev_newline = 0;
    while((c = getchar()) != EOF){
        if ( c == '\t' || c == ' '){
            if (prev_newline)
                continue;
            putchar('\n');
        } else {
            putchar(c);
        }
        prev_newline =  c == '\t' || c == ' ';
    }
}
