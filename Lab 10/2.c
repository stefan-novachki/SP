/*
    Од стандарден влез се вчитува бројот N, бројот K и знакот C. Потоа се вчитуваат N текстуални низи (секоја во нов ред).
    Да се испечатат на екран текстуалните низи кои го содржат знакот C точно K пати без разлика на големината на буквата.
    Ако нема такви низи, да се испечати порака NONE.

    For example:
    Input
    2 5 a
    Strukturno
    programiranje

    Result
    NONE
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int condition(char line[], int k, char c){
    int i;
    int N = strlen(line);
    int counter = 0;
    for(i=0; i<N; i++){
        if(isalpha(line[i])){
            if(isupper(line[i])){
                line[i] = tolower(line[i]);
            }
        }
    }
    for(i=0; i<N; i++){
        if(line[i]==tolower(c)){
            counter++;
        }
    }
    if(counter==k){
        return 1;
    }else{
        return 0;
    }

}

int main(){
    int i;
    int n,k;
    char c;
    int counter = 0;
    scanf("%d %d %c\n", &n, &k, &c);

    char line[100];
    char line_copy[100];
    for(i=0; i<n; i++){
        fgets(line, 100, stdin);
        strcpy(line_copy, line);
        if(condition(line_copy, k, c)){
            printf("%s", line);
            counter++;
        }
    }
    if(counter==0){
        printf("NONE");
    }
    return 0;
}
