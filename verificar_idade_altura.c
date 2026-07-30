#include <stdio.h>

int main() {

    int idade = 16;
    float altura = 1.75;

    if (idade >= 18 && altura >= 1.70) {
        printf("A pessoa é maior de idade e tem altura suficiente.\n");
    } else {
        printf("A pessoa não atende aos critérios.\n");
    }
    return 0;
}
