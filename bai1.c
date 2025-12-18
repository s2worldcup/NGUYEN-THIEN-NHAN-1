#include <stdio.h>
  
  int main(){
  	double gia;
  	double *p = &gia;
  	printf("nhập vào giá của 1 sản phẩm : ");
  	scanf("%lf",&gia);	
  	if(gia > 1000 ) {printf(" giá tiền mà khách hàng phải trả là :%f\n",gia * (1 - 5.5/100));
  	printf("Địa chỉ của giá tiền là :%p\n",&gia);
		  }else {printf(" giá tiền mà khách hàng phải trả là :%f\n",gia);
		  printf("Địa chỉ của giá tiền là :%p\n",&gia);
		  }
	  
	  
  	
  	return 0;
  }