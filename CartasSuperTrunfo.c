#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    //carta numero 1
int numeroDePontosTuristicosUm; // pontos turísticos carta 1
int populacaoUm;  // População carta 1
char codigoDaCartaUm[5]; // código da carta 1
char nomeDaCidadeUm[15]; // nome da cidade carta 1
char estadoUm[2];  // sigla do estado carta 1
float areaEmKmUm; // área em km² carta 1
float pibUm;  // PIB da carta 1


   //carta numero 2
int numeroDePontosTuristicosDois; // pontos turísticos carta 2
int populacaoDois;  // População carta 2
char codigoDaCartaDois[5]; // código da carta 2
char nomeDaCidadeDois[20]; // nome da cidade carta 2
char estadoDois[2];  // sigla do estado carta 2
float areaEmKmDois ; // área em km² carta 2
float pibDois ;  // PIB da carta 2



// solicitando dados da carta 1
printf(" \nInsira os dados da carta N°:1 !! Sem pontos ou simbolos\n"); // aviso para não quebrar o codigo, deve evitar o ponto ou simbolos.

printf("\nInsira o Código da carta: "); // solicita o codigo da carta 
scanf("%s",codigoDaCartaUm); // entrada do usuario

printf("Insira o Estado: ");   // solicita um estado 
scanf("%s", estadoUm); // entrada de dado do usuario

printf("Insira a Cidade:"); // solicita uma cidade 
scanf("%s",nomeDaCidadeUm); // entrada de dado do usuario

printf("Insira a Área em (KM²): ");  // solicita uma are em KM² 
scanf("%f", &areaEmKmUm); // entrada de dado do usuario

printf("Insira População total: "); // solicita o quantidade da população 
scanf("%d", &populacaoUm); // entrada de dado do usuario

printf("Insira o Número de pontos turísticos: "); // solicita o numero de pontos turisticos 
scanf("%d", &numeroDePontosTuristicosUm); // entrada de dado do usuario

printf("Insira o PIB da cidade: "); // solicita o pib da cidade 
scanf("%f", &pibUm); // entrada de dado do usuario


// solicitando dados da carta 2
printf(" \nInsira os dados da carta N°:2 !! Sem pontos ou simbolos \n"); // aviso para não quebrar o codigo, deve evitar o ponto ou simbolos.

printf("\nInsira o Código da carta: "); // solicita um codigo para a carta 
scanf("%s",codigoDaCartaDois); // entrada de dado do usuario

printf("Insira o Estado: ");   // solicita um estado 
scanf("%s", estadoDois); // entrada de dado do usuario

printf("Insira a Cidade: "); // solicita uma cidade 
scanf("%s",nomeDaCidadeDois); // entrada de dado do usuario

printf("Insira a Área em (KM²): ");  // solicita uma are em KM² 
scanf("%f", &areaEmKmDois); // entrada de dado do usuario

printf("Insira População total: "); // solicita o quantidade da população 
scanf("%d", &populacaoDois); // entrada de dado do usuario

printf("Insira o Número de pontos turísticos: "); // solicita o numero de pontos turisticos 
scanf("%d", &numeroDePontosTuristicosDois); // entrada de dado do usuario

printf("Insira o PIB da cidade: "); // solicita o pib da cidade 
scanf("%f", &pibDois); // entrada de dado do usuario


//calcular pib per capita
float PibPerCapitaUm = (pibUm / populacaoUm ); //carta 1
float PibPerCapitaDois = (pibDois / populacaoDois); //carta 2

//calcular a Densidade Populacional 
float DensidadePopulacionalUm = (populacaoUm / areaEmKmUm); //carta 1
float DensidadePopulacionalDois = ( populacaoDois / areaEmKmDois); //carta 2


//exibindo dados da carta 1
printf("\nCódigo da carta N°1: %s\n", codigoDaCartaUm); // exibe código 
printf("Estado: %s\n", estadoUm); // exibe o estado 
printf("Cidade: %s\n", nomeDaCidadeUm); // exibe a cidade 
printf("Área: %.2f Km² \n", areaEmKmUm); // exibe a area em km² 
printf("População total: %d\n", populacaoUm); // exibe a população
printf("Número de pontos turísticos: %d\n", numeroDePontosTuristicosUm); // exibe o numero de pontos tuisticos
printf("PIB: %.2f Bilhões de reais \n", pibUm); // exibe o pib 
printf("Densidade Populacional: %.2f hab/km² \n",DensidadePopulacionalUm); //exibe a densidade populacional de habitantes por Km²
printf("PIB per Capita: %.2f reais \n",PibPerCapitaUm ); //exibe o pib per capita



//exibindo dados da carta 2
printf("\nCódigo da carta N°2: %s\n", codigoDaCartaDois); // exibe código 
printf("Estado: %s\n", estadoDois); // exibe o estado 
printf("Cidade: %s\n", nomeDaCidadeDois); // exibe a cidade 
printf("Área: %.2f Km² \n", areaEmKmDois); // exibe a area em km²  
printf("População total: %d\n", populacaoDois); // exibe a população  
printf("Número de pontos turísticos: %d\n", numeroDePontosTuristicosDois); // exibe o numero de pontos tuisticos 
printf("PIB: %.2f Bilhões de reais \n", pibDois); // exibe o pib 
printf("Densidade Populacional: %.2f hab/km² \n",DensidadePopulacionalDois); //exibe a densidade populacional de habitantes por Km²
printf("PIB per Capita: %.2f reais \n",PibPerCapitaDois ); //exibe o pib per capita 

return 0;

}
