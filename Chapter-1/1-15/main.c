#include <stdio.h>

int exchange(int, int, int);

int main()
{
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    exchange(lower, upper, step);
}

int exchange(int lower, int upper, int step) {
    int fahr, celsius;
    fahr = lower;

    printf("fahr\tcelius\n");
    while(fahr <= upper) {
        celsius = 5 * (fahr-32) /9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
}
