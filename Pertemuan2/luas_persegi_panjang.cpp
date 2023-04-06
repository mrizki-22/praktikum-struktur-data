#include <stdio.h>

int main(){
//	Inisialisasi variabel
	int panjang, lebar, luas;
	
//	Buat Judul program
	printf("PROGRAM MENGHITUNG LUAS PERSEGI PANJANG\n=======================================\n\n");
	
//	Input panjang
	printf("Masukkan panjang: ");
	scanf("%d", &panjang);
	
//	Input lebar
	printf("Masukkan lebar: ");
	scanf("%d", &lebar);
	
//	Hitung luas
	luas = panjang * lebar;
	
//	Print luas
	printf("Luas persegi panjang adalah %d", luas);
	
}
