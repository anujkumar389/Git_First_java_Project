#include <stdio.h>

double sqrt_babylonian(double num) {
    double x = num;
    double y = 1;

    while (x - y > 0.000001) {
        x = (x + y) / 2;
        y = num / x;
    }

    return x;
}

int main() {
    double num, root;

    printf("Enter a number: ");
    scanf("%lf", &num);

    root = sqrt_babylonian(num);

    printf("The square root of %f is %f\n", num, root);

    return 0;
}