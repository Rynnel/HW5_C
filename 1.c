#include <stdio.h>

int main() {
    int arr[100], n;

    printf("Enter amount of elements: "); // вводим кол-во элементов массива
    scanf("%d", &n);

    if (n % 2 == 0) { // проверяем на четность количества элементов

        for (int i=0; i<n; i++) { // вводим элементы массива
            scanf("%d", &arr[i]);
        }
        for (int i=n/2; i<n; i++) { // выводим сначала вторую половину массива
            printf("%d ", arr[i]);
        }
        for (int i=0; i<n/2; i++) { // теперь выводим первую половину массива
            printf("%d ", arr[i]);
        }

    }
    else { // с нечетными будет неудобно работать, поэтому возвращаем 0
        printf("You should enter even amount of numbers!");
        return 0;
    }

    return 0;
}