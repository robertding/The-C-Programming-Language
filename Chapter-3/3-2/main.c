#include <stdio.h>

#define LINEMAX 1000

int escape(char[], char[]);
int invert_escape(char[], char[]);

int main() {
    char es[LINEMAX], ies[LINEMAX];
    char *et = "'asdf\t  \t \nasd\n";
    char *iet = "'asdf\\t  \\t a\\nasd\\n";
    escape(es, et);
    invert_escape(ies, iet);
    printf("%s\n", es);
    printf("%s\n", ies);
}

int escape(char s[], char t[]) {
    int i, j;
    i = j = 0;

    while(t[i] != '0') {
        switch(t[i]) {
            case '\t':
                s[j++] = '\\';
                s[j++] = 't';
                break;
            case '\n':
                s[j++] = '\\';
                s[j++] = 'n';
                break;
            default:
                s[j++] = t[i];
                break;
        }
        i++;
    }
}

int invert_escape(char s[], char t[]) {
    int i, j = 0;
    char prev;
    i = j = 0;

    while(t[i] != '0') {
        switch(t[i]) {
            case '\\':
                prev = '\\';
                break;
            case 't':
                if (prev == '\\') {
                    prev = 'a';
                    s[j++] = '\t';
                    break;
                }
            case 'n':
                if (prev == '\\') {
                    prev = 'a';
                    s[j++] = '\n';
                    break;
                }
            default:
                prev = 'a';
                s[j++] = t[i];
                break;
        }
        i++;
    }
}
