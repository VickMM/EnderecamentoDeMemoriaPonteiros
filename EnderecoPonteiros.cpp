#include<iostream>
#include<stdio.h>

int main(){

  int numero1;
  int numero2;
  int *pNumero1;
  int *pNumero2;
  //asterisco na frente da variavel lindica ponteiro

  numero1 = 10;
  numero2 = 25;

  pNumero1 = &numero1;
  pNumero2 = &numero2;
  // o & significa "endereço de x variavel"

  printf("O endereco do numero 1: %x. Valor: %d.", pNumero1, *pNumero1);
  printf("\nO endereco do numero 2: %x. Valor: %d.", pNumero2, *pNumero2);
  // o x indica posição hexadecimal
}
