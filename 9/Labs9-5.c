/*
    Да се напише програма која што од датотека со име "text.txt" ќе ги одреди и ќе ги испечати на стандарден излез:

    - релативната фреквенција на сите мали букви
    - релативната фреквенција на сите големи букви

    Релативната фреквенција на даден(и) карактер(и) се пресметува како количник на вкупното појавување на тој/тие
    карактер/и со вкупниот број на карактери во текстот (да се игнорираат празните места и специјалните знаци).
*/

#include <stdio.h>
#include <ctype.h>

void writeToFile() {
    FILE *f = fopen("text.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    writeToFile();

    FILE * file = fopen("text.txt", "r");

    char c;
    int upper=0, lower=0;

    while ((c=fgetc(file))!=EOF) {
        if (isalpha(c)) {
            if (isupper(c))
                ++upper;
            else
                ++lower;
        }
    }
    printf("%.4f\n%.4f", upper*1.00/(upper+lower), lower*1.0/(upper+lower));
}
