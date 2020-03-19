#include <stdlib.h>
#include <stdio.h>
#include "calculadora.h";

int main(void)  {
    printf("hello\n");
    printf("A soma eh: %.2f\n", soma(2, 2));
    printf("A sub eh: %.2f\n", sub(2, 2));
    printf("A divisao eh: %.2f\n", divison(2, 2));
    printf("A multiplicacao eh: %.2f\n", mult(2, 2));
    return 1;
}