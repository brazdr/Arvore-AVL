#include <stdio.h>
#include "AVL.h"


int main() {
    AVL minhaAVL = NULL;
    int opcao, elemento;


    do {
        printf("\nMenu:\n");
        printf("1 - Inserir um elemento\n");
        printf("2 - Buscar um elemento\n");
        printf("3 - Remover um elemento\n");
        printf("4 - Imprimir a AVL em ordem\n");
        printf("5 - Mostrar a quantidade de nos na AVL\n");
        printf("6 - Destruir a AVL\n");
        printf("7 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);


        switch (opcao) {
            case 1:
                printf("Digite o elemento que deseja inserir: ");
                scanf("%d", &elemento);
                if (insereElem(&minhaAVL, elemento)) {
                    printf("Elemento inserido com sucesso!\n");
                } else {
                    printf("Falha ao inserir o elemento.\n");
                }
                break;


            case 2:
                printf("Digite o elemento que deseja buscar: ");
                scanf("%d", &elemento);
                if (pesquisa(&minhaAVL, elemento)) {
                    printf("Elemento encontrado na AVL.\n");
                } else {
                    printf("Elemento nao encontrado na AVL.\n");
                }
                break;


            case 3:
                printf("Digite o elemento que deseja remover: ");
                scanf("%d", &elemento);
                if (removeElem(&minhaAVL, elemento)) {
                    printf("Elemento removido com sucesso!\n");
                } else {
                    printf("Elemento nao encontrado na AVL ou falha ao remover.\n");
                }
                break;


            case 4:
                imprime(&minhaAVL);
                break;


            case 5:
                printf("Quantidade de nos na AVL: %d\n", altura(minhaAVL));
                break;


            case 6:
                destroiAVL(&minhaAVL);
                printf("AVL destruida com sucesso!\n");
                break;


            case 7:
                printf("Saindo do programa. Ate mais!\n");
                destroiAVL(&minhaAVL);
                break;


            default:
                printf("Opcao invalida. Tente novamente.\n");
        }


    } while (opcao != 7);


    return 0;
}
