#include <stdio.h>

int main(){
	double a;
	double b;
	char phepToan;
	printf("Mời bạn nhập số đầu tiên: ");
	scanf("%lf",&a);
	printf("Mời bạn nhập số thứ hai: ");
	scanf("%lf",&b);
	printf("Mời bạn nhập kí tự cần tính: ");
	scanf(" %c",&phepToan);
	switch (phepToan){
		case '+':
			printf("Kết quả bạn muốn tìm là:%.2f ",a+b);
			break;
		case '-':
			printf("Kết quả bạn muốn tìm là:%.2f ",a-b);
			break;
		case '*':
			printf("Kết quả bạn muốn tìm là:%.2f ",a*b);
			break;
		case '/':
			if(b!=0){
				printf("Kết quả bạn muốn tìm là:%.2f ",a/b);
			}
			else{
				printf("bài toán không chia được cho 0");
	}
			
			break;
		default:
			printf("Phép toán không hợp lệ");
	}
	
	return 0;
}