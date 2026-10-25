#include <stdio.h>

int maximum(int a, int b) {
    if (a > b) return a;
    return b;
}

int minimum(int a, int b) {
    if (a < b) return a;
    return b;
}

int main() {
    int limit = 0;
    int max_val = -100000;
    int min_val = 100000;
    int total_numbers;

    scanf("%d", &total_numbers);

    while (limit < total_numbers) {
        int value;
        scanf("%d", &value);
        max_val = maximum(max_val, value);
        min_val = minimum(min_val, value);
        limit++;
    }

    printf("%d %d", max_val, min_val);
    return 0;
}