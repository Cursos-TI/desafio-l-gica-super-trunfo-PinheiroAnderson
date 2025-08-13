#include <stdio.h>
#define BILHOES 1000000000.0f

// Função auxiliar para exibir nome do atributo
const char *nomeAtributo(int opcao)
{
    switch (opcao)
    {
    case 1:
        return "População";
    case 2:
        return "Área";
    case 3:
        return "PIB";
    case 4:
        return "Pontos Turísticos";
    case 5:
        return "Densidade Populacional";
    case 6:
        return "PIB per Capita";
    case 7:
        return "Super Poder";
    default:
        return "Atributo Desconhecido";
    }
}

int main()
{
    // Variáveis da Carta 1
    char estado1, codigo1[4], nomeCidade1[50];
    unsigned long int populacao1;
    int pontosTuristicos1;
    float area1, pib1, densidade1, pibPerCapita1, superPoder1;

    // Variáveis da Carta 2
    char estado2, codigo2[4], nomeCidade2[50];
    unsigned long int populacao2;
    int pontosTuristicos2;
    float area2, pib2, densidade2, pibPerCapita2, superPoder2;

    // Cadastro Carta 1
    printf("\n=== Cadastro da Carta 1 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Código da carta: ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Área (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos Carta 1
    densidade1 = (area1 != 0) ? (float)populacao1 / area1 : 0.0f;
    pibPerCapita1 = (populacao1 != 0) ? (pib1 * BILHOES) / populacao1 : 0.0f;
    superPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + ((densidade1 != 0) ? (1.0f / densidade1) : 0.0f);

    // Cadastro Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código da carta: ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos Carta 2
    densidade2 = (area2 != 0) ? (float)populacao2 / area2 : 0.0f;
    pibPerCapita2 = (populacao2 != 0) ? (pib2 * BILHOES) / populacao2 : 0.0f;
    superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + ((densidade2 != 0) ? (1.0f / densidade2) : 0.0f);

    // Menu para escolha dos atributos
    int opcao1, opcao2;
    printf("\n=== Escolha o PRIMEIRO atributo para comparar ===\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Populacional\n6 - PIB per Capita\n7 - Super Poder\n");
    scanf("%d", &opcao1);

    printf("\n=== Escolha o SEGUNDO atributo para comparar (diferente do primeiro) ===\n");
    for (int i = 1; i <= 7; i++)
    {
        if (i != opcao1)
        {
            printf("%d - %s\n", i, nomeAtributo(i));
        }
    }
    scanf("%d", &opcao2);

    int vitorias_carta1 = 0, vitorias_carta2 = 0;

    // Função de comparação inline com switch + exibição
    for (int i = 1; i <= 2; i++)
    {
        int atributo = (i == 1) ? opcao1 : opcao2;
        printf("\n--- Comparando: %s ---\n", nomeAtributo(atributo));
        switch (atributo)
        {
        case 1:
            printf("%s: %lu vs %lu\n", nomeAtributo(atributo), populacao1, populacao2);
            (populacao1 > populacao2) ? (printf("Vencedor: %s\n", nomeCidade1), vitorias_carta1++) : (populacao2 > populacao1) ? (printf("Vencedor: %s\n", nomeCidade2), vitorias_carta2++)
                                                                                                                               : printf("Empate!\n");
            break;
        case 2:
            printf("%s: %.2f km² vs %.2f km²\n", nomeAtributo(atributo), area1, area2);
            (area1 > area2) ? (printf("Vencedor: %s\n", nomeCidade1), vitorias_carta1++) : (area2 > area1) ? (printf("Vencedor: %s\n", nomeCidade2), vitorias_carta2++)
                                                                                                           : printf("Empate!\n");
            break;
        case 3:
            printf("%s: %.2f bi vs %.2f bi\n", nomeAtributo(atributo), pib1, pib2);
            (pib1 > pib2) ? (printf("Vencedor: %s\n", nomeCidade1), vitorias_carta1++) : (pib2 > pib1) ? (printf("Vencedor: %s\n", nomeCidade2), vitorias_carta2++)
                                                                                                       : printf("Empate!\n");
            break;
        case 4:
            printf("%s: %d vs %d\n", nomeAtributo(atributo), pontosTuristicos1, pontosTuristicos2);
            (pontosTuristicos1 > pontosTuristicos2) ? (printf("Vencedor: %s\n", nomeCidade1), vitorias_carta1++) : (pontosTuristicos2 > pontosTuristicos1) ? (printf("Vencedor: %s\n", nomeCidade2), vitorias_carta2++)
                                                                                                                                                           : printf("Empate!\n");
            break;
        case 5:
            printf("%s: %.2f hab/km² vs %.2f hab/km²\n", nomeAtributo(atributo), densidade1, densidade2);
            (densidade1 < densidade2) ? (printf("Vencedor: %s\n", nomeCidade1), vitorias_carta1++) : (densidade2 < densidade1) ? (printf("Vencedor: %s\n", nomeCidade2), vitorias_carta2++)
                                                                                                                               : printf("Empate!\n");
            break;
        case 6:
            printf("%s: %.2f vs %.2f\n", nomeAtributo(atributo), pibPerCapita1, pibPerCapita2);
            (pibPerCapita1 > pibPerCapita2) ? (printf("Vencedor: %s\n", nomeCidade1), vitorias_carta1++) : (pibPerCapita2 > pibPerCapita1) ? (printf("Vencedor: %s\n", nomeCidade2), vitorias_carta2++)
                                                                                                                                           : printf("Empate!\n");
            break;
        case 7:
            printf("%s: %.2f vs %.2f\n", nomeAtributo(atributo), superPoder1, superPoder2);
            (superPoder1 > superPoder2) ? (printf("Vencedor: %s\n", nomeCidade1), vitorias_carta1++) : (superPoder2 > superPoder1) ? (printf("Vencedor: %s\n", nomeCidade2), vitorias_carta2++)
                                                                                                                                   : printf("Empate!\n");
            break;
        }
    }

    // Resultado final
    if (vitorias_carta1 == 2)
        printf("\n🏆 Vencedor final: %s!\n", nomeCidade1);
    else if (vitorias_carta2 == 2)
        printf("\n🏆 Vencedor final: %s!\n", nomeCidade2);
    else
        printf("\n⚖️ Empate na rodada!\n");

    return 0;
}
