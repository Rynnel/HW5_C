#include <stdio.h>
#include <stdlib.h>

int abs_arr(int *arr, int n) {
    int count = 0;
    for (int i = 0; i < n; i++) { // проходим по элементам массива
        int *ptr = arr + i; // используем указатель ptr вместо использования индексов
        if (*ptr < 0) { // если элемент массива отрицательный, то используем модуль и прибавляем 1 к счетчику.
            *ptr = abs(*ptr);
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] = {10, -93, 22, 75, 12};
    int n = sizeof(arr) / sizeof(int);
    int count = abs_arr(arr, n); // к count приравниваем функцию, возвращающую саму переменную count

    printf("Modified array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]); // выводим измененный массив
    }
    printf("\nNumber of replacements: %d", count); // выводим количество изменений массива

    return 0;
}