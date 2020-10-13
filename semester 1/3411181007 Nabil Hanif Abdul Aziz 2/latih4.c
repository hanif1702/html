//preprocessor
#include <stdio.h>
#include <conio.h>
#include "boolean.h"
#include <math.h>

//main driver
	int main () {
		//kamus
		int x1, y1, x2, y2;
		float jarak;
		//algoritma
			printf("masukan x1:"); scanf("%d",&x1);
			printf("masukan y1:"); scanf("%d",&y1);
			printf("masukan x2:"); scanf("%d",&x2);
			printf("masukan y2:"); scanf("%d",&y2);
			jarak = sqrt (((y2-y1)*(y2-y1))+((x2-x1)*(x2-x1)));
			printf("jarak dua titik = %.2f", jarak);
		return 0;
	}
