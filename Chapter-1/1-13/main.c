#include <stdio.h>

#define MAX_WORD_LENGTH  10

int main(char argc, char *argv){
    char c;
    int a[MAX_WORD_LENGTH], max, wlength;
    int i, j;

    wlength = max = 0;
    for (i = 0; i < MAX_WORD_LENGTH; i++) {
        a[i] = 0;
    }

    while((c = getchar()) != EOF){
        if ( c == '\t' || c == ' ' || c == '\n') {
            a[wlength] += 1;
            wlength = 0;
        } else {
            wlength++;
        }
    }

    for (i = 0; i < MAX_WORD_LENGTH; i++) {
        if (max < a[i]){
            max = a[i];
        }
    }

    for (i = max; i > 0; i--) {
        for (j = 0; j < MAX_WORD_LENGTH; j++) {
            if (a[j] >= i) {
                putchar('#');
            } else {
                putchar(' ');
            }
        }
        putchar('\n');
    }
}
