/*
    Даден е правоаголник кој се наоѓа во првиот квадрант од координатниот систем и страните му се паралелни со оските.
    Правоаголникот се задава со координатите на долното лево и горното десно теме (темињата А и С) кои се цели броеви.
    Потоа, се внесуваат координатите на две точки. Вашата програма за секоја од двете точки на излез треба да отпечати
    DA, ако дадената точка лежи на страните на правоаголникот и NE ако е надвор од него или внатре во него.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int i;
    int ax, ay;
    int cx, cy;
    int tockaX, tockaY;

    scanf("%d %d", &ax, &ay);
    scanf("%d %d", &cx, &cy);

    for(i=1; i<=2; i++){
        scanf("%d %d", &tockaX, &tockaY);
        if( ((tockaX>=ax && tockaX<=cx) && (tockaY>=ay && tockaY<=cy)) && (tockaX==ax || tockaY==ay || tockaX==cx || tockaY==cy)){
            printf("DA\n");
        } else {
            printf("NE\n");
        }
    }

    return 0;
}