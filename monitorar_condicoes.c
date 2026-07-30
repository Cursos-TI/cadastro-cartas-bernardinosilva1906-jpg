#include <stdio.h>

int main() {
    float temperatura,  umidade;
    unsigned int estoque;

    printf("Digite a temperatura:\n");
    scanf("%f", &temperatura);
    printf("Digite a umidade:\n");
    scanf("%f", &umidade);
    printf("Digite o estoque:\n");
    scanf("%u", &estoque);

    if (temperatura > 30.0 && umidade < 50.0 && estoque < 100) {
        printf("Alerta: Condições críticas!\n");
    } else {
        printf("Condições normais.\n");
    }

    if (umidade > 50.0) {
        printf("A umidade está alta.\n");
    } else {
        printf("A umidade está baixa.\n");
    }  
    
    if (estoque < 50) {
        printf("Estoque baixo.\n");
    } else {
        printf("Estoque suficiente.\n");
    }   
    return 0;
}   
