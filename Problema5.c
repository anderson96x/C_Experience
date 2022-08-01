// Objetivo: calcular a área de um trapezio
// Entrada: base maior (B), base menor (b) e altura (h)
// Processamento: A = (B+b).h / 2
// Saída: ****

#include <stdio.h>

int main() {

//Var
    float B, b, h, area;

//Entrada
    printf("\n Digite a base maior (B): ");
    scanf("%f", &B);

    printf("\n Digite a base menor (b): ");
    scanf("%f", &b);

    printf("\n Digite a altura (h): ");
    scanf("%f", &h);


//Processamento
    area = ((B+b)*h)/2;


//Saída        
    printf("\n A area total do trapezio e: %.2f", area);

    return(0);
}