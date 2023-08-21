#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <stdbool.h>

void soma(float *numero1, float *numero2, float *resultado){
    printf("Digite o primeiro numero da soma: ");
    scanf("%f", numero1);
    printf("\nDigite o segundo numero da soma: ");
    scanf("%f", numero2);

    *resultado = *numero1 + *numero2;

    printf("O resultado eh: %.2f\n\n", *resultado);
    sleep(1);

}