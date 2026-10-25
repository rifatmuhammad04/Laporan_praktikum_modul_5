#include <stdio.h>
#include <math.h>

int absolute(int number) {
    if (number < 0) return -number;
    return number;
}

int calculate(int val1, int val2) {
    return absolute(val1 - val2);
}

int main() {
    int a, b, c, d;

    scanf("%d", &a);
    scanf("%d", &c);
    scanf("%d", &b);
    scanf("%d", &d);

    int Result = calculate(a, b) + calculate(c, d);
    printf("%d", absolute(Result));

    return 0;
}