// Да се прочитаат два цели броеви од тастатура и на екран да се испечатат нивните сума и производ.

#include <stdio.h>

int main(){
    int x,y;

    scanf("%d %d", &x, &y);
    int suma = x+y;
    int proizvod = x*y;

    printf("%d \n", suma);
    printf("%d \n", proizvod);
    return 0;
}