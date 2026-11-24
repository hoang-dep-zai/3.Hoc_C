#include <stdio.h>
#include <math.h>
//cho mot mang nguyen to khong qua 10k
//kiem tra tinh chat cac phan tu trong mang dem so luong nguyen to, dem so nguyen to, dem so chan,
//dem so le, so hoan hao
//lon nhat , nho nhat 
//sap xem ,tim kiem (DA CO VIDEO) TIM KIEM VA MAY CAI TRONG C++ TAT CA O TRONG C++ NHA DC DE CU A
//mang cong don
//cua so truot, hai con tro 

//6
//20 13 2 5 18
int nt(int n){
	for (int i = 2; i <= sqrt(n); i++){
		if(n%i == 0) return 0;
		}
	return n > 1;
}
int main(){
	int n;
	scanf("%d", &n);
	//nhap cac phan tu trong mang
	int a[n];
	for ( int i = 0; i < n ; i++) scanf("%d", &a[i]);
	int max = -1e9;//cho phan tu lon nhat la phan tu dau tien 
	for (int i = 0; i<n; i++){
		if (a[i] > max){
			max = a[i];
		}
	}
	printf("%d", max);
	return 0;
}
