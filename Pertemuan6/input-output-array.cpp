//input dan output array
#include <stdio.h>

int main(){
	int size;
	
	// input size
	printf("Masukkan size array: ");
	scanf("%d", &size);
	
	int arr[size];
	
	// input array
	for(int i = 0; i < size; i++){
		printf("Masukkan nilai index ke-%d : ", i);
		scanf("%d", &arr[i]);
	}
	
	// print array
	printf("Nilai array adalah ");
	for(int i = 0; i < size; i++){
		printf("%d ", arr[i]);
	}
}
