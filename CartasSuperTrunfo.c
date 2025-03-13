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
    char estadoUm[2];  //  estado carta 1
    float areaEmKmUm; // área em km² carta 1
    float pibUm;  // PIB da carta 1




        //carta numero 2
    int numeroDePontosTuristicosDois; // pontos turísticos carta 2
    int populacaoDois;  // População carta 2
    char codigoDaCartaDois[5]; // código da carta 2
    char nomeDaCidadeDois[20]; // nome da cidade carta 2
    char estadoDois[2];  //  estado carta 2
    float areaEmKmDois ; // área em km² carta 2
    float pibDois ;  // PIB da carta 2
    


    
     // solicitando dados da carta 1
    printf(" \nInsira os dados da carta N°:1 !! Sem pontos ou simbolos\n"); // aviso para não quebrar o codigo, deve evitar o ponto ou simbolos.

    printf("\nInsira o Código da carta: "); // solicita um codigo para a carta 1
    scanf("%s",codigoDaCartaUm); // entrada de dado do usuario, codigo da carta 1
    
    printf("Estado: ");   // solicita um estado (sigla) para a carta 1
    scanf("%s", estadoUm); // entrada de dado do usuario, o estado da carta 1

    printf("Insira a Cidade:"); // solicita uma cidade para a carta 1
    scanf("%s",nomeDaCidadeUm); // entrada de dado do usuario, nome da cidade da carta 1

    printf("Insira a Área em (KM²): ");  // solicita uma are em KM² para a carta 1
    scanf("%f", &areaEmKmUm); // entrada de dado do usuario, area em KM² da carta 1

    printf("Insira População total: "); // solicita o quantidade da população para a carta 1
    scanf("%d", &populacaoUm); // entrada de dado do usuario, população da carta 1

    printf("Insira o Número de pontos turísticos: "); // solicita o numero de pontos turisticos para a carta 1
    scanf("%d", &numeroDePontosTuristicosUm); // entrada de dado do usuario, pontos turisticos da carta 1

    printf("Insira o PIB da cidade: "); // solicita o pib da cidade para a carta 1
    scanf("%f", &pibUm); // entrada de dado do usuario, pib da cidade da carta 1


    // solicitando dados da carta 2
    printf(" \nInsira os dados da carta N°:2 !! Sem pontos ou simbolos \n"); // aviso para não quebrar o codigo, deve evitar o ponto ou simbolos.

    printf("\nInsira o Código da carta: "); // solicita um codigo para a carta 2
    scanf("%s",codigoDaCartaDois); // entrada de dado do usuario, codigo da carta 2
    
    printf("Estado : ");   // solicita um estado (sigla) para a carta 2
    scanf("%s", estadoDois); // entrada de dado do usuario, o estado da carta 2

    printf("Insira a Cidade: "); // solicita uma cidade para a carta 2
    scanf("%s",nomeDaCidadeDois); // entrada de dado do usuario, nome da cidade da carta 2

    printf("Insira a Área em (KM²): ");  // solicita uma are em KM² para a carta 2
    scanf("%f", &areaEmKmDois); // entrada de dado do usuario, area em KM² da carta 2

    printf("Insira População total: "); // solicita o quantidade da população para a carta 2
    scanf("%d", &populacaoDois); // entrada de dado do usuario, população da carta 2

    printf("Insira o Número de pontos turísticos: "); // solicita o numero de pontos turisticos para a carta 2
    scanf("%d", &numeroDePontosTuristicosDois); // entrada de dado do usuario, pontos turisticos da carta 2

    printf("Insira o PIB da cidade: "); // solicita o pib da cidade para a carta 2
    scanf("%f", &pibDois); // entrada de dado do usuario, pib da cidade da carta 2


    


    //exibindo dados da carta 1
    printf("\nCódigo da carta N°1: %s\n", codigoDaCartaUm); // exibe código da carta 1
    printf("Estado: %s\n", estadoUm); // exibe o estado da carta 1
    printf("Cidade: %s\n", nomeDaCidadeUm); // exibe a cidade da carta 1
    printf("Área: %.2f Km² \n", areaEmKmUm); // exibe a area em km² da carta 1
    printf("População total: %d\n", populacaoUm); // exibe a população da carta 1
    printf("Número de pontos turísticos: %d\n", numeroDePontosTuristicosUm); // exibe o numero de pontos tuisticos da carta 1
    printf("PIB: %.2f Bilhões de reais \n", pibUm); // exibe o pib da carta 1.

    //exibindo dados da carta 2
    printf("\nCódigo da carta N°2: %s\n", codigoDaCartaDois); // exibe código da carta 2
    printf("Estado: %s\n", estadoDois); // exibe o estado da carta 2
    printf("Cidade: %s\n", nomeDaCidadeDois); // exibe a cidade da carta 2
    printf("Área: %.2f Km² \n", areaEmKmDois); // exibe a area em km² da carta 2
    printf("População total: %d\n", populacaoDois); // exibe a população da carta 2
    printf("Número de pontos turísticos: %d\n", numeroDePontosTuristicosDois); // exibe o numero de pontos tuisticos da carta 2
    printf("PIB: %.2f Bilhões de reais \n", pibDois); // exibe o pib da carta 2. 

    return 0;

}
