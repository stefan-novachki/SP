/*
    Од стандарден влез се вчитува број N, а потоа и N цели броеви.

    Да се испечати на екран најголемата разлика помеѓу два последователно внесени броја.

    Да се реши без користење на низи!

    Објаснување на примерот:
    N=5, па се внесуваат 5 броја: 1,3,0,5,2. Разликите се соодветно:
    3-1 = 2
    0-3 = -3
    5-0 = 5
    2-5 = -3

    Најголема разлика е 5.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int i, n, number;
    int previous, current;
    int razlika;
    int najgolemaRazlika=0;
    int flg = 1;
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        scanf("%d", &number);
        if(i==1){
            current = number;
        } else {
            previous = current;
            current = number;
        }
        razlika = current - previous;
        if(razlika>najgolemaRazlika || flg==1){
            najgolemaRazlika = razlika;
            flg = 0;
        }
    }
    printf("%d \n", najgolemaRazlika);

    return 0;
}