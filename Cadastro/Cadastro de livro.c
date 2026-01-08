#include <stdio.h>
#include <stdlib.h>
#include <string.h> // Para strcspn()

// ---- Constantes Globais ----
#define MAX_LIVROS 50
#define TAM_STRING 100

// --- Definição da Estrutura (Struct) ---
struct Livro {
    char nome[TAM_STRING];
    char autor[TAM_STRING];
    char editora[TAM_STRING];
    int edição; 
};

// --- Função para limpar o buffer da entrada ---
void limparBufferEntrada() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
} 

// --- Função Principal (main) ---
int main() {
    struct Livro biblioteca[MAX_LIVROS];
    int totalLivros = 0;
    int opção;

    // --- Laço Principal do Menu ---
    do {

        // Exibe o menu opções.
        printf("===================================\n");
        printf("   BIBLIOTECA - PARTE 1\n");
        printf("===================================\n");
        printf("1 - Cadastrar novo livro\n");
        printf("2 - Excluir livro\n");
        printf("3 - Listar todos os livros\n");
        printf("0 - Sair\n");
        printf("-----------------------------------\n");
        printf("Escolha uma opção: ");

        // Lê a opção do usuário.
        scanf("%d", &opção);
        limparBufferEntrada(); //limpar o '\n' deixado pelo scanf.
        
        // --- Processamento da Opção --- 
        switch (opção)
        {
        case 1: // CADASTRO DE LIVRO
            printf("--- Cadastro de Novo Livro ---\n\n");

            if (totalLivros < MAX_LIVROS) {
                printf("Digite o nome do livro: ");
                fgets(biblioteca[totalLivros].nome, TAM_STRING, stdin);

                printf("Digite o nome do autor: ");
                fgets(biblioteca[totalLivros].autor, TAM_STRING, stdin);

                printf("Digite o nome do editora: ");
                fgets(biblioteca[totalLivros].editora, TAM_STRING, stdin);

                biblioteca[totalLivros].nome[strcspn(biblioteca[totalLivros].nome, "\n")] = '\0';
                biblioteca[totalLivros].autor[strcspn(biblioteca[totalLivros].autor, "\n")] = '\0';
                biblioteca[totalLivros].editora[strcspn(biblioteca[totalLivros].editora, "\n")] = '\0';
                
                printf("Digite a edição: ");
                scanf("%d", &biblioteca[totalLivros].edição);
                limparBufferEntrada();
                
                totalLivros++; 
                // totalLivros = totalLivros +1;
                printf("\nLivro cadastrado com sucesso!\n");
             } else {
                printf("Biblioteca cheia! Não é possível cadastrar mais livros. \n");
             }

                printf("\nPressione Enter para Continuar...");
                getchar(); // Pausa para o usuário ler a mensagem antes de voltar ao menu.
                break;

            case 2: // EXCLUSÃO DE LIVRO
                printf("--- Exclusão de Livro ---\n\n");

                if (totalLivros == 0) {
                 printf("Nenhum livro cadastrado para excluir.\n");
                    } else {
                // Mostra a lista de livros com índice
                    for (int i = 0; i < totalLivros; i++) {
                     printf("%d - %s (Autor: %s)\n", i + 1, biblioteca[i].nome, biblioteca[i].autor);
        }

                int indice;
                printf("\nDigite o número do livro que deseja excluir: ");
                scanf("%d", &indice);
                limparBufferEntrada();

              if (indice < 1 || indice > totalLivros) {
                 printf("\nNúmero inválido! Nenhum livro foi excluído.\n");
                    } else {

                    // Ajusta índice para base 0
            indice--;

            // "Shift" dos elementos para preencher o espaço do livro removido
            for (int i = indice; i < totalLivros - 1; i++) {
                biblioteca[i] = biblioteca[i + 1];
            }

            totalLivros--; // Atualiza quantidade
            printf("\nLivro excluído com sucesso!\n");
        }
    }
                printf("\nPressione Enter para continuar...");
                getchar();
                break;


                case 3: // LISTAGEM DE LIVROS EM ORDEM ALFABÉTICA
                printf("--- Lista de Livros Cadastrados (Ordenados) ---\n\n");

                if (totalLivros == 0) {
                printf("Nenhum livro cadastrado ainda.\n");
                } else {
            
                    // Ordenação simples (Bubble Sort)
            for (int i = 0; i < totalLivros - 1; i++) {
            for (int j = i + 1; j < totalLivros; j++) {
                if (strcmp(biblioteca[i].nome, biblioteca[j].nome) > 0) {
            
                    // Troca os structs de posição
                    struct Livro temp = biblioteca[i];
                    biblioteca[i] = biblioteca[j];
                    biblioteca[j] = temp;
                }
            }
        }
                    // Exibe os livros já ordenados
            for (int i = 0; i < totalLivros; i++) {
                printf("----------------------------------\n");
                printf("LIVRO %d\n", i + 1);
                printf("Nome: %s\n", biblioteca[i].nome);
                printf("Autor: %s\n", biblioteca[i].autor);
                printf("Editora: %s\n", biblioteca[i].editora);
                printf("Edição: %d\n", biblioteca[i].edição); 
        }
                printf("----------------------------------\n");
    }

                printf("\nPressione Enter para continuar...");
                getchar();
                break;

            case 0: // SAIR
                printf("\nSaindo do sistema...\n");
                break;
             
            default: // OPÇÃO INVÁLIDA
                printf("\n Opção inválida! Tente novamente. \n");
                printf("\nPressione Enter para continuar...");
                getchar();
                break;
        }
    }while (opção != 0);

    return 0; // Fim do programa.
    
}