#include <stdio.h>
#include <string.h>

 struct SinhVien {
    char id[20];
    char name[50];
    double gpa;
} ;
 typedef struct SinhVien SinhVien;
int main() {
    int n, i;
    SinhVien sv[100];

    printf("Moi ban nhap vao so sinh vien: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nSinh vien %d\n", i + 1);

        printf("Moi ban nhap ma so sinh vien: ");
        scanf("%s", sv[i].id);

        printf("Moi ban nhap ten sinh vien: ");
        scanf("%s", sv[i].name);
        getchar();
        printf("Moi ban nhap diem GPA: ");
        scanf("%lf", &sv[i].gpa);
    }

    printf("\n============ Danh sach sinh vien UEH ============\n");
    for (i = 0; i < n; i++) {
        printf("%s | %s | %.2lf\n", sv[i].id, sv[i].name, sv[i].gpa);
    }

    int m[2][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10}
    };

    printf("\nGia tri can tim (2,3) = %d\n", m[1][2]); // hang 2 cot 3 (dem tu 1)

    return 0;
}