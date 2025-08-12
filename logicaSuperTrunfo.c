#include <stdio.h>
#include <string.h>

int main()
{
    // ===== Dados da Carta 1 =====
    char nome1[] = "Brasil";
    int populacao1 = 214000000;
    float area1 = 8516000.0;
    float pib1 = 1.9; // trilhões
    int pontos1 = 30;
    float densidade1 = populacao1 / area1;

    // ===== Dados da Carta 2 =====
    char nome2[] = "Argentina";
    int populacao2 = 46000000;
    float area2 = 2780000.0;
    float pib2 = 0.5; // trilhões
    int pontos2 = 20;
    float densidade2 = populacao2 / area2;

    int opcao1, opcao2;

    printf("===== Super Trunfo - Comparação de Países (Nível Mestre) =====\n");

    // ===== Escolha do primeiro atributo =====
    printf("Escolha o primeiro atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &opcao1);

    // ===== Escolha do segundo atributo (menu dinâmico) =====
    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    for (int i = 1; i <= 5; i++)
    {
        if (i != opcao1)
        {
            switch (i)
            {
            case 1: printf("1 - População\n"); break;
            case 2: printf("2 - Área\n"); break;
            case 3: printf("3 - PIB\n"); break;
            case 4: printf("4 - Número de Pontos Turísticos\n"); break;
            case 5: printf("5 - Densidade Demográfica\n"); break;
            }
        }
    }
    printf("Opção: ");
    scanf("%d", &opcao2);

    // Variáveis para armazenar as somas dos valores
    float soma1 = 0, soma2 = 0;

    printf("\n=== Comparando: %s vs %s ===\n", nome1, nome2);

    // ===== Comparação do primeiro atributo =====
    switch (opcao1)
    {
    case 1:
        printf("\nPopulação:\n%s: %d\n%s: %d\n", nome1, populacao1, nome2, populacao2);
        soma1 += populacao1;
        soma2 += populacao2;
        printf("Vencedor no atributo: %s\n", (populacao1 > populacao2) ? nome1 : (populacao2 > populacao1) ? nome2 : "Empate");
        break;
    case 2:
        printf("\nÁrea (km²):\n%s: %.2f\n%s: %.2f\n", nome1, area1, nome2, area2);
        soma1 += area1;
        soma2 += area2;
        printf("Vencedor no atributo: %s\n", (area1 > area2) ? nome1 : (area2 > area1) ? nome2 : "Empate");
        break;
    case 3:
        printf("\nPIB (trilhões):\n%s: %.2f\n%s: %.2f\n", nome1, pib1, nome2, pib2);
        soma1 += pib1;
        soma2 += pib2;
        printf("Vencedor no atributo: %s\n", (pib1 > pib2) ? nome1 : (pib2 > pib1) ? nome2 : "Empate");
        break;
    case 4:
        printf("\nPontos Turísticos:\n%s: %d\n%s: %d\n", nome1, pontos1, nome2, pontos2);
        soma1 += pontos1;
        soma2 += pontos2;
        printf("Vencedor no atributo: %s\n", (pontos1 > pontos2) ? nome1 : (pontos2 > pontos1) ? nome2 : "Empate");
        break;
    case 5:
        printf("\nDensidade Demográfica (hab/km²):\n%s: %.2f\n%s: %.2f\n", nome1, densidade1, nome2, densidade2);
        soma1 += densidade1;
        soma2 += densidade2;
        printf("Vencedor no atributo: %s\n", (densidade1 < densidade2) ? nome1 : (densidade2 < densidade1) ? nome2 : "Empate");
        break;
    default:
        printf("Opção inválida!\n");
        return 0;
    }

    // ===== Comparação do segundo atributo =====
    switch (opcao2)
    {
    case 1:
        printf("\nPopulação:\n%s: %d\n%s: %d\n", nome1, populacao1, nome2, populacao2);
        soma1 += populacao1;
        soma2 += populacao2;
        printf("Vencedor no atributo: %s\n", (populacao1 > populacao2) ? nome1 : (populacao2 > populacao1) ? nome2 : "Empate");
        break;
    case 2:
        printf("\nÁrea (km²):\n%s: %.2f\n%s: %.2f\n", nome1, area1, nome2, area2);
        soma1 += area1;
        soma2 += area2;
        printf("Vencedor no atributo: %s\n", (area1 > area2) ? nome1 : (area2 > area1) ? nome2 : "Empate");
        break;
    case 3:
        printf("\nPIB (trilhões):\n%s: %.2f\n%s: %.2f\n", nome1, pib1, nome2, pib2);
        soma1 += pib1;
        soma2 += pib2;
        printf("Vencedor no atributo: %s\n", (pib1 > pib2) ? nome1 : (pib2 > pib1) ? nome2 : "Empate");
        break;
    case 4:
        printf("\nPontos Turísticos:\n%s: %d\n%s: %d\n", nome1, pontos1, nome2, pontos2);
        soma1 += pontos1;
        soma2 += pontos2;
        printf("Vencedor no atributo: %s\n", (pontos1 > pontos2) ? nome1 : (pontos2 > pontos1) ? nome2 : "Empate");
        break;
    case 5:
        printf("\nDensidade Demográfica (hab/km²):\n%s: %.2f\n%s: %.2f\n", nome1, densidade1, nome2, densidade2);
        soma1 += densidade1;
        soma2 += densidade2;
        printf("Vencedor no atributo: %s\n", (densidade1 < densidade2) ? nome1 : (densidade2 < densidade1) ? nome2 : "Empate");
        break;
    default:
        printf("Opção inválida!\n");
        return 0;
    }

    // ===== Resultado final =====
    printf("\n=== Resultado Final ===\n");
    printf("Soma dos atributos:\n%s: %.2f\n%s: %.2f\n", nome1, soma1, nome2, soma2);

    if (soma1 > soma2)
        printf("Vencedor final: %s!\n", nome1);
    else if (soma2 > soma1)
        printf("Vencedor final: %s!\n", nome2);
    else
        printf("Empate!\n");

    return 0;
}
