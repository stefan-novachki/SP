/*
    Од стандарден влез да се прочита една низа од знаци со најмногу 100 карактери.
    Да се трансформира низата така што левата и десната половина од стрингот ќе си
    ги сменат местата.
    Напомена: Сите тест примери ќе имаат парен број на знаци.
    For example:
    Input
    Stefan
    Strukturno

    Result
    fanSte
    turnoStruk
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void bukviSwap(char str[], int sredinaNaNiza){
    int i;
    char temp;

    for (i=0; i< sredinaNaNiza; i++) {
        temp = str[i];
        str[i] = str[sredinaNaNiza + i];
        str[sredinaNaNiza + i] = temp;
    }
}

void transformNiza(char str[]) {
    int i;
    int n = strlen(str);
    int sredinaNaNiza = n/ 2;

    bukviSwap(str, sredinaNaNiza);
}

int main() {
    char str[100];
    scanf("%s", str);

    transformNiza(str);
    printf("%s\n", str);

    return 0;
}
