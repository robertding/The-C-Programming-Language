#include <stdio.h>

int main(char argc, char *argv){
    char c;
    while((c = getchar()) != EOF){
        if ( c == '\t'){
            putchar('\\');
            putchar('t');
        } else if ( c == '\b') {
            putchar('\\');
            putchar('b');
        } else if ( c == '\\') {
            putchar('\\');
            putchar('\\');
        } else {
            putchar(c);
        }
    }
}
