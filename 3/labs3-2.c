/*
    Да се напише програма која што за вчитан датум како влезна променлива ( DD MM GGGG) ќе испечати на  излез порака
    1 или 0 во зависност од тоа дали внесениот датум е правилен или не.

    Напомена: За проверка на валидноста на датумот разгледајте ги следниве потточки:

    - за датумот 29.02. да се внимава дали станува збор за престапна година (престапна година е секоја година која
      што е делива со 400 или пак е делива со 4, но не и со 100)
    - дали месецот е број помеѓу 1 и 12
    - дали денот одговара со бројот на денови во тој месец
*/

#include<stdio.h>

int main() {
    int den, mesec, godina;
    scanf("%d %d %d", &den, &mesec, &godina);

    switch (mesec){
        case 1:
            if(den >= 1 && den <= 31)
                printf("1");
            else
                printf("0");
            break;
        case 2:
            if (den==29){
                if (godina % 400 == 0 || (godina % 4 == 0 && godina % 100 != 0))
                    printf("1");
                else
                    printf("0");
            } else if (den>=1 && den<=28){
                printf("1");
            } else {
                printf("0");
            }
            break;
        case 3:
            printf((den >= 1 && den <= 31) ? "1" : "0");
            break;
        case 4:
            printf((den >= 1 && den <= 30) ? "1" : "0");
            break;
        case 5:
            printf((den >= 1 && den <= 31) ? "1" : "0");
            break;
        case 6:
            printf((den >= 1 && den <= 30) ? "1" : "0");
            break;
        case 7:
            printf((den >= 1 && den <= 31) ? "1" : "0");
            break;
        case 8:
            printf((den >= 1 && den <= 31) ? "1" : "0");
            break;
        case 9:
            printf((den >= 1 && den <= 30) ? "1" : "0");
            break;
        case 10:
            printf((den >= 1 && den <= 31) ? "1" : "0");
            break;
        case 11:
            printf((den >= 1 && den <= 30) ? "1" : "0");
            break;
        case 12:
            printf((den >= 1 && den <= 31) ? "1" : "0");
            break;
        default:
            printf("0");
            break;
    }
    return 0;
}