#include <stdio.h>

int main() {
int numeroSinal = 3000000000; // Este valor excede o limite de um int normal
unsigned int numeroSemSinal = 3000000000; 

printf("Valor com sinal: %d\n", numeroSinal);
printf("Valor sem sinal: %u\n", numeroSemSinal);

return 0;
}   
