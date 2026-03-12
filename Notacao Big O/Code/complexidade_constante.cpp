#include <stdio.h>
#include<time.h>

//FUNCAO COMPLEXIDADE O(1) - CONSTANTE
void funcao_constante(int indice, int array[]) {
    int valor = array[indice];
    printf("O valor no index %d é: %d\n", indice, valor);
}

int main(){
    clock_t t;
    int pequeno[] = {10,20,30, 40, 50};
    int grande[1000000];
    for(int i=0;i<=10000; i++)
        grande[i] = i*2;

    printf("\n -------TESTING O(1)-------\n");

    t = clock();
    funcao_constante(2, pequeno);
    t = clock() - t;

    printf("Clock pequeno: %ld\n", t);
    t = clock();
    funcao_constante(5500, grande);
    t = clock() - t;
    printf("Clock grande: %ld\n", t);
    return 0;
}