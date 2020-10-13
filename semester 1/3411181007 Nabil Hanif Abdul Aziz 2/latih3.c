//preprocessor
#include <stdio.h>
#include <conio.h>
#include "boolean.h"

//main driver
	int main () {
		//kamus
		int m, n;
		int luas;
		//algoritma
			printf("masukan m:"); scanf("%d",&m);
			printf("masukan n:"); scanf("%d",&n);
			luas = m * n;
			printf("luas bujursangkar = %d", luas);
		return 0;
	}
