#include <stdio.h>

int main() {
    float nota1, nota2, media;
    int continuar;

do {
    printf("Digite sua primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite sua segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2)/2;

    printf("Sua nota final é:  %.2f\n", media);

    if (media >= 7) {
        printf("Aprovado!\n");
    } 
    else if (media >= 5) {
        printf("Recuperação\n");
    } else {
        printf("Reprovado!\n");
    }

    printf("Gostaria de encerrar? (1 - sim/ 0 - Não)");
    scanf("%d", &continuar);


    } while (continuar != 1);
    
       printf("Programa Encerrado");
    
    return 0;
    
}