#include <stdio.h>
#include <math.h>

//char
//kiem tra ki tu la chu so
//kiem tra ki tu la chu cai
//kiem tra ki tu la in hoa
//kiem tra ki tu la in thuong
//chuyen ki tu tu in thuong thanh in hoa
//chuyen ki tu tu in hoa thanh in thuong

//A-Z : 65-90
//a-z : 97-122
//0-9 : 48-57
int main(){
	char kitu;
	scanf("%c", &kitu);
	
	
//Nhap vao ki ki tu neu no la in hoa thi chuyen no thanh in thuong
	if(kitu >= 'a' && kitu <= 'z'){
		kitu -= 32;
		
	}	
	printf ("%c", kitu);
	


	return 0;
}
