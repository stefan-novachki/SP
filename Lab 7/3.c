/*
    Да се напише програма која чита две целобројни матрици со димензија mxn, а потоа
    печати колку колони од првата матрица се наоѓаат во втората матрица.

    For example:

    Input
    4 4

    1 2 4 6
    2 3 4 5
    5 1 3 1
    1 3 4 4

    2 2 2 4
    3 2 3 5
    5 2 1 3
    1 1 3 4

    Result
    1
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,j;
    int k;
    int m, n;
    int a[100][100];
    int b[100][100];

    scanf("%d", &m);
    scanf("%d", &n);

    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            scanf("%d", &a[i][j]);
        }
    }

    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            scanf("%d", &b[i][j]);
        }
    }

    int flag;
    int counter = 0;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            flag = 1;
            for(k=0; k<m; k++){
                if(a[k][i] != b[k][j]){
                    flag = 0;
                    break;
                }
            }
            if(flag){
                counter++;
            }
        }
    }
    printf("%d", counter);

    return 0;
}
