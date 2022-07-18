//Solução alternativa e enxuta para o problema 1

#include <stdio.h>

int main() {
    int numero;

    printf("Digite um inteiro: ");
    scanf("%d", &numero); //Não esquecer do 'address of (&)'

    printf("\n O antecessor é: %d", numero-1);
    printf("\n O sucessor é: %d", numero+1);

    return(0);
}