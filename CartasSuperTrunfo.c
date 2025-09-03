#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

int população1, população2, turísticos1, turísticos2;
float area1, area2, pib1, pib2;
char cidade1[20], cidade2[20], codigo1[20], codigo2[20];
char estado1, estado2;

printf("Digite uma letra de 'A' a 'H': ");
scanf(" %c", &estado1);

printf("Digite o código da carta: ");
scanf("%s", codigo1);

printf("Digite o nome da cidade: ");
scanf("%s", cidade1);

printf("Digite a população da cidade: ");
scanf("%d", &população1);

printf("Digite a área da cidade: ");
scanf("%f", &area1);

printf("Digite o PIB da cidade: ");
scanf("%f", &pib1);

printf("Digite o número de pontos turísticos: ");
scanf("%d", &turísticos1);

printf("CARTA 1: \n");
printf("ESTADO: %c\n", estado1);
printf("CÓDIGO: %s\n", codigo1);
printf("NOME DA CIDADE: %s\n", cidade1);
printf("POPULAÇÃO: %d\n", população1);
printf("ÁREA: %f km²\n", area1);
printf("PIB: %f bilhões de reais\n", pib1);
printf("Número de pontos turísticos: %d", turísticos1);

printf("Digite uma letra de 'A' a 'H': ");
scanf(" %c", &estado2);

printf("Digite o código da carta: ");
scanf("%s", codigo2);

printf ("Digite o nome da cidade: ");
scanf("%s", cidade2);

printf(" Digite a população da cidade: ");
scanf ("%d", &população2);

printf("Digite a área da cidade: "),
scanf("%f", &area2);

printf("Digite o PIB da cidade: ");
scanf("%f", &pib2);

printf("Digite o número de pontos turísticos: ");
scanf("%d", &turísticos2);

printf("CARTA 2: \n");
printf("ESTADO: %c\n", estado2);
printf("CÓDIGO: %s\n", codigo2);
printf("NOME DA CIDADE: %s\n", cidade2);
printf("POPULAÇÃO: %d\n", população2);
printf("ÁREA: %f km²\n", area2);
printf("PIB: %f bilhões de reais\n", pib2);
printf("NÚMERO DE PONTOS TURÍSTICOS: %d", turísticos2);









    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

 return 0;
}
