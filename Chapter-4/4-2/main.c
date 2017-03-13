#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define MAX 1000

double atof_(char s[]);

int main() {
    char *source = "3.145e-2";

    printf("%f\n", atof_(source));
}

double atof_(char s[]) {
    double val, power;
    int i, j, sign, e;
    char e_s[MAX];

    for (i=0; isspace(s[i]); i++);
    sign = (s[i] == '-') ? -1: 1;
    if (s[i] == '+' || s[i] == '-') i++;
    for (val=0.0; isdigit(s[i]); i++)
        val = 10.0*val + s[i] - '0';
    if (s[i] == '.') i++;
    for (e=0; isdigit(s[i]); i++) {
        val = 10.0*val + s[i] - '0';
        e -= 1;
    }
    if (tolower(s[i]) == 'e') i++;
    for (j=0; isdigit(s[i]) || s[i] == '+' || s[i] == '-'; e_s[j++]=s[i++]);
    e_s[j] = '\0';
    if (j > 0)
        e += (int) atof_(e_s);
    for (j=0, power=1.0; j<abs(e); j++) {
        if (e > 0) {
            power *= 10.0;
        } else if (e < 0) {
            power /= 10.0;
        } else {
            power = 1.0;
        }
    }
    
    return sign*val*power;
}
