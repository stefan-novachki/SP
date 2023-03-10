/*
    Од стандарден влез да се вчита број N и потоа да се вчитаат N елементи во една низа.

    Внесената низа да се трансформира на начин што парните елементи ќе се зголемат за 1, а непарните ќе се намалат за 1.

    Трансформираната низа да се испечати на стандарден излез, така што елементите ќе се одвоени со празно место меѓу нив.

    For example:

    Input
    5
    1 2 3 4 5

    Result
    0 3 2 5 4
*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main(){
    int N;
    int a[MAX];
    int i;

    scanf("%d", &N);
    for(i = 0; i < N; i++){
        scanf("%d", &a[i]);
    }

    for(i = 0; i < N; i++){
        if(a[i]%2 == 0){
            a[i] += 1;
        }else{
            a[i] -= 1;
        }
    }

    for(i = 0; i < N; i++){
        printf("%d ", a[i]);
    }
}
