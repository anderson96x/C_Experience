// Objetivo: calcular o primeiro numero elevado ao segundo
// Entrada: dois numeros inteiros
// Processamento: x^y
// Saída: ***

#include <stdio.h>
#include <math.h> //Necessario para pow() funcionar
#define p printf
#define s scanf

int main() {
//var
    int x,y;
    double res;


//Entrada
    p("Digite um valor para X: ");
    s("%d", &x); //esqueci o & haha
    p("Digite um valor para Y: ");
    s("%d", &y);


//Processamento
    res = pow((double)x, (double)y); 
    //A função pow() calcula a potencia de um numero. A sintaxe é pow(double'base', double'potencia')
    //Fiz um "type casting" de int para double.
    //Uma variável uma vez criada com um tipo não pode ser alterada em tempo de execução. Por isso, foi definido 'double res' para receber a conversão e não 'int res'.

//Saida
    p("O numero %d elevado a %d e igual a: %.0f", x,y,res);


    return (0);
}