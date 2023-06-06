// function

#include <stdio.h>

// function yang tidak mengembalikan nilai
void salam(char nama[]){
	printf("Assalamualaikum %s", nama);
}

// function yang mengembalikan nilai
int jumlah(int a, int b){
	int hasil = a + b;
	return hasil;
}

int luas_segitiga(){
	
}

int main(){
//	salam("Rizki");
//	int sum = jumlah(10 , 20);
//	printf("%d", sum);
	
	int luas = luas_segitiga(10, 20);
	printf("Luas segitiga: %d", luas);

}
