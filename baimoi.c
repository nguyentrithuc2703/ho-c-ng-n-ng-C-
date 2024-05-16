#include<stdio.h>
#include<conio.h>
// viet code tao thanh tam giac can
	 void main(){
	 	int n;
	 	printf("Hay nhap mot so nguyen duong n:");
	 	scanf("%d", &n);
	 	int i,j, k;
	 	for (i=1;i<=n;i++){
	 		//phan dau ' '
	 		for (j=1;j<=n-i;j++){
	 			printf(" ");
	 		}
	 		// phan dau '*'
	 		for(k=1;k <=2*i-1; k++){
	 			printf("*");
      	     }
      	     // phan dau ' '
      	     for (j=1;j<=n-1;j++){
	 			printf(" ");
	 		}
	 		printf("\n");
	 	}
	 	
	 }
