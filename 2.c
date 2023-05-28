#include <stdio.h>

struct Person {
    int age;
    char name[30];
};

struct Person *averageage(struct Person people[], int n) {
    int sum=0, count=0, avgage;
    struct Person *ptr;

    for (ptr = people; ptr < people+n; ptr++) { // проходим по каждому человеку массива people и прибавляем его возраст к sum. Также прибавляем 1 к счетчику count
        sum += ptr->age;
        count++;
    }
    avgage = sum/count; // находим средний возраст
}

int main() {
    struct Person people[] = {{16, "Alexandr"}, {23, "Alexey"}, {39, "Pavel"}};
    int n = sizeof(people) / sizeof(struct Person);

    struct Person *avgage = averageage(people, n); // приравниваем переменную avgage к функции, которая и будет считать средний возраст
    printf("Average age is: %d", avgage); // выводим средний возраст
}