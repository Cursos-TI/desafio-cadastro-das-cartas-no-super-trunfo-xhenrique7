#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    //DADOS CARTA 1 
 char estado1;
 char codigo1[4];
 char nomecidade1[100];
 int pop1;
 float area1;
 float pib1;
 int numeros1;

//DADOS CARTA 2

char estado3;
char codigo2[4];
char nomecidade2[100];
int pop2;
float area2;
float pib2;
int numeros2; 

// ENTRADA DE DADOS

printf("LETRA DA CARTA 1 : \n");
printf("Estado (A-H): ");
scanf(" %c", &estado1);

printf("Código carta (EX A04): \n");
scanf("%s", codigo1);

printf("Nome cidade: \n");
scanf("%s",nomecidade1);

printf("População: ");
scanf("%d", &pop1);

printf("Área em (KM²): ");
scanf("%f", &area1);

printf("PIB: ");
scanf("%f", &pib1);

printf("Número de Pontos Turísticos: ");
scanf("%d", &numeros1);

// Entrada de dados carta2

printf("LETRA DA CARTA 2 : \n");
printf("Estado (A-H): ");
scanf(" %c",&estado3);

printf("Código carta (EX A04): \n");
scanf("%s", codigo2);

printf("Nome cidade: \n");
scanf("%s",nomecidade2);

printf("População: ");
scanf("%d", &pop2);

printf("Área em (KM²) :   ");
scanf("%f", &area2);

printf("PIB: ");
scanf("%f", &pib2);

printf("Número de Pontos Turísticos: ");
scanf("%d", &numeros2);

// SAÍDA DE DADOS

printf("\n ");
printf("Carta 1 \n");
printf("Estado : %c\n ", estado1);
printf("Código : %s\n ", codigo1);
printf("Cidade :%s\n", nomecidade1);
printf("população: %d\n ", pop1);
printf("Area : %.2f\n", area1);
printf("PIB: %.2f\n", pib1);
printf("Pontos turísticos: %d\n", numeros1);

printf("\n ");
printf("Carta 2 \n");
printf("Estado : %c\n ", estado3);
printf("Código : %s\n ", codigo2);
printf("Cidade :%s\n", nomecidade2);
printf("população : %d\n ", pop2);
printf("Area : %.2f\n", area2);
printf("PIB: %.2f\n", pib2);
printf("Pontos turísticos: %d\n", numeros2);

    return 0;
}
