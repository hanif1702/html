#include<conio.h>
#include<stdio.h>

int main(){
	//Kamus
	int nilai;
	
	//Algoritma
	printf("Masukan Nilai:"); scanf("%d", &nilai);
	
	if(nilai >80){
		printf("A");
	}
	else if(nilai >65){
		printf("B");
	}
	else if(nilai >55){
		printf("C");
	}
	else if(nilai >45){
		printf("D");
	}
	else{
		printf("E");
	}
	return 0;
}
