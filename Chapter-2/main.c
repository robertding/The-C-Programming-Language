#include <stdio.h>

int main() {
    char c;
    int i = 0;
    int limit = 0;
    for (;;) {
        if (i < limit -1)
            if ((c = getchar()) != '\n')
                if (c != EOF) ++i;
    }
}
