#include <stdio.h>
#include <string.h>

// Função para limpar ENTER que sobra no buffer
void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main() {
    // Valor das variáveis da carta 1
    char estado1;
    char codigo_da_carta1[10];
    char nome_da_cidade1[50];
    int populacao1;
    float area1, pib1;
    int pontos_turisticos1;

    // valor das variáveis da carta 2
    char estado2;
    char codigo_da_carta2[10];
    char nome_da_cidade2[50];
    int populacao2;
    float area2, pib2;
    int pontos_turisticos2;

    // --- Carta 1 ---
    printf("Cadastro de cartas do Super Trunfo\n");
    printf("Insira os dados da carta 1\n");

    printf("Estado: ");
    scanf(" %c", &estado1);
    limparBuffer();

    printf("Código da carta: ");
    scanf("%s", codigo_da_carta1);
    limparBuffer();

    printf("Nome da cidade: ");
    fgets(nome_da_cidade1, sizeof(nome_da_cidade1), stdin);
    nome_da_cidade1[strcspn(nome_da_cidade1, "\n")] = 0;

    printf("População: ");
    scanf("%d", &populacao1);
    limparBuffer();

    printf("Área: ");
    scanf("%f", &area1);
    limparBuffer();

    printf("PIB: ");
    scanf("%f", &pib1);
    limparBuffer();

    printf("Pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);
    limparBuffer();

    // --- Carta 2 ---
    printf("\n Insira os dados da carta 2\n");

    printf("Estado: ");
    scanf(" %c", &estado2);
    limparBuffer();

    printf("Código da carta: ");
    scanf("%s", codigo_da_carta2);
    limparBuffer();

    printf("Nome da cidade: ");
    fgets(nome_da_cidade2, sizeof(nome_da_cidade2), stdin);
    nome_da_cidade2[strcspn(nome_da_cidade2, "\n")] = 0;

    printf("População: ");
    scanf("%d", &populacao2);
    limparBuffer();

    printf("Área: ");
    scanf("%f", &area2);
    limparBuffer();

    printf("PIB: ");
    scanf("%f", &pib2);
    limparBuffer();

    printf("Pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);
    limparBuffer();

    // --- impressão ---
    printf("\n --- Carta 1 ---\n");
    printf("Estado: %c\n Código: %s\n Cidade: %s\n População: %d\n Área: %.2f km²\n PIB: %.2f bilhões de reais\n Pontos turísticos: %d\n",
        estado1, codigo_da_carta1, nome_da_cidade1, populacao1, area1, pib1, pontos_turisticos1);

    printf("\n --- Carta 2 ---\n");
    printf("Estado: %c\n Código: %s\n Cidade: %s\n População: %d\n Área: %.2f km²\n PIB: %.2f bilhões de reais\n Pontos turísticos: %d\n",
        estado2, codigo_da_carta2, nome_da_cidade2, populacao2, area2, pib2, pontos_turisticos2);

    return 0;
}
