#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <stdbool.h>

void multiplicacao(float *numero1, float *numero2, float *resultado){
    printf("Digite  primeiro numero da multiplicação: ");
    scanf("%f", numero1);
    printf("\nDigite o segundo numero da multiplicação: ");
    scanf("%f", numero2);

    *resultado = *numero1 * *numero2;

    printf("O resultado é: %.2f\n\n", *resultado);
    sleep(1);

    }