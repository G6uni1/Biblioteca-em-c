#include <stdio.h>

int main()
{
    int S, SA, D;

    printf("---------------------\n");
    printf("SPORT X SANTA\n");
    printf("---------------------\n");

    printf("Quantos gols do Sport? ");
    scanf("%d", &S);

    printf("Quantos gols do Santa? ");
    scanf("%d", &SA);

    D = S - SA;
    if (D < 0)
        D = -D;
    
    printf("--------------------------\n");
    printf("Diferença de: %d\n", D);
    printf("STATUS: ");

    switch (D)
    {
    case 0:
        printf("Empate");
        break;

    case 1:
    case 2:
    case 3:
        printf("Normal");
        break;

    default:
        printf("Goleada");
        break;
    }

    return 0;
}