#include <stdio.h>
#include <math.h>
int main(){
    int tamanho = 10;
    int arrayBubble[tamanho] = {1,5,2,3,4,9,7,6,8,0};    
    int estaOrdenados = 0;
    
    for(int i = 0; i < tamanho; i++){
        if (arrayBubble[i] <= tamanho)
            printf("%d, ", arrayBubble[i]);
    }
    printf("\n");

    while (estaOrdenados == 0)
    {
        int troca = 0;
        for (int i = 0; i < tamanho - 1; i++)
        {
            if (arrayBubble[i] <= tamanho)
            {            
                if(arrayBubble[i] > arrayBubble[i+1]){
                    int aux = arrayBubble[i];
                    arrayBubble[i] = arrayBubble[i+1];
                    arrayBubble[i+1] = aux;
                    troca = 1;
                }
            }
        }
        if (troca == 0)
            estaOrdenados = 1;
    }
    printf("\nOrdenacao\n");
    for(int i = 0; i < tamanho; i++){
        printf("%d, ", arrayBubble[i]);
    }
    printf("\n");
}