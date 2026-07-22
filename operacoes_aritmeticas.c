#include <stdio.h>

int main(){
 /*
 Soma (+)   
 Subtração (-)
 Multiplicação (*)
 Divisão (/)
 */

 int numero1, numero2;
 int soma, subtracao, multiplicacao, divisao;

 printf (" Entre com o número 1: \n");
 scanf ("%d", &numero1);

 printf (" Entre com o número 2: \n");
 scanf ("%d", &numero2);

 //operação soma
 soma = numero1 + numero2;

 //operação subtração
 subtracao = numero1 - numero2;

 //operação multiplicação
 multiplicacao = numero1 * numero2;

 //operação divisão
 divisao = numero1 / numero2;
 
 printf ("Soma: %d\n", soma);
 printf ("Subtração: %d\n", subtracao);
 printf ("Multiplicação: %d\n", multiplicacao);
 printf ("Divisão: %d\n", divisao);

 return 0;
}