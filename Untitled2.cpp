#include<stdio.h>
#include<math.h>
  int main(){
	int n;
	printf("1. In ra xin chao\n");
	printf("2. In ra hello\n");
	scanf("%d", &n);
	switch(n){
		case 1:
		printf("xin chao !");
		break;
		case 2:
		printf("hello");
		break;
		defautf:
		printf("du lieu khong hop le");
	}
	return 0;
  }

