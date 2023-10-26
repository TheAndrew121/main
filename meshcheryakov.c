#include <locale.h>
#include <stdio.h>

int main(){
    setlocale(LC_ALL, "Rus");
    int a = 5;
    int b = 3;
    int sum = a + b;
    printf("Сумма: %d\n", sum);
    return 0;
}