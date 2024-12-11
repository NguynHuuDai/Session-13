#include <stdio.h>
#include <stdbool.h>

void nhapMang(int n, int m, int mang[n][m]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("Nhap gia tri cho phan tu [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &mang[i][j]);
        }
    }
}

void inMang(int n, int m, int mang[n][m]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", mang[i][j]);
        }
        printf("\n");
    }
}

void inGoc(int n, int m, int mang[n][m]) {
    printf("Cac phan tu o goc cua ma tran: ");
    printf("%d ", mang[0][0]);
    printf("%d ", mang[0][m - 1]);
    printf("%d ", mang[n - 1][0]);
    printf("%d\n", mang[n - 1][m - 1]);
}

void inDuongBien(int n, int m, int mang[n][m]) {
    printf("Cac phan tu tren duong bien cua ma tran: \n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == m - 1) {
                printf("%d ", mang[i][j]);
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }
}

void inDuongCheo(int n, int m, int mang[n][m]) {
    printf("Cac phan tu tren duong cheo chinh va cheo phu: \n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == j || i + j == n - 1) {
                printf("%d ", mang[i][j]);
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }
}

bool isPrime(int x) {
    if (x <= 1) return false;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}

void inSoNguyenTo(int n, int m, int mang[n][m]) {
    printf("Cac phan tu la so nguyen to: \n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (isPrime(mang[i][j])) {
                printf("%d ", mang[i][j]);
            }
        }
    }
    printf("\n");
}

int main() {
    int n, m;
    printf("Nhap so hang (n): ");
    scanf("%d", &n);
    printf("Nhap so cot (m): ");
    scanf("%d", &m);

    int mang[n][m];

    int chucNang;
    do {
        printf("\nMENU\n");
        printf("1. Nhap gia tri cac phan tu cua mang\n");
        printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
        printf("3. In ra cac phan tu o goc theo ma tran\n");
        printf("4. In ra cac phan tu nam tren duong bien theo ma tran\n");
        printf("5. In ra cac phan tu nam tren duong cheo chinh va cheo phu theo ma tran\n");
        printf("6. In ra cac phan tu la so nguyen to theo ma tran\n");
        printf("7. Thoat\n");
        printf("Chon chuc nang (1-7): ");
        scanf("%d", &chucNang);

        switch (chucNang) {
            case 1:
                nhapMang(n, m, mang);
                break;
            case 2:
                inMang(n, m, mang);
                break;
            case 3:
                inGoc(n, m, mang);
                break;
            case 4:
                inDuongBien(n, m, mang);
                break;
            case 5:
                inDuongCheo(n, m, mang);
                break;
            case 6:
                inSoNguyenTo(n, m, mang);
                break;
            case 7:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Chuc nang khong hop le. Vui long chon lai.\n");
                break;
        }
    } while (chucNang != 7);

    return 0;
}

