#include <stdio.h>

int main(char argc, char *argv){
    char prev, c;
    while((c = getchar()) != EOF){
        if (c == ' ' && prev == ' ')
            continue;
        putchar(c);
        prev = c;
    }
}
