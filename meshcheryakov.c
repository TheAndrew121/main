#include <locale.h>
#include <stdio.h>

int main(){
    setlocale(LC_ALL, "Rus");
    int a = 5;
    int b = 3;
    int sum = a + b;
    int difference = a - b;
    printf("Сумма: %d\n", sum);
    printf("Разность: %d\n", difference);
    return 0;
}