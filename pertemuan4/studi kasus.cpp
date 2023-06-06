/*
Buat program untuk input angka, lalu print list angka 1 sampai n 
beserta kata ganjil / genap setelahnya. Contoh:
1 ganjil
2 genap
3 ganjil
  ...
n
*/

#include <stdio.h>

int main(){
	int n;
	printf("Masukkan angka: ");
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++){
		if(i % 2 == 1){
			printf("%d ganjil \n", i);
		}else{
			printf("%d genap \n", i);
		}
	}
}



