/*
 Да се внесат два четирицифрени броја. Да се испечати сумата на цифрите кои се наоѓаат
 на позицијата на единците, па на десетките, стотките и илјадарките.
*/

#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d", &a, &b);

    int pEdinici1 = (a%10);
    int pEdinici2 =(b%10);

    int pDesekti1 = (a%100)/10;
    int pDesetki2 = (b%100)/10;

    int pStotki1 = (a/100)%10;
    int pStotki2 = (b/100)%10;

    int pIljadarki1 = (a/1000)%10;
    int pIljadarki2 = (b/1000)%10;

    int sumaEdinici = pEdinici1 + pEdinici2;
    int sumaDesetki = pDesekti1 + pDesetki2;
    int sumaStotki = pStotki1 + pStotki2;
    int sumaIljadarki = pIljadarki1 + pIljadarki2;

    printf("Edinici: %d \n", sumaEdinici);
    printf("Desetki: %d \n", sumaDesetki);
    printf("Stotki: %d \n", sumaStotki);
    printf("Iljadarki: %d \n", sumaIljadarki);
    return 0;
}