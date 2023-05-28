#include <stdio.h>
#include <stdlib.h>

struct Move {
    int x;
    int y;
};

struct Move getFinishPoint(struct Move arr[], int n) {
    struct Move finish = {0, 0}; // обозначаем координаты финальной позиции
    struct Move *ptr;

    for (ptr = arr; ptr < arr+n; ptr++) { // циклом проходим по всем элементам X и Y массива arr и прибавляем их к соответствующим координатам finish
        finish.x += ptr->x;
        finish.y += ptr->y;
    }

    return finish;
}

int main() {
    struct Move arr[] = {{3, 1}, {0, -2}, {-1, 4}}; // массив из кортежей вида {x, y}
    int n = sizeof(arr) / sizeof(struct Move);

    struct Move finish = getFinishPoint(arr, n); // приравниваем переменную finish к функции, считающей координаты finish
    printf("(%d, %d)", finish.x, finish.y);

    return 0;
}