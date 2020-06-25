// Dado um vetor de números inteiros ```v```, encontre o primeiro inteiro positivo ausente no vetor. 
// Em outras palavras, deve ser retornado o menor inteiro positivo que não existe no vetor. 
// A matrix pode conter duplicados e números negativos também. 
// O algoritmo deve apresentar complexidade de tempo linear e de espaço constante 
// (pode desconsiderar o esforço para ordenação do vetor).
// Exemplo 1: dado ```v = [3, 4, -1, 1]```, a saída esperada é ```2```.
// Exemplo 2: dado ```v = [1, 2, 0]```, a saída esperada é ```3```.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *v, n, i, encontrado, p = 0;

    printf("\nEntre o tamanho do vetor 'v': ");
    scanf("%d", &n);
    v = malloc(sizeof(int) * n);
    for (i = 0; i < n; i++) {
        printf("Entre um valor para a posicao %d: ", i);
        scanf("%d", v + i);
    }
    printf("\n\nSeu vetor: [ ");
    for (i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("]\n");
    
    do {
        encontrado = 0;
        p++;
        for (i = 0; i < n; i++) {
            if (v[i] == p) {
                encontrado = 1;
                break;
            }
        }
    } while (encontrado);
    printf("O primeiro positivo que falta é: %d\n", p);
    free(v);
    return 0;
}

