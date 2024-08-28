#include <stdio.h>
#include <stdlib.h>

int fatorial(int j);

int main() {
    int resultado;

    resultado = fatorial(5);

    printf("Fatorial de 5 eh: %d", resultado);

    getchar();

    return 1;
}

int fatorial(int j){
    if(j == 1) {
        return 1;
    }

    return j * fatorial(j - 1);
}