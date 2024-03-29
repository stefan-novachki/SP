/*
    Од стандарден влез да се прочита квадратна матриција со број на редици и колони N. Прво се вчитува бројот N а потоа
    и N*N елементите на матрицата.

    Да се промени знакот на елементите од главната дијагонала на матрицата (позитивните да станат негативни и обратно).

    Да се испечати трансформираната матрица на екран (Секој елемент од матрицата се печати со 3 места - %3d).
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int i,j,n;
    int a[100][100];

    scanf("%d", &n);
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            scanf("%d", &a[i][j]);
        }
    }

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(i==j){
                a[i][j] *= -1;
            }
        }
    }

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("%3d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}