#include <stdio.h>

// Desafio Super Trunfo - Países (Francisco Nairon)
// Tema 1 - Cadastro das Cartas


int main() {
    // Variáveis da primeira carta
    char estado1; 
    char cod_carta1[5]; //4 + o nulo.
    char cidade1[50]; //50 é um numero que sobra.
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1; //Adições do nível aventureiro
    float pib_per_capita1;

    // Variáveis da segunda carta
    // (copiei as variaveis da primeira carta e substitui o 1 pelo 2, pois o processo é o mesmo.) 
    char estado2;
    char cod_carta2 [5]; 
    char cidade2 [50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pib_per_capita2;

    
    // Coleta de dados e cadastro das Cartas:

    // Primeira carta: 
    printf("--- Dados da primeira carta ---\n"); 
    // O \n vai formatar o texto.
    printf("Digite o estado: ");
    scanf(" %c", &estado1); // %c é a atribuição char da variavel e o & fala pra procurar a variavel.

    printf("Digite o código da carta (Ex: A01): ");
    scanf("%s", cod_carta1); // %s = string (permite mais de um char) 

    printf("Digite o nome da cidade: ");
    scanf(" %49[^\n]", cidade1); //Fiz as mudanças que a IA sugeriu para aceitar nomes de cidades compostos, porém estou pesquisando sobre o fgets e parece ser algo mais seguro.

    printf("Digite a população de cidade: ");
    scanf("%d", &populacao1); // %d = Números inteiros 

    printf("Digite a área de cidade :");
    scanf("%f", &area1); // %f = float (decimais)

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);


    // Segunda carta: 
    printf("--- Dados da segunda carta ---\n"); 
    
    printf("Digite o estado: ");
    scanf(" %c", &estado2); 

    printf("Digite o código da carta (Ex: A01): ");
    scanf("%s", cod_carta2); 

    printf("Digite o nome da cidade: ");
    scanf(" %49[^\n]", cidade2);

    printf("Digite a população de cidade: ");
    scanf("%d", &populacao2);  

    printf("Digite a área de cidade :");
    scanf("%f", &area2); 

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos das variaveis derivadas
    densidade1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;
    densidade2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

    // Exibição dos Dados das Cartas:

    printf("\n--- Dados da primeira carta ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %s\n", cod_carta1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1); // o ".2" antes do "f" indica a precisão das casas decimais, nesse caso, duas.
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade populacional: %.2f habitantes/km²\n", densidade1);
    printf("PIB per capita: %.2f\n", pib_per_capita1);

    printf("\n--- Dados da segunda carta ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", cod_carta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional: %.2f habitantes/km²\n", densidade2);
    printf("PIB per capita: %.2f\n", pib_per_capita2);


    return 0;
}
