#include <stdio.h>

int main(){
	
	// membuat array
	int arr[] = {10, 20, 30, 40, 50};
	
	//index
	printf("Nilai index ke-3 : %d \n", arr[3]);
	
	//mengganti nilai array dari suatu index
	arr[3] = 45;
	printf("Nilai index ke-3 setelah diganti : %d \n", arr[3]);
	
	//menentukan size array
	int size = sizeof(arr) / sizeof(arr[0]);
	printf("Size array: %d \n", size);
	
	//print array
	for(int i = 0; i < size; i++){
		printf("%d ", arr[i]);
	}
	
}
