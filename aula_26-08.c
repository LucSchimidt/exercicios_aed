#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//!Esse programa cria um vetor através de ponteiros:

typedef struct ponto {
    float coord_x, coord_y;
} Ponto;

Ponto *alocaVetor(int tam);
void registraPonto(Ponto *p);
float calculaLado(Ponto a, Ponto b);
int verificaTipoTriangulo(Ponto *p);


int main() 
{
    Ponto *v;
    int resultado;

    v = alocaVetor(3);

    for(int i = 0; i < 3; i++) {
        registraPonto(&v[i]); //?Passando um endereço de v[i], pois registroPonto() espera um ponteiro;
        printf("O valor do ponto %d é x:%f, y:%f", i, v[i].coord_x, v[i].coord_y);
    }

    resultado = verificaTipoTriangulo(v);

    switch(resultado) {
        case 1: printf("\nIsoceles");
            break;
        case 2: printf("\nEquilatero");
            break;
        case 3: printf("\nEscaleno");
            break;
    }

    free(v);

    return 1;

}


Ponto *alocaVetor(int tam)
{
    Ponto *v;
    v = (Ponto *) malloc(sizeof(Ponto)*tam); //?Malloc vai reservar aproximadamente 10 Bytes

    if(v == NULL) {
        printf("Problema na alocacao");
        exit(0);
    }

    return v;
}

void registraPonto(Ponto *p) 
{
    printf("Digite as coordenadas x e y do ponto:\n");
    scanf("%f %f", &p->coord_x, &p->coord_y);
}


float calculaLado(Ponto a, Ponto b) 
{
    return sqrt(pow((a.coord_x - b.coord_x), 2) + pow((a.coord_y - b.coord_y),2));
}


int verificaTipoTriangulo(Ponto *p) 
{
    float lado1 = calculaLado(p[0], p[1]);
    float lado2 = calculaLado(p[0], p[2]);
    float lado3 = calculaLado(p[1], p[2]);

    if(lado1 == lado2 && lado1 == lado3) 
    {
        return 2;
    }
    else if(lado1 == lado2 || lado1 == lado3 || lado2 == lado3) 
    {
        return 1;
    }
    else
    {
        return 3;
    }
}