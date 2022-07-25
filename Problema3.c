// Objetivo: calcular rendimentos
// Entrada: valor de depósito, valor de juros
// Processamento: calcular o rendiiemtno
// Saída: valor de rendimento e vaolor total

#include <stdio.h>
#define p printf //Encurta as palavras reservadas / Não é boa prática
#define s scanf

int main() {
//var
    float deposito, juros, rendimento, saldo;

//Entrada
    p("Valor do deposito (R$): ");
    s("%f", &deposito);
    p("Taxa de juros (%%): "); //%% displays '%'
    s("%f", &juros);

//Processamento
    rendimento = deposito*(juros/100);
    saldo = deposito + rendimento;

//Saída    
    p("\n Seu dinheiro rendeu: R$%.2f", rendimento);
    p("\n Saldo atual: R$%.2f", saldo);



    return (0);
}
