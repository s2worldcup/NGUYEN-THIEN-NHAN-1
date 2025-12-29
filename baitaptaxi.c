#include <stdio.h>

int main(){
	char t;
	int d;
	double total= 0;
	printf("E for economic taxi , L for luxury taxi\n");
	printf("please, enter your taxi type you want: ");
	scanf("%c",&t);
	if(t=='E'){
		total =3;
	}
	if(t=='L'){
		total=6;
	}
	printf("enter your distance you went: ");
	scanf("%d",&d);
	if(d<=5){
		total += d*1,5;
	}
	else if(d<=10){
		total += 5*1.5+(d-5)*1.25;
	}
	else{
		total +=5*1.5+5*1.25+(d-10)*1;
	}
	printf("Here is your payment:%2.lf dollar", total);
	return 0;
}