//preprocessor
#include <stdio.h>
#include <conio.h>
#include "boolean.h"

//main driver
	int main() {
		//kamus
		int panjang, lebar;
		int luas;
		int keliling;
		//Algoritma
			printf("masukan panjang:"); scanf("%d",&panjang);
			printf("masukan lebar:"); scanf("%d", &lebar);
			luas = panjang * lebar;
			keliling = 2*(panjang + lebar);
			printf("keliling: %d\n" ,keliling);
			printf("luas:%d", luas);
	
	return 0;
}
