#include <stdio.h>
#include <string.h>

// Estrutura para armazenar as informações das cidades
typedef struct {
    char nome[50];
    int população;
    float area;
    float PIB;
    int pontosTuristicos;
} Cidade;

int main () {
    Cidade Maraba, Parauapebas;
    int opcao;

    //Cadastro da primeira carta
    printf("Digite o nome da primeira carta");
    scanf(" %[^\n]", Maraba.nome);

    printf("Digite a população da cidade");
    scanf("%d", Maraba.população);

    printf("Digite a area da cidade");
    scanf("%f", Maraba.area);

    printf("Digite o PIB da cidade");
    scanf("%f", Maraba.PIB);

    printf("Digite a quantidade de Pontos Turísticos");
    scanf("%d", Maraba.pontosTuristicos);

    //Cadastro da segunda cidade
    printf("Digite o numero da segunda carta");
    scanf(" %[^\n]", Parauapebas.nome);

    printf("Digite a população da cidade");
    scanf("%d", Parauapebas.população);

    printf("Digite a area dacidade");
    scanf("%f", Parauapebas.area);

    printf("Digite o PIB da cidade");
    scanf("%f", Parauapebas.PIB);

    printf("Digite a quantidade de Pontos Turísticos");
    scanf("d", Parauapebas.pontosTuristicos);

    // Escolha do atributo para comparação
    printf("\nDigite o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - População\n");
    printf("3 - Area\n");
    printf("4 - PIB\n");
    printf("5 - Quantidade de Pontos Turísticos\n");
    scanf("%d", opcao);

    // Comparação das cartas com base no atributo escolhido
    printf("\nResultado da comparação:\n");
    switch (opcao) {
        case 1:
            if (Maraba.população > Parauapebas.população) 
                printf("A cidade vencedora é>s") 
    }      
    return 0;

}