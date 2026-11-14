#include<stdio.h>
//while (testExpession){
////	code
//}

//tinh tong cac so chan
//tinh tong cac so le
//dem so chan
//dem so le
//dem chu so nguyen to cua n
//dem luong so 6

//do{
//	code
//}while(testExpession);
int main  (){
	int n; 
	do{
		scanf("%d", &n);
		if(n < 0)
			printf("Ban da nhap sai vui long nhap lai!");
		
	}while(n < 0);
	
	
	
	return 0;
}
