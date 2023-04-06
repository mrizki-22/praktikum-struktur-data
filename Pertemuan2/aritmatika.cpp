#include <stdio.h>

int main(){
	int a = 10;
	int b = 3;
	
	int jumlah = a + b;
	printf("Nilai jumlah adalah %d \n", jumlah);
	
	int kurang = a - b;
	printf("Nilai kurang adalah %d \n", kurang);
	
	int kali = a * b;
	printf("Nilai kali adalah %d \n", kali);
	
	float bagi = a / b;
	printf("Nilai bagi adalah %.2f \n", bagi);
	
	int modulo = a % b;
	printf("Nilai modulo adalah %d", modulo);
}
