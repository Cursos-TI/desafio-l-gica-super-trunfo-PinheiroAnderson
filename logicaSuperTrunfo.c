#include <stdio.h>
#include <string.h>


// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.



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

    int opcao;

    // ===== Menu =====
    printf("===== Super Trunfo - Comparação de Países =====\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Escolha o atributo para comparação: ");
    scanf("%d", &opcao);

    printf("\n=== Comparando: %s vs %s ===\n", nome1, nome2);

    switch (opcao)
    {
    case 1:
        printf("População:\n%s: %d\n%s: %d\n", nome1, populacao1, nome2, populacao2);
        if (populacao1 > populacao2)
        {
            printf("Vencedor: %s!\n", nome1);
        }
        else if (populacao2 > populacao1)
        {
            printf("Vencedor: %s!\n", nome2);
        }
        else
        {
            printf("Empate!\n");
        }
        break;

    case 2:
        printf("Área (km²):\n%s: %.2f\n%s: %.2f\n", nome1, area1, nome2, area2);
        if (area1 > area2)
        {
            printf("Vencedor: %s!\n", nome1);
        }
        else if (area2 > area1)
        {
            printf("Vencedor: %s!\n", nome2);
        }
        else
        {
            printf("Empate!\n");
        }
        break;

    case 3:
        printf("PIB (trilhões):\n%s: %.2f\n%s: %.2f\n", nome1, pib1, nome2, pib2);
        if (pib1 > pib2)
        {
            printf("Vencedor: %s!\n", nome1);
        }
        else if (pib2 > pib1)
        {
            printf("Vencedor: %s!\n", nome2);
        }
        else
        {
            printf("Empate!\n");
        }
        break;

    case 4:
        printf("Pontos Turísticos:\n%s: %d\n%s: %d\n", nome1, pontos1, nome2, pontos2);
        if (pontos1 > pontos2)
        {
            printf("Vencedor: %s!\n", nome1);
        }
        else if (pontos2 > pontos1)
        {
            printf("Vencedor: %s!\n", nome2);
        }
        else
        {
            printf("Empate!\n");
        }
        break;

    case 5:
        printf("Densidade Demográfica (hab/km²):\n%s: %.2f\n%s: %.2f\n", nome1, densidade1, nome2, densidade2);
        if (densidade1 < densidade2)
        { // Regra invertida
            printf("Vencedor: %s!\n", nome1);
        }
        else if (densidade2 < densidade1)
        {
            printf("Vencedor: %s!\n", nome2);
        }
        else
        {
            printf("Empate!\n");
        }
        break;

    default:
        printf("Opção inválida! Escolha um número entre 1 e 5.\n");
    }

    return 0;
}
