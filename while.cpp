#include <stdio.h>

//while (testExpression){
	// code 
	//}
//do{
	//code
//}while(testExpresi);
	//vidu: nhap gia tri cua n la so nguyen khong am , neu nhap am yeu cau nhap lai
	int main (){
		int n;
		do{
				scanf("%d", &n);
		         if (n<0)printf("Gia tri nhap khong hop le ,vui long nhap lai:%d\n", n);
		}while(n>0);
		return 0;
	}
	 
