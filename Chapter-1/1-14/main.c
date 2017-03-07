#include <stdio.h>

#define AL 26

int main(char argc, char *argv){
    char c;
    int a[AL], max, wlength;
    int i, j;

    wlength = max = 0;
    for (i = 0; i < AL; i++) {
        a[i] = 0;
    }

    while((c = getchar()) != EOF){
        a[c - 'a'] += 1;
    }

    for (i = 0; i < AL; i++) {
        if (max < a[i]){
            max = a[i];
        }
    }

    for (i = max; i > 0; i--) {
        for (j = 0; j < AL; j++) {
            if (a[j] >= i) {
                putchar('#');
            } else {
                putchar(' ');
            }
        }
        putchar('\n');
    }

    for (i=0; i < AL; i++){
        putchar('a'+i);
    }
    putchar('\n');
}
