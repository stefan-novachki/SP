/*
    Од стандарден влез да се прочита една низа од знаци со најмногу 100 карактери. Да се
    трансформиранизата така што левата и десната половина од стрингот ќе си ги сменат местата.

    Напомена: Сите тест примери ќе имаат парен број на знаци.
*/

#include <stdio.h>
#include <ctype.h>
#include<string.h>

void transform(char * str) {
    str[strlen(str)-1]='\0';

    int length = strlen(str);

    char tmp [100];
    strcpy(tmp, str + length/2);
    strncat(tmp, str, length/2);

    strcpy(str,tmp);
}

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);

    transform(str);

    puts(str);
    return 0;
}