#include <stdio.h>
#include <math.h>
//return_value_type funtion_name(parameter_list){
//	statments;
//}

//Xay dung mot ham in dong chu xin chao ra man hinh
//xay dung mot ham tinh tong

//function prototype :
//function decLaration :
//khai bao nguyen mau ham

//Tinh tong S(n)= 1 + 1 / 2 + 1 / 3 + 1 / 4 + ... + 1 / n;
//parameter :tham so : tham so hinh thuc
//arguments: doi so : tham so thuc su
// khi ban goi ham , don thuan la phep gan gia tri cua tham so len doi so va thuc hien tren tham so
//pass by value: truyen gia tri
double S( int n){
	double res = 0;
	for( int i = 1; i <= n ; i++) res  += (double)1 / i;
	return res;
	
}
//kiem tra mot so nguyen khong am co phai la so chinh phuong hay khong
//neu co in YES nguoc lai in No
void chinhPhuong(int n){
	int can = sqrt(n);
	if ( can * can == n) printf("YES\n");
	else printf ("NO\n");
}
//Khi xay dung ham kiem tra tinh chat dung sai thi nen dung tra ve 1 hoac 0 nhe
//vi no se chuyen ngiep de tai su dung hon

int chinhPhuong2(int n){
	int can = sqrt( n);
	if ( can * can == n) return 1;//Neu n la so chinh phuong
	else return 0;//Neu n khong phai la so chinh phuong
}

// kiem tra mot so co chua chu so 6 , va co tong chu so chia het cho 8
int check1 (int n){
	while(n){
		if ( n % 10 == 6)return 1;
		n /= 10;
	}
	return 0;
}

int check2 (int n){
	int sum = 0;
	while(n){
		sum += n%10;
		n /= 10;
	}
	return sum %8 == 0;
}

int main (){
	for( int i = 1; i <= 1000; i++){
		if(check1(i) && check2(i)) printf("%d  ", i);	
	}
	return 0;
}
