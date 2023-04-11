#include <stdio.h>

int main(){
	int nilai;
	
	printf("Masukkan nilai 0-100: ");
	scanf("%d", &nilai);
	
	if(nilai >= 90 && nilai <= 100){
		printf("Selamat anda lulus dengan nilai memuaskan");
	}else if(nilai >= 70 && nilai <= 89){
		printf("Selamat anda lulus");
	}else if(nilai < 70 && nilai >= 0){
		printf("Maaf anda tidak lulus");
	}else{
		printf("ERROR! Masukkan angka 0-100");
	}
}
