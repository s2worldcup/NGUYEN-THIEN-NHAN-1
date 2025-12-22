#include <stdio.h>

int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

void sort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
                }
        }
    }
}
int main() {
    int n, a[100];
scanf("%d",&n);

    int i;

    for( i=0; i<n ; i++)

      scanf("%d",&a[i]);

    int sum = 0 , max = a[0], min = a[0];

for ( i = 0; i < n; i++) {
        if (isPrime(a[i])) {
            sum += a[i];
        }
        if (a[i] > max) max = a[i];
        if (a[i] < min) min = a[i];
    }
    printf("Tong cac so nguyen to trong mang la = %d\n", sum);
    printf("Gia tri lon nhat la : %d\n", max);
    printf("Gia tri nho nhat la : %d\n", min);

    printf("Mang da duoc sap xep: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}