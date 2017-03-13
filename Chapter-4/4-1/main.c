#include <stdio.h>
#include <string.h>

#define MAX 1000

int strrindex(char s[], char sf[]);

int main() {
    char *source = "hello world and world hello";
    char *search1 = "world";
    char *search2 = "word";

    printf("%d\n", strrindex(source, search1));
    printf("%d\n", strrindex(source, search2));
}

int strrindex(char s[], char sf[]) {
    int i, j, k;
    for (i = strlen(s); i >= 0; --i) {
        for (j=i, k=0; sf[k] != '\0' && s[j] == sf[k]; j++, k++);
        if (k > 0 && sf[k] == '\0')
            return i;
    }
    return -1;
}
