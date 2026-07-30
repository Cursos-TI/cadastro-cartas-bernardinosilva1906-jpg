#include <stdio.h>

int main() {

    float temperatura = 14.0;

    if (temperatura > 30.0) {
        printf("Está muito quente!\n");
    } else if (temperatura < 15.0) {
        printf("Está muito frio!\n");
    } else {
        printf("A temperatura está agradável.\n");
    }
    return 0;
}
