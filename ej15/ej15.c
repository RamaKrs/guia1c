#include <stdio.h>

int factorial(int n) {
    int res = 1;
    for (int i = 1; i <= n; i++) {
        res *= i;
    }
    return res;
}
int main() {
    printf("Factorial de 5: %d", factorial(6));
}
