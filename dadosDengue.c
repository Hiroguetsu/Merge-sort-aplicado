#include "dadosDengue.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void lerDados(dadosDengue *tabelaRegiao, char *filepath, int qntUF){
    FILE *fp = fopen(filepath, "r");
    if (fp == NULL){
        printf("\nERRO AO ABRIR ARQUIVO!\n");
        return;
    }

    int n = 0, Gr23, Ob23, Gr24, Ob24, DIFF_Gr, DIFF_Ob;
    char reg[15], UF[3];

    while(fscanf(fp, "%[^\n] %[^\n] %d %d %d %d %d %d", reg, UF, &Gr23, &Ob23, &Gr24, &Ob24, &DIFF_Gr, &DIFF_Ob) == 8 && n < qntUF){
        strncpy(tabelaRegiao[n].regiao, reg, 14);
        tabelaRegiao[n].regiao[14] = '\0';
        strncpy(tabelaRegiao[n].UF, UF, 2);
        tabelaRegiao[n].UF[2] = '\0';
        tabelaRegiao[n].graves23 = Gr23;
        tabelaRegiao[n].obitos23 = Ob23;
        tabelaRegiao[n].graves24 = Gr24;
        tabelaRegiao[n].obitos24 = Ob24;
        tabelaRegiao[n].difGraves = DIFF_Gr;
        tabelaRegiao[n].difObitos = DIFF_Ob;
        n++;
    }

    fpclose(fp);
}