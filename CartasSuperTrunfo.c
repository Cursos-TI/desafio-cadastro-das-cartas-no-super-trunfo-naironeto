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
    float super_poder1; // Adição do nível mestre

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
    float super_poder2; // Adição do nível mestre

    
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

    // Cálculos das variaveis derivadas (e do super poder no nível mestre).
    densidade1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;
    densidade2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;
    super_poder1 = populacao1 + pib1 + area1 + pib_per_capita1 + pontosTuristicos1 + (1/densidade1);
    super_poder2 = populacao2 + pib2 + area2 + pib_per_capita2 + pontosTuristicos2 + (1/densidade2);
    
    
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

    // Comparação das cartas
    /* Nas minhas pesquisas por fora, acabei vendo que eu posso
    comparar os dados usando o operador ternário, então optei por 
    essa ferramenta. */
    int resultado_populacao = populacao1 > populacao2 ? 1 : 0;
    float resultado_area = area1 > area2 ? 1 : 0; 
    float resultado_pib = pib1 > pib2 ? 1 : 0;
    int resultado_pontosTuristicos = pontosTuristicos1 > pontosTuristicos2 ? 1 : 0;
    float resultado_densidade = densidade1 > densidade2 ? 1 : 0;
    float resultado_pib_per_capita = pib_per_capita1 > pib_per_capita2 ? 1 : 0;
    float resultado_super_poder = super_poder1 > super_poder2 ? 1 : 0; 

    printf("\n--- Comparação das cartas ---\n");
    printf("População A é maior do que B? %d\n", resultado_populacao);
    printf("Área A é maior do que B? %f\n", resultado_area);
    printf("PIB A é maior do que B? %f\n", resultado_pib);
    printf("Tem mais pontos turísticos em A do que em B? %d\n", resultado_pontosTuristicos);
    printf("Há mais densidade populacional em A do que em B? %f\n", resultado_densidade);
    printf("O PIB per capita em A é maior que em B? %f\n", resultado_pib_per_capita);
    printf("Super poder: A é maior que B? %f\n", resultado_super_poder);
    

    return 0;
}
