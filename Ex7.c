#include <stdio.h>

void nhapMaTran(int soHang, int soCot, int maTran[soHang][soCot]) {
    for (int i = 0; i < soHang; i++) {
        for (int j = 0; j < soCot; j++) {
            printf("Nhap gia tri cho phan tu [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &maTran[i][j]);
        }
    }
}

void inMaTran(int soHang, int soCot, int maTran[soHang][soCot]) {
    for (int i = 0; i < soHang; i++) {
        for (int j = 0; j < soCot; j++) {
            printf("%d ", maTran[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int soHang, soCot;
    
    printf("Nhap so hang cua ma tran: ");
    scanf("%d", &soHang);
    printf("Nhap so cot cua ma tran: ");
    scanf("%d", &soCot);

    int maTran[soHang][soCot];
    
    nhapMaTran(soHang, soCot, maTran);
    inMaTran(soHang, soCot, maTran);
    
    return 0;
}

