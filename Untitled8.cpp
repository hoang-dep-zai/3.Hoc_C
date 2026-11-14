#include<stdio.h>
#include<stdlib.h>

//pass-by-reference
//pass-by-value

//ham tang 2 co tham so la mot
//con tro kieu int la a

//&a[i] = [a+i];
//a[i] = *[a+i];

//cap phat dong :
//calloc
int main(){
	//dataType *poinName = (type_cast*)malloc(size_of_byte);
	//mot mang co mot trieu phan tu int
	int *ptr = (int*)malloc(10000000 * sizeof(int)); //4m
	int n = 5;
	for (int i = 0; i<5; i++){
		scanf("%d", &ptr[i]);
	}
	for (int i = 0 ; i<5; i++){
		printf("%d ", ptr[i]);
	}
	free(ptr);//giai phong bo nho xin cap phat


	
	return 0;
}
