#include <stdio.h>
#include <conio.h>

 int main (){
 	char hoten [40], makh [10], tieptuc ;
	 int dau, cuoi, ssd;
	  long long  sotien;
	 do{
	 	printf(" Ho Ten "); gets (hoten); fflush(stdin);
	 	printf(" Ma KH"); gets (makh);
	 	printf(" So cong to DT ?"); scanf("%d", &dau);
	 	printf(" So cong to CT ?"); scanf("%d", &cuoi);
	 	ssd=cuoi-dau;
	 	if (ssd <= 100){
		  sotien = ssd * 500 ;
	     }
	 			else if(("ssd<=200") && ("sotien = 100* 500 +(ssd -100)*1000")){
		       	}
		else {
			(sotien=100*100+100*1000+(ssd-200)*2000);
				 } 
		printf(" PHIEU THU TIEN DIEN\n");
		printf("\nHo ten KH ;%s", hoten);
		printf("\n so tien dien su dung : %d ", ssd );
		printf("\n so tien phai tra : %lld vnd ", sotien );
		getch();fflush (stdin);
		printf("\nco lam tiep khong ,<c/k>?"); tieptuc=getchar();
		if(tieptuc=='K' || tieptuc=='k'){
			 printf("Nghi! bye ban ");
			 getch();
			 break;
		}		 
	 	}
		 while(1);
	 return 0;
 }
 n