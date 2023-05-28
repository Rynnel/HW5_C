#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b); // используем рекурсию для поиска НОД
    }
}

void reduce_fraction(int *a, int *b) {
    int gcd_ab = gcd(*a, *b); // обозначаем НОД переменной gcd_ab

    *a /= gcd_ab; // делим переменную a на НОД
    *b /= gcd_ab; // делим переменную b на НОД
}

int main() {
    int a = 14, b = 49;

    reduce_fraction(&a, &b); // вызываем функцию с адресамb переменных a, b

    printf("%d / %d", a, b);

    return 0;
}
