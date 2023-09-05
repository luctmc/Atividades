#include <stdio.h>
#include <string.h>

//Nome: Lucas Timponi Mercadante Castro.

/* ENUNCIADO DA ATIVIDADE:
Crie um programa que deverá solicitar do usuário as informações de NOME e IDADE de dois alunos, após solicitadas as informações, 
o programa deverá sempre exibir as informações ordenadas da menor idade para a maior idade. O programa também deverá bloquear o processamento 
caso as idades fornecidas sejam iguais. */

struct Aluno {
    char nome[50];
    int idade;
};

int main() {
    struct Aluno aluno1, aluno2;

    // Solicita informações do primeiro aluno
    printf("Digite o nome do primeiro aluno: ");
    scanf("%s", aluno1.nome);
    printf("Digite a idade do primeiro aluno: ");
    scanf("%d", &aluno1.idade);

    // Solicita informações do segundo aluno
    printf("Digite o nome do segundo aluno: ");
    scanf("%s", aluno2.nome);
    printf("Digite a idade do segundo aluno: ");
    scanf("%d", &aluno2.idade);

    // Verifica se as idades são iguais
    if (aluno1.idade == aluno2.idade) {
        printf("As idades fornecidas são iguais. O programa será encerrado.\n");
        return 0;
    }

    // Ordena os alunos com base na idade
    struct Aluno alunoMaisNovo, alunoMaisVelho;
    if (aluno1.idade < aluno2.idade) {
        alunoMaisNovo = aluno1;
        alunoMaisVelho = aluno2;
    } else {
        alunoMaisNovo = aluno2;
        alunoMaisVelho = aluno1;
    }

    // Exibe as informações dos alunos ordenadas por idade
    printf("\nInformacoes dos alunos ordenadas por idade:\n");
    printf("Aluno mais novo:\n");
    printf("Nome: %s\n", alunoMaisNovo.nome);
    printf("Idade: %d\n", alunoMaisNovo.idade);
    printf("\nAluno mais velho:\n");
    printf("Nome: %s\n", alunoMaisVelho.nome);
    printf("Idade: %d\n", alunoMaisVelho.idade);

    return 0;
}
