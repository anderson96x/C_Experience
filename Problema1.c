// Objetivo: exibir o antecessor e o sucessor de um número intetiro.
// Entrada: um número inteiro
// Processamento: x + 1 / x - 1
// Saída: ***

#include <stdio.h>

int main() {

//Var
    int numero, suc, ant;

//Entrada
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

//Processamento
    ant = numero - 1;
    suc = numero + 1;

//Saída
    printf("\n O numero e: %d", numero);

    //Duas variáveis em uma string
    printf("\n O antecessor de %d e: %d", numero, ant);
    printf("\n O sucessor de %d e: %d", numero, suc);

    return (0);
}