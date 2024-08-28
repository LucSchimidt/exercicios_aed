#include <stdio.h>

//!Faça uma função que modifica um vetor passado por referência, transformando os números divisíveis por 3 em 0.

int verificaDivisor(int divisor);
float modificaVetor(int *v, int tam, int *resposta);

int main() {
    int o;
    int resposta[4];
    int v[4] = {3, 6, 10, 15};

    printf("Vetor inicial:\n");
    printf("[");
    for (int i = 0; i < 4; i++){
        printf("%d ", v[i]);
    }
    printf("]");

    modificaVetor(v, 4, resposta);
    printf("\n\n");

    printf("Resposta:\n");
    printf("[");
    for (int i = 0; i < 4; i++){
        printf("%d ", resposta[i]);
    }
    printf("]");


    scanf("\n\n aperte qualquer coisa para continuar...", o);

    return 1;
}

int verificaDivisor(int divisor) {
    if(divisor%3 == 0) {
        return 1;
    }
    else {
        return 0;
    }
}


float modificaVetor(int *v, int tam, int *resposta) {
    for (int i = 0; i < tam; i++){
        if(verificaDivisor(v[i]) == 1) {
            resposta[i] = 0;
        } else {
            resposta[i] = v[i];
        }
    }
}
