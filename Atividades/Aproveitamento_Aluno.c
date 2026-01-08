#include <stdio.h>

int main()
{
    float nota1, nota2, media;

    printf("-----------------------------\n");
    printf("ESCOLA CLEITINHO BALANGADOR\n");
    printf("-----------------------------\n");

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("-----------------------------\n");

    media = (nota1 + nota2) / 2;
    printf("Média: %.2f\n", media);

    if (media >= 9)
    {
        printf("Aproveitamento: A\n");
    }
    else if (media >= 8)
    {
        printf("Aproveitamento: B\n");
    }
    else if (media >= 7)
    {
        printf("Aproveitamento: C\n");
    }
    else if (media >= 6)
    {
        printf("Aproveitamento: D\n");
    }
    else if (media >= 5)
    {
        printf("Aproveitamento: E\n");
    }
    else if (media < 5)
    {
        printf("Aproveitamento: F\n");
    }

    return 0;
}