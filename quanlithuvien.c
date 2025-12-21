#include <stdio.h>
#include  <string.h>

struct Book {
	char bookID[20];
	char bookName[100];
	int  yearofPublication;
	char author[100];
	int remainingCopies;
};
int main(){
	int n;
	printf("Nhap so luong sach trong thu vien: ");
	scanf("%d", &n);
	struct Book ThuongHai[n];
	int i;
	for (i = 0; i < n; i++) {
		printf("\nNhap thong tin cho sach %d:\n", i + 1);
	printf("Nhap ma sach: ");
    scanf("%s", &ThuongHai[i].bookID);
	printf("Nhap ten sach: ");
	scanf("%s", &ThuongHai[i].bookName);
	printf("Nhap nam san xuat: ");
	scanf("%d", &ThuongHai[i].yearofPublication);
	printf("Nhap tac gia: ");
	scanf("%s", &ThuongHai[i].author);
	printf("Nhap so luong sach con lai: ");
    scanf("%d", &ThuongHai[i].remainingCopies);
}
printf("\nThong tin cac sach trong thu vien:\n");
    for (i = 0; i < n; i++) {
        printf("\nMa sach: %s\n", ThuongHai[i].bookID);
        printf("Ten sach: %s\n", ThuongHai[i].bookName);
        printf("Nam san xuat: %d\n", ThuongHai[i].yearofPublication);
        printf("Tac gia: %s\n", ThuongHai[i].author);
        printf("So luong sach con lai: %d\n", ThuongHai[i].remainingCopies);
    }

    return 0;
}

