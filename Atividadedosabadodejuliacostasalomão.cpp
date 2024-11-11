#include <stdio.h>
#include <string.h>
#define MAX_ALUNOS 10


char nomes[MAX_ALUNOS][50];
float notas1[MAX_ALUNOS];
float notas2[MAX_ALUNOS];
int totalAlunos = 0;


void adicionarAluno() {
    if (totalAlunos >= MAX_ALUNOS) {
        printf("Limite de alunos atingido!\n");
        return;
    }
   
    printf("Digite o nome do aluno: ");
    scanf(" %[^\n]s", nomes[totalAlunos]);

    printf("Digite a primeira nota: ");
    scanf("%f", &notas1[totalAlunos]);

    printf("Digite a segunda nota: ");
    scanf("%f", &notas2[totalAlunos]);

    totalAlunos++;
    printf("Aluno adicionado com sucesso!\n");
}


float calcularMedia(int index) {
    return (notas1[index] + notas2[index]) / 2.0;
}


void exibirAlunos() {
    if (totalAlunos == 0) {
        printf("Nenhum aluno cadastrado.\n");
        return;
    }

    for (int i = 0; i < totalAlunos; i++) {
        printf("Aluno: %s\n", nomes[i]);
        printf("Nota 1: %.2f, Nota 2: %.2f, Média: %.2f\n", notas1[i], notas2[i], calcularMedia(i));
    }
}


void alunoMaiorMedia() {
    if (totalAlunos == 0) {
        printf("Nenhum aluno cadastrado.\n");
        return;
    }

    int indexMaior = 0;
    float maiorMedia = calcularMedia(0);

    for (int i = 1; i < totalAlunos; i++) {
        float mediaAtual = calcularMedia(i);
        if (mediaAtual > maiorMedia) {
            maiorMedia = mediaAtual;
            indexMaior = i;
        }
    }

    printf("Aluno com a maior média:\n");
    printf("Nome: %s\n", nomes[indexMaior]);
    printf("Nota 1: %.2f, Nota 2: %.2f, Média: %.2f\n", notas1[indexMaior], notas2[indexMaior], maiorMedia);
}


int main() {
    int opcao;

    do {
        printf("\nSistema de Gerenciamento de Alunos\n");
        printf("1. Adicionar aluno e notas\n");
        printf("2. Calcular e exibir a média de cada aluno\n");
        printf("3. Exibir todos os alunos\n");
        printf("4. Exibir o aluno com maior média\n");
        printf("5. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                adicionarAluno();
                break;
            case 2:
                exibirAlunos();
                break;
            case 3:
                exibirAlunos();
                break;
            case 4:
                alunoMaiorMedia();
                break;
            case 5:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 5);

    return 0;
}


