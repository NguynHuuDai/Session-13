#include <stdio.h>

int timUCLN(int a, int b) {
    while (b != 0) {
        int tam = b;
        b = a % b;
        a = tam;
    }
    return a;
}

int main() {
    int so1, so2;
    
    printf("Nhap so nguyen thu nhat: ");
    scanf("%d", &so1);
    printf("Nhap so nguyen thu hai: ");
    scanf("%d", &so2);
    
    int ucln = timUCLN(so1, so2);
    printf("UCLN cua %d va %d la: %d\n", so1, so2, ucln);
    
    return 0;
}

