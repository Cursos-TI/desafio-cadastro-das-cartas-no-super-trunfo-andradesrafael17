#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    //Iniciamos a declaração de variáveis 
    char estado1, estado2; //declaramos os estados 1 e 2 para armazenamento simples das letras das respectivas cartas
    char codigo1[5], codigo2[5]; //vetores para armazenarmos os códigos (estado+numero da carta)
    char cidade1[50], cidade2[50]; //vetores que armazenam até 50 caracteres
    int populacao1,populacao2; //para números inteiros
    int pontos_turisticos1, pontos_turisticos2; //números inteiros
    float area1,area2; //números decimais
    float pib1, pib2; //números decimais

    //Aqui o usuário irá inserir as informações das cartas
    //printf para mostrar a mensagem que queremos exibir na tela
    //scanf para ler o caractere
    //& armazena o caractere na variável 
    printf ("Insira as informações da Carta 01:\n");
    printf ("Escolha uma letra de A a H para representar o estado da sua cidade.\n");
    printf ("Estado:");
    scanf ("%c",&estado1); //%c guarda um único caractere

    printf ("Escolha entre 01 e 04 para definir o número da carta.\n");
    printf ("Número:");
    scanf ("%2s",codigo1); //%2s guarda uma cadeia de string de 2 caracteres

    printf ("Insira o nome da primeira cidade.\n");
    printf ("Cidade:");
    getchar (); //Limpa o buffer do teclado para não armazenar o espaço do \n do buffer e inserir na fgets abaixo
    fgets (cidade1, 50, stdin); //salva a string com espaços até 49 caracteres. stdin lê a entrada no teclado

    printf ("Insira a população da cidade.\n");
    printf ("População:");
    scanf ("%d", &populacao1); //%d guarda um número inteiro no formato decimal

    printf ("Insira a Área da Cidade.\n");
    printf ("Área km²:");
    scanf ("%f",&area1); //%f guarda um número de ponto flutuante no formato padrão

    printf ("Insir o valor do Produto Interno Bruto (PIB) da cidade.\n");
    printf ("PIB:");
    scanf ("%f",&pib1); //%f guarda um número de ponto flutuante no formato padrão

    printf ("Insira o número de Pontos Turísticos que a cidade possui:\n");
    printf ("Pontos Turisticos:");
    scanf ("%d",&pontos_turisticos1); //%d guarda um número inteiro no formato decimal

    printf ("Mostrando os dados da carta:\n");
    printf ("Estado:%c\n",estado1);
    printf ("Código:%c%2s\n",estado1,codigo1);
    printf ("Nome da Cidade:%s\n",cidade1);
    printf ("População:%d\n",populacao1);
    printf ("Área:%.2f km²\n",area1);
    printf ("PIB:%.2f bilhões de reais\n",pib1);
    printf ("Pontos Turisticos:%d\n",pontos_turisticos1);

    //Repetiremos o processo para as informaçãoes da segunda carta apenas trocando as variáveis
    printf ("Insira as informações da Carta 02:\n");
    printf ("Escolha uma letra de A a H para representar o estado da sua cidade.\n");
    printf ("Estado:");
    getchar();
    scanf ("%c",&estado2);

    printf ("Escolha entre 01 e 04 para definir o número da carta.\n");
    printf ("Número:");
    scanf ("%2s",codigo2);

    printf ("Insira o nome da segunda cidade.\n");
    printf ("Cidade:");
    getchar ();
    fgets (cidade2, 50, stdin);

    printf ("Insira a população da cidade.\n");
    printf ("População:");
    scanf ("%d", &populacao2);

    printf ("Insira a Área da Cidade.\n");
    printf ("Área km²:");
    scanf ("%f",&area2);

    printf ("Insir o valor do Produto Interno Bruto (PIB) da cidade.\n");
    printf ("PIB:");
    scanf ("%f",&pib2);

    printf ("Insira o número de Pontos Turísticos que a cidade possui:\n");
    printf ("Pontos Turisticos:");
    scanf ("%d",&pontos_turisticos2);

    printf ("Mostrando os dados da carta:\n");
    printf ("Estado:%c\n",estado2);
    printf ("Código:%c%2s\n",estado2,codigo2);
    printf ("Nome da Cidade:%s\n",cidade2);
    printf ("População:%d\n",populacao2);
    printf ("Área:%.2f km²\n",area2);
    printf ("PIB:%.2f bilhões de reais\n",pib2);
    printf ("Pontos Turisticos:%d\n",pontos_turisticos2);


    return 0;
}
