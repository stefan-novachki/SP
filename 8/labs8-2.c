/*
    Од тастатура се вчитуваат броевите A и B. На екран да се испечатат сите броеви
    од интервалот [A,B] кои се палиндроми и се составени само од цифрите 0,1,2,3 и 4.
*/

#include <stdio.h>

int reverseNumber(int number) {
    int rev = 0;
    while (number) {
        rev = 10*rev + number%10;
        number/=10;
    }
    return rev;
}

int isPalindrome(int number) {
    return number == reverseNumber(number);
}

int containsDigits(int number) {
    if (number==0){
        return 1;
    } else {
        if (number%10>4){
            return 0;
        } else {
            return containsDigits(number/10);
        }
    }
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    for (int i = a; i <= b; i++) {
        if (isPalindrome(i) && containsDigits(i)) {
            printf("%d\n", i);
        }
    }
    return 0;
}
