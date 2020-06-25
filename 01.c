// Dado um vetor de números inteiros ```v``` de tamanho ```m``` e um número ```k```, 
// retorne verdadeiro se a soma de qualquer par de números em ```v``` for igual a ```k```.
// Exemplo: dado ```v = [10, 15, 3, 7]``` e ```k = 17```, a saída deve ser ```true```, pois 10 + 7 é 17.

#include <stdio.h>
#include <stdlib.h>

int main() {

    int *v, m, k, soma, i, j;
    int resultado=0; 

    printf("\nEntre o tamanho do vetor 'v': ");
    scanf("%d", &m);
    printf("Entre um valor para 'k': ");
    scanf("%d", &k);

    v = malloc(sizeof(int) * m); 
    for (i=0; i<m; i++) {
        printf("Entre um valor para a posição %d: ", i);
        scanf("%d", v + i);
    }

    printf("\nSeu vetor: [ ");
    for (i=0; i<m; i++) {
        printf("%d ", v[i]);
    }
    printf("]\n");

    for(i=0; i < m - 1; i++) {
        for (j = i + 1; j < m; j++) {
            soma = v[i] + v[j];
            resultado += soma == k;
            printf("%d\t+\t%d\t=\t%d\t%s\n", v[i], v[j], soma, soma == k ? "true" : "false");
        }
    }
    printf("\nResultado: %s\n", resultado ? "true" : "false");
    free(v);
    
    return 0;
}