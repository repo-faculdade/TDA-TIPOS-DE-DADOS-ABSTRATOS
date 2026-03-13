#include <stdio.h>
#include<time.h>

// FUNCAO COMPLEXIDADE O(log n) - LOGARITMICA: O tempo cresce conforme o logaritmo do tamanho


int buscaBinaria(int array[], int left, int right, int target) {
    int countAlvoMaior = 0;
    int countAlvoMenor = 0;
    
    while (left <= right)
    {
        // cata o meio do array 
        int middle = left + (right - left) / 2;

        //se o meio for o alvo, retorna o indice
        if(array[middle] == target)
        {
            printf("Alvo maior que o meio: %d vezes\n", countAlvoMaior);
            printf("Alvo menor que o meio: %d vezes\n", countAlvoMenor);
            return middle;
        } 
        
        //se o alvo maior , ignora esquerda
        if(array[middle] < target) {
            left = middle + 1;
            countAlvoMaior++;
        }
        
        //se o alvo for menor, ignora direita
        else {
            right = middle - 1;
            countAlvoMenor++;
        }
    }
    return -1;
}

int main(){
    clock_t t;
    int min = 0;
    int max = 1000000;
    int target = 74218;

    int pequeno[1000];
    int grande[1000000];
    grande[999999] = 500;

    for (int i = 0; i < 1000; i++)
        pequeno[i] = i;

    for (int i = 0; i < 1000000; i++)
        grande[i] = i;
    
    
    printf("\n -------TESTING O(log n)-------\n");

    t = clock();
    buscaBinaria(pequeno, min, max, 666);
    t = clock() - t;

    printf("Clock pequeno: %ld\n", t);
    t = clock();
    buscaBinaria(grande, min, max, target);
    t = clock() - t;

    printf("Clock grande: %ld\n", t);
    return 0;
}