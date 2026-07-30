#include <stdio.h>

int main() {

    int nota = 90;

    if (nota >= 90) {
        printf("Aprovado com louvor!\n");
    } else if (nota >= 70) {
        printf("Aprovado!\n");
    } else {
        printf("Reprovado!\n");
    }
    return 0;
}