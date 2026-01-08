#include <stdio.h>

int main(void)
{
    float IMC, peso, altura;
    int continuar;

    do
    {
        printf("Digite seu peso (em kg): ");
        scanf("%f", &peso);

        printf("Digite sua altura (em cm): ");
        scanf("%f", &altura);

        IMC = peso / (altura * altura / 10000);

        printf("Seu IMC é: %.2f\n", IMC);

        if (IMC < 18.5)
        {
            printf("Abaixo do peso\n");
        }
        else if (IMC >= 18.5 && IMC < 24.9)
        {
            printf("Peso normal!\n");
        }
        else if (IMC >= 25 && IMC < 29.9)
        {
            printf("Sobrepeso\n");
        }
        else if (IMC >= 30 && IMC < 34.9)
        {
            printf("Obesidade grau I\n");
        }
        else if (IMC >= 35 && IMC < 39.9)
        {
            printf("Obesidade grau II\n");
        }
        else if (IMC >= 40)
        {
            printf("Obesidade grau III\n");
        }
        printf("Deseja calcular novamente? (1 - Sim / 0 - Não): ");
        scanf("%d", &continuar);

    } while (continuar != 0);
    printf("Encerrando o programa. Obrigado!\n");

    return 0;
}
