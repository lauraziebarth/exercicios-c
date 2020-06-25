// Dado um vetor de números inteiros ```v```, 
// retorne um novo vetor de forma que cada elemento no índice ```i``` seja um produto de todos os números na matriz original, com exceção de ```i```.
// Exemplo: dado ```v = [3, 2, 1]```, a saída esperada é ```[2, 3, 6]```.

#include <stdlib.h>
#include <stdio.h>

int main() {

    int *v, *p, n, i, j, produto=1;

// construindo o primeiro vetor:
    printf("Informe o tamanho do vetor 'v': ");
    scanf("%d", &n);
    v = malloc(sizeof(int) * n);
    for(i=0; i<n; i++){
        printf("Informe o valor da posição %d: ", i);
        scanf("%d", v+i);
    }
    printf("Seu vetor: [ ");
    for(i=0; i<n; i++){
        printf("%d ", v[i]);
    } 
    printf("]\n");

// fazendo o produto:
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++)
            produto *= (i =! j) ? v[j] : 1;
        p[i] = produto;
        produto = 1;
    }
    printf("\n\nVetor resultante: [ ");
    for (i = 0; i < n; i++) {
        printf("%d ", p[i]);
    }
    printf("]\n");
    free(v);
    free(p);
    
    return 0;

}