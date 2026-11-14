#include<stdio.h>
#include<math.h>
// {}: endclosing scope
// S = 1 + 2 + 3 + 4 +.. + n
//[a, b]
//in ra cac boi cua 3 <= n
// 0 -> 3 -> 6 -> 9
int main(){
	for (int i = 1; i <= 3; i++){
		for ( int j = 1; j <= 5; j++){
			printf(" %d %d \n", i, j);	
		}
	}
	return 0;
}
