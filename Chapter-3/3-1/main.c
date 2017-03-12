#include <stdio.h>

int binsearch(int, int [], int);

int main() {
    int V[] = {1, 3, 5, 6, 8, 10, 13, 16, 19};
    printf("%d\n", binsearch(5, V, 9));
}

int binsearch(int x, int v[], int n) {
    int low, high, mid;
    low = 0;
    high = n - 1;
    while(low < high) {
        mid = (low + high) / 2;
        if (x > v[mid]) {
            low = mid + 1;
        } else {
            high = mid;
        }
    }
    if (v[low] == x) {
        return low;
    } else {
        return -1;
    }
}
