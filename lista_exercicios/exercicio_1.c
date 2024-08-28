#include <stdio.h>

//!Implemente uma função que recebe um vetor de inteiros e encontra o maior e o menor valor dele. Desenvolva a função com a seguinte assinatura

float encontraMaiorMenor(float *v, int tam, float *menor);

int main() {
    int o;
    float maior, menor;
    float v[6] = {20.0, 50.0, 47.0, 83.0, 19.0, 34.0};

    maior = encontraMaiorMenor(v, 6, &menor);

    printf("Maior numero do vetor: %.2f \n", maior);
    printf("Menor numero do vetor: %.2f \n", menor);

    scanf("\n\n aperte qualquer coisa para continuar...", o);

    return 1;
}


float encontraMaiorMenor(float *v, int tam, float *menor) {
    float maior_num = 0.0;
    float menor_num = 100.0;

    for(int i = 0; i < tam; i++) {

        if(v[i] > maior_num) {
            maior_num = v[i];
        }

        if(v[i] < menor_num) {
            menor_num = v[i];
        }
    }

    *menor = menor_num;
    return maior_num;
}