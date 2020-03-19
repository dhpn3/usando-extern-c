#include <stdlib.h>
#include <stdio.h>
#include "calculadora.h";

int main(void)  {
    printf("hello");
    printf("A soma eh: %.2f", soma(2, 2));
    printf("A sub eh: %.2f", sub(2, 2));
    printf("A divisao eh: %.2f", divison(2, 2));
    printf("A multiplicacao eh: %.2f", mult(2, 2));
    return 1;
}