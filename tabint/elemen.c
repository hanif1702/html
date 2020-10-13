/*
Program		: tabint.c
Author		: 3411181007, nabil hanif abdul aziz
Deskripsi	: program memunculkan tipe bentukan
Tanggal		: 07 Nopember 2018
*/

#include<conio.h>
#include<stdio.h>

#define nMax 10

//pembentukan type
typedef struct{
	int T[nMax+1];
	int neff;
	}tabint;
	
	//main driver
	int main(){
		//kamus
		tabint mytab;
		int N;
		int i;
		int jumlah;
		
		//algoritma
		
		mytab.neff=0;
		jumlah=0;
		printf("Masukan Bilangan :"); scanf("%d", &N);
		while(N!=999){
			if(mytab.neff < nMax){
				mytab.neff++;
				mytab.T[mytab.neff]=N;
			}
			printf("Masukan Bilangan :"), scanf("%d", &N);
		}
		
		/* jumlah tabel */
			printf("\njumlah tabel \n");
			for(i=1; i<=mytab.neff; i++){
		}
		printf("%d", mytab.neff);
		
		/* jumlah elemen */
		printf("\njumlah elemen \n");
		for(i=1; i<=mytab.neff; i++){
			jumlah=jumlah + mytab.T[i];
	}
	printf("%d", jumlah);
		return 0;
	}

