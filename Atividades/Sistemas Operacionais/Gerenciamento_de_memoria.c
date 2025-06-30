#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    size_t tamanho = 100 * 1024 * 1024;
    char *buffer = malloc(tamanho);

    if (buffer == NULL) {
        perror("Erro ao alocar memoria");
        return 1;
    }
    for (size_t i = 0; i < tamanho; i++) {
        buffer[i] = i % 256;
    }

    printf("Memoria alocada e preenchida. Pressione Enter para liberar.");
    getchar();

    free(buffer);
    return 0;
}