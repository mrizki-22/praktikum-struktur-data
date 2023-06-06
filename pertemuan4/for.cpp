#include <stdio.h>

int main(){
	for(int i = 1; i <= 10; i++){
		if(i % 2 == 1){
			printf("%d \n", i);
		}	
	}	

	for(int i = 10; i >= 0; i-- ){
		printf("Nilai i = %d \n", i);
	}
}
