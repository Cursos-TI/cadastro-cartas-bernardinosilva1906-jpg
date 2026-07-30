#include <stdio.h>

int main() {

    int a = 10, b = 5;

    if (a > b || b > 0) {
        printf("Os dois numeros sao positivos.\n");
    } else {
        printf("Pelo menos um dos numeros é negativo.\n");
    }
    return 0;
}   