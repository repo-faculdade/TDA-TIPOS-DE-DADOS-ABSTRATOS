#include <stdio.h>
#include<time.h>

// FUNCAO COMPLEXIDADE O(n) - LINEAR: O tempo cresce conforme o tamanho
void buscarElemento(int array[], int n, int target) {
    long soma = 0;
    for(int i = 0; i < n; i++) {
        if(array[i] == target) {
            printf("Elemento %d encontrado no índice %d\n", target, i);
            return;
        }
    }
    printf("Elemento %d não encontrado\n", target);
}

int main(){
    clock_t t;
    int n_pequeno = 10;
    int n_grande = 1000000;

    int pequeno[10] = {1,2,3,4,5,6,7,8,9,10};
    int grande[1000000];
    grande[999999] = 500;

    printf("\n -------TESTING O(n)-------\n");

    t = clock();
    buscarElemento(pequeno, n_pequeno, 10);
    t = clock() - t;

    printf("Clock pequeno: %ld\n", t);
    t = clock();
    buscarElemento(grande, n_grande, 500);
    t = clock() - t;

    printf("Clock grande: %ld\n", t);
    return 0;
}