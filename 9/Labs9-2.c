/*
    Напишете целосно рекурзивна функција triagolnik(n) што за даден влезен аргумент n ќе испечати на екран превртен
    триаголник од броевите од 1 до n, како во примерот подолу.
    Дополнителни функции се дозволени, но истите мора да се рекурзивни. Не е дозволено користење на циклуси!

    Пример за n=4:

    1 2 3 4
    1 2 3
    1 2
    1

    For example:
    Input
    3

    Result
    1 2 3
    1 2
    1
*/

#include <stdio.h>
#include <stdlib.h>

int triagolnik(int n){
    int i;
    if(n==1){
        return n;
    }

    for(i=1; i<=n; i++){
        printf("%d ", i);
    }
    printf("\n");

    return triagolnik(n-1);

}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d ", triagolnik(n));
    return 0;
}
