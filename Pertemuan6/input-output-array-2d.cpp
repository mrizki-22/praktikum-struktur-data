//input output 2d
#include <stdio.h>
int main(){
	int baris, kolom;
	
	//input baris
	printf("Masukkan jumlah baris: ");
	scanf("%d", &baris);
	
	//input kolom
	printf("Masukkan jumlah kolom: ");
	scanf("%d", &kolom);
	
	// inisialisasi array
	int arr[baris][kolom];
	
	// input array
	for(int i = 0; i < baris; i++){
		
		for(int j = 0; j < kolom; j++){
			printf("Masukkan nilai arr[%d][%d]: ", i , j);
			scanf("%d", &arr[i][j] );
		}
		
	}
	
	// print array 2d
	for(int i = 0; i < baris; i++){
		
		for(int j = 0; j < kolom; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
		
	}
	
}
