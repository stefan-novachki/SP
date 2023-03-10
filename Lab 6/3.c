/*
    Од тастатура се внесува низа од целобројни елементи А со должина N ( N <= 100).
    Дополнително се внесува и број К. Да се трансформира низата така што на почеток
    ќе се преместат сите елементи помали од K, а после нив ќе следуваат броевите поголеми
    или еднакви на K. Редоследот на елементите да не се менува.

    Испечатете ги елементите на трансформираната низа во еден ред на стандарден излез разделени
    со празно место.

    Пример:
    A[] = {1, 3, 2, 5, 9, 0, 8, 10}, K=6
    Трансформираната низа ќе биде:
    A[] = {1, 3, 2, 5, 0, 9, 8, 10}

    A[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0}, K=6
    Трансформираната низа ќе биде:
    A[] = {5, 4, 3, 2, 1, 0, 10, 9, 8, 7, 6}

    A[]={2, 4, 6, 8, 10}, K = 5
    Трансформираната низа ќе биде:
    A[] = {2, 4, 6, 8, 10}

    A[]={1, 3, 5, 7, 9} K = 5
    Трансформираната низа ќе биде:
    A[] = {1, 3, 5, 7, 9}
    For example:

    Input
    6
    1 3 5 7 9 0
    6

    Result
    1 3 5 0 7 9
*/
#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main(){
    int i, N;
    int arr[MAX];
    int tempPomali[100];
    int tempPogolemi[100];

    scanf("%d", &N);
    for(i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }

    int num;
    scanf("%d", &num);

    int pomali = -1;
    int pogolemi = -1;

    for(i = 0; i < N; i++){
        if(arr[i] < num){
            pomali += 1;
            tempPomali[pomali] = arr[i];
        }else if(arr[i] >= num){
            pogolemi += 1;
            tempPogolemi[pogolemi] = arr[i];
        }
    }

    for(i = 0; i <= pomali; i++){
        printf("%d ", tempPomali[i]);
    }

    for(i = 0; i <= pogolemi; i++){
        printf("%d ", tempPogolemi[i]);
    }
}
