// Objetivo: receber quatro notas e calcular a média aritmética.
// Entrada: quatro números inteiros
// Processamento: ***
// Saída: média dos números

#include <stdio.h>

int main() {
//var
    float n1, n2, n3, n4, media;

//Entrada de dados
    printf("Digite a nota I: ");
    scanf("%f", &n1);

    printf("Digite a nota II: ");
    scanf("%f", &n2);

    printf("Digite a nota III: ");
    scanf("%f", &n3);

    printf("Digite a nota IV: ");
    scanf("%f", &n4);


//Processamento
    media = (n1+n2+n3+n4)/4;


//Saída de dados
    printf("Media final: %.2f", media);

    return(0);
}