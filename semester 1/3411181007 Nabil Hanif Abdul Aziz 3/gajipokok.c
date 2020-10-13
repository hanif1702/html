#include<conio.h>
#include<stdio.h>

int main(){
	//kamus
		int gol, masker, gatot, tunjangan, gapok;
	//algoritma
		printf("Golongan:"); scanf("%d", &gol);
		printf("Masukan Masa Kerja:"); scanf("%d", &masker);
		
			if(gol>0 && gol<=3){
				if(gol == 1){
					gapok = 2000;
				}
				else if (gol == 2){
					gapok = 3000;
				}
				else{
					gapok = 4000;
				}
				if(masker >0){
					if(masker<=12){
						tunjangan = 500;
					}
					else if(masker>12 && masker <= 60){
						tunjangan = 1000;
					}
					else if(masker>60){
						tunjangan = 1500;
					}
				}
				
				gatot = gapok + tunjangan;
				printf("\nGaji Pokok :%d", gapok);
				printf("\nTunjangan :%d", tunjangan);
				printf("\nTotal Gaji :%d", gatot);
	return 0;
}
}
