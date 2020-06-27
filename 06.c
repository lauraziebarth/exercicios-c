// Dado um vetor de inteiros ```v``` com tamanho ```n``` e ```k``` com intervalo 1 <= k <= n, 
// calcule os valores máximos para cada subvetor de comprimento ```k``` gerado a partir do vetor ```v```.
// * Exemplo 1: dado ```v = [10, 5, 2, 7, 8, 7]``` e ```k = 3```, a saída será ```[10, 7, 8, 8]```, visto que:
// * 10 = max(10, 5, 2)  |   * 7 = max(5, 2, 7)    | * 8 = max(2, 7, 8)    | * 8 = max(7, 8, 7) 


#include <stdio.h>
#include <stdlib.h>

int main() {

    int *v, n, k, i, j, *novo, comp1, comp2;

    printf("Entre com o tamanho do vetor 'v': ");
    scanf("%d", &n);
    if( n < 3) { 
        printf("O vetor deve ter no minímo 3 elementos\n");
        return 0;
    }
    printf("Entre com um valor para 'k': ");
    scanf("%d", &k);
    if(k < 1 || k > n) {
        printf("O valor de 'k' deve ser maior ou igual a um e menor do que o tamanho do vetor 'v'.\n");
        return 0;
    }

    v =  malloc(sizeof(int) * n);
    for(i=0; i<n; i++) {
        printf("Entre com os valor da posição %d do vetor: ", i);
        scanf("%d", v + i);
    }
    printf("Seu vetor: [ ");
    for(i=0; i<n; i++) {
        printf("%d ", v[i]);
    }
    printf(" ] \n");

    novo = malloc(sizeof(int) * k);
    for(i=0; i <= n-k; i++) {
        comp1 = 0;
        comp2 = 0;
        for(j=i+1; j < i+2; j++) {
            comp1 = v[i] > v[j] ? v[i] : v[j];
            comp2 = comp1 > v[j + 1] ? comp1 : v[j+1];
        }  
        printf("%d \t", comp2);
    }

    printf("\n");

    free(v);
    free(novo);

    return 0;
}