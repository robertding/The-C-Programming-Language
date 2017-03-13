#include <stdio.h>
#include <ctype.h>

#define MAX 1000

int expand(char[], char[]);
int issame(int a, int b);

int main() {
    char s[MAX] = "a-cb-aca-z-0-90-A-G";
    char t[MAX];
    expand(s, t);
    printf("%s\n", s);
    printf("%s\n", t);
}

int expand(char s[], char t[]) {
    int i, j, c;
    i = j = 0;

    while(s[i] != '\0') {
        if ( i > 0 && s[i] == '-' && issame(s[i-1], s[i+1]) && s[i-1] < s[i+1]) {
            for (c=s[i-1]+1; c < s[i+1]; c++) {
                t[j++] = c;
            }
            i++;
            continue;
        }
        t[j++] = s[i++];
    }
}

int issame(int a, int b) {
    if (isdigit(a) && isdigit(b)) {
        return 1;
    } else if (isupper(a) && isupper(b)) {
        return 1;
    } else if (islower(a) && islower(b)) {
        return 1;
    }
    return 0;
}
