/*
    Да се напише програма која што од датотека со име "text.txt" ќе ги одреди и ќе
    ги испечати на стандарден излез:

    -релативната фреквенција на сите мали букви
    -релативната фреквенција на сите големи букви

    Релативната фреквенција на даден(и) карактер(и) се пресметува како количник на
    вкупното појавување на тој/тие карактер/и
    со вкупниот број на карактери во текстот (да се игнорираат празните места и
    специјалните знаци).
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    FILE *fp = fopen("text.txt", "r");
    if(fp == NULL){
        printf("Error");
        exit(-1);
    }

    char ch;
    float vkupnoBukvi = 0;
    float counterMali = 0;
    float counterGolemi = 0;
    while((ch = fgetc(fp)) != EOF){
        if(isalpha(ch)){
            if(islower(ch)){
                counterMali++;
            }
            if(isupper(ch)){
                counterGolemi++;
            }
            vkupnoBukvi++;
        }

    }
    float kolicnik1 = counterMali/vkupnoBukvi;
    float kolicnik2 = counterGolemi/vkupnoBukvi;

    printf("%.4f \n", kolicnik2);
    printf("%.4f", kolicnik1);

    fclose(fp);
    return 0;
}
