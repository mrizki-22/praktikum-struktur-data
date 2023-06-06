// array 2 dimensi
#include <stdio.h>

int main(){
	int baris = 3;
	int kolom = 3;
	int arr[baris][kolom] = 
	{
		{10,20,30},
		{40,50,60},
		{70,80,90}
	};
	
	
	// print array 2 dimensi
	for(int i = 0; i < baris; i++){
		for(int j = 0; j < kolom; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
