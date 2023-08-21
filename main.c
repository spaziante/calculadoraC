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

    int main()
{
    bool loop = true;
    char escolha;

    float resultado;
    float numero1;
    float numero2;

    while (loop == true)
    {
        printf("Escolha a operacao que voce deseja fazer: \n");
        printf("Soma ( + ) \n");
        printf("Subtracao ( - ) \n");
        printf("Multiplacao ( * ) \n");
        printf("Divisao ( / ) \n");
        printf("Fechar Programa = F \n");
        
        scanf(" %c", &escolha);

        if (escolha == 'f' || escolha == 'F')
        {
            loop = false;
            printf("Saindo....");
            sleep(2);
            return 0;
        } else if (escolha == '+'){
            soma(&numero1, &numero2, &resultado);
        } else if (escolha == '/') {
            divisao(&numero1, &numero2, &resultado);
        } 
          else if (escolha == '-') {
            subtracao(&numero1, &numero2, &resultado);
        } 
          else if (escolha == '*') {
            multiplicacao(&numero1, &numero2, &resultado);
        } 
    
    }

    return 0;
}