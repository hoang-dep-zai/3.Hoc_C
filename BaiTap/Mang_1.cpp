#include<stdio.h>
#include<math.h>
	//Tim gia tri lon nhat va gia tri nho nhat o trong mang

	//dem so chan va so le
	//liet ke so nguyen to
	//tim ra gia tri nho nhat va in ra chi so cua no, neu bang nhau thi in ra gia tri dau tien(hoac gia tri cuoi cung cung duoc)
	//tim va in ra so lon nhat va so lon thu hai trong mang (cac ban lam them so be nhat va so be thu hai trong mang)
	//tim ra so lon nhat va so lon thu hai trong mang, hai so nay phai khac nhau , neu ko co thi in ra -1
	//dem va liet ke cac so toan chu so le trong mang
	//cho mot mang cac so nguyen doi mot khac nhau . Liet ke cac phan tu trong mang co it nhat hai phan tu khac lon hon no
	//Mot so duoc dinh nghia la so dep neu no chua ca chu so 1 va ca chu so 9.in ra cac so dep trong mang neu mang khong ton tai so dep thi in ra -1
	//cho mang mot chieu cac so nguyen, liet ke cac phan tu co it nhat mot phan tu lien ke trai dau voi no
	//kiem tra mang co doi xung hay khong , neu co thi in YES con khong thi in NO
	
int dx(int a[], int n){
	int l = 0, r = n-1;
	while( l<r){
		if( a[l]!=a[r]) return 0;
		else ++l;--r;
	}
	return 1;
}
int main (){
	int n;
	scanf("%d", &n);
	int a[n];
	for ( int i = 0; i<n; i++){
		scanf("%d", &a[i]);
	}
	
	if( dx(a,n)) 
		printf("YES");
	else printf("NO");
	
	

	

}
