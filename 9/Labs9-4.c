/*
    Од стандарден влез се вчитува бројот N, бројот K и знакот C. Потоа се вчитуваат N текстуални низи (секоја во нов ред).
    Да се испечатат на екран текстуалните низи кои го содржат знакот C точно K пати без разлика на големината на буквата.
    Ако нема такви низи, да се испечати порака NONE.
*/

#include <stdio.h>
#include <ctype.h>
#include<string.h>

int contains(char *str, char c) {
    int counter = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (tolower(str[i]) == tolower(c)) {
            ++counter;
        }
    }
    return counter;
}

int main() {
    char str[100];
    int n;
    char c;
    int k;
    scanf("%d %d %c\n", &n, &k, &c);
    int flag = 0;

    for (int i = 0; i < n; i++) {
        fgets(str, sizeof(str), stdin);
        str[strlen(str) - 1] = '\0';

        if (contains(str, c) == k) {
            puts(str);
            flag = 1;
        }
    }

    if (flag==0){
        printf("NONE");
    }
    return 0;
}