#include "ordenar.h"
#include "dadosDengue.h"
#include <stdio.h>
#include <string.h>

void insertionSort(dadosDengue *meuVetor, int tam){
    int i, j;
    dadosDengue aux;

    for (i=1; i < tam; i++){
        for (j=i; j > 0; j--){
            if (strncmp((meuVetor[j-1]).UF, (meuVetor[j]).UF, 3) > 0){
                aux= meuVetor[j-1];
                meuVetor[j-1]= meuVetor[j];
                meuVetor[j]= aux;
            } 
            else {
                break;
            }
        }
    }
}