//nested loop (perulangan bersarang)
#include <stdio.h>

int main(){
	//persegi
//	for(int i = 1; i <= 5; i++){
//		
//		for(int j = 1; j <= 5; j++){
//			printf("*");
//		}
//		
//		printf("\n");
//	}

	// segitiga
	int n;
	printf("Masukkan tinggi: ");
	scanf("%d", &n);
	
//	for(int i = n; i >= 1; i--){ // 5 4 3 2 1
//		
//		for(int j = 1; j <= i ; j++){
//			printf("*");
//		}
//		printf("\n");
//	}

	for(int i = 1; i <= n; i++){
		
		for(int j = n-1; j >= i; j--){
			printf(" ");
		}
		
		for(int k = 1; k <= i; k++){
			printf("*");
		}
		printf("\n");
		
	}
	
	
}
