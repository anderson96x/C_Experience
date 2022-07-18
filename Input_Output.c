//Testing types of I/O

#include <stdio.h>

int main() {
    char str[20];
    int ch, n=10;

//Entrada
    //printf("Type (scanf): ");
    //scanf("%s", str);

    // printf("Type (gets): ");
    // gets(str);

    printf("Type (getchar): ");
    ch = getchar();

    //printf("Type (fgets): ");
    //fgets(str, n, stdin);

//Saída
    //printf("%s", str);
    // puts(str);
    putchar(ch);

   //printf("A%-5.2fZ", 3.14159);

    return(0);
}