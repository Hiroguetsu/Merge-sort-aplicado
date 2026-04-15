#ifndef DADOSDENGUE_H
#define DADOSDENGUE_H

typedef struct dados{
    char regiao[15];
    char UF[3];
    int graves23;
    int obitos23;
    int graves24;
    int obitos24;
    int difGraves;
    int difObitos;
}dadosDengue;

typedef struct escolhas{
    int tipo;
    int modo;
    int reg;
    int qntUF;
    char *path;
}tipoEscolha;

void lerDados(dadosDengue *tabelaRegiao, char *filepath, int qntUF);

#endif