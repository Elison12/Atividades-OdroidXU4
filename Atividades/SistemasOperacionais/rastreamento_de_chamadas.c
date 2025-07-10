#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arquivo;

    arquivo = fopen("exemplo.txt", "w");
    if (arquivo == NULL) {
        perror("Erro ao abrir arquivo");
        exit(EXIT_FAILURE);
    }
    fprintf(arquivo, "Eh verdade sem mentira, certo, muito verdadeiro.\n");
    fclose(arquivo);
    
    arquivo = fopen("exemplo.txt", "r");
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        exit(EXIT_FAILURE);
    }
    char linha[100];
    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        printf("%s", linha);
    }
    fclose(arquivo);
    return 0;
}