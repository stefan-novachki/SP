// Да се пресмета просечна висина(cm) на тројца студенти и истата да се испечати претставена во m и cm.

#include <stdio.h>

int main(){
    int v1, v2, v3;
    scanf("%d %d %d", &v1, &v2, &v3);

    int prosecnaVoCm = (v1 + v2 + v3)/3;
    int prosecnaVoM = (prosecnaVoCm / 100);
    int ostatok = prosecnaVoCm % 100;

    printf("%d m %02d cm", prosecnaVoM, ostatok);
    return 0;
}