#include <stdio.h>


int main() { 
    
// nessa primeira parte defini as variáveis e os tipos de dados.
// coloquei os números 1 e 2 para diferencias as cidades, assim dando mais clareza de qual cidade estou programando.
int população1, população2, turísticos1, turísticos2;
float area1, area2, pib1, pib2;
char cidade1[20], cidade2[20], codigo1[20], codigo2[20];
char estado1, estado2;

// comecei solicitando a entrada dos dados da primeira cidade.


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

// aqui eu programei pra imprimir os dados da primeira cidade.

printf("CARTA 1: \n");
printf("ESTADO: %c\n", estado1);
printf("CÓDIGO: %s\n", codigo1);
printf("NOME DA CIDADE: %s\n", cidade1);
printf("POPULAÇÃO: %d\n", população1);
printf("ÁREA: %f km²\n", area1);
printf("PIB: %f bilhões de reais\n", pib1);
printf("Número de pontos turísticos: %d\n", turísticos1);

// e aqui eu repeti o mesmo processo que fiz na primeira cidade.

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
printf("NÚMERO DE PONTOS TURÍSTICOS: %d\n", turísticos2);

return 0;
}
