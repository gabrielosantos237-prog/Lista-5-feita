#include <stdio.h>

int main() {
    int nota, continuar;
    int quantidade = 0, soma = 0;
    float media;

    do {
        printf("Digite uma nota (1 a 5): ");
        scanf("%d", &nota);

        if (nota >= 1 && nota <= 5) {
            soma += nota;
            quantidade++;
        }
        else {
            printf("Nota invalida.\n");
        }

        printf("Deseja continuar? (1 = Sim, 0 = Nao): ");
        scanf("%d", &continuar);

    } while (continuar == 1);

    if (quantidade > 0) {
        media = (float)soma / quantidade;
        printf("Media: %.2f\n", media);
    }
    else {
        printf("Nenhuma nota valida registrada.\n");
    }

    return 0;
}