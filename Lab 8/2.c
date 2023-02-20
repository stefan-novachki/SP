/*
    Од тастатура се вчитуваат броевите A и B. На екран да се испечатат сите броеви од интервалот [A,B]
    кои се палиндроми и се составени само од цифрите 0,1,2,3 и 4.

    For example:
    Input
    10 100

    Result
    11
    22
    33
    44
*/
#include <stdio.h>
#include <stdlib.h>

int reverse(int num) {
    int rev = 0;
    while(num) {
        int lastDigit = num % 10;
        rev = rev * 10 + lastDigit;
        num /= 10;
    }
    return rev;
}

int isPalindrome(int num) {
    if (num == reverse(num)) {
        return 1;
    }return  0;
}

int potrebniCifri(int num) {
    if (num == 0) {
        return 1;
    }
    int digit = num %10;
    if (digit > 4) {
        return 0;
    }
    return potrebniCifri(num /10);
}

void main() {
    int start;
    scanf("%d", &start);
    int end;
    scanf("%d", &end);
    int i;
    for (i=start; i<=end; i++) {
        if (isPalindrome(i) && potrebniCifri(i)) {
            printf("%d", i);
            printf("\n");
        }
    }
}
