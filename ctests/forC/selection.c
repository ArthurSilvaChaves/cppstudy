#include <stdio.h>

void selectionSort(int vetor[], int tamanho){
    int i, j, menor, temp;

    for(i = 0; i < tamanho;i++){
        menor = i;

        for(j = i + 1;j < tamanho; j++) {
            if (vetor[j] < vetor[menor]) {
                menor = j;
            }
        }

        temp = vetor[i];
        vetor[i] = vetor[menor];
        vetor[menor] = temp;
    }
}

int main(){
    int vetor[] = {64, 25, 12, 22, 11};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    printf("valor desordenado:\n");
    for (int i = 0; i < tamanho;i++) {
        printf("%d ",vetor[i]);
    }

    printf("\n");

    selectionSort(vetor, tamanho);

    printf("vetor ordenado:\n");
    for (int i = 0;i < tamanho; i++) {
        printf("%d ",vetor[i]);
    }

    printf("\n");

    return 0;
}