//preprocessor
#include <stdio.h>
#include <conio.h>
#include "boolean.h"

//main driver
	int main () {
		//kamus
		int a, b, c;
		int diskriminan;
		int d;
		//Algoritma
			printf("masukan a:"); scanf("%d",&a);
			printf("masukan b:"); scanf("%d",&b);
			printf("masukan c:"); scanf("%d",&c);
			diskriminan = b * b - (4*a*c);
			printf("diskriminan = %d",diskriminan);
			
			return 0;
	}
