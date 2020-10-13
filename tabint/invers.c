/*
Program		: tabint.c
Author		: 3411181007, nabil hanif abdul aziz
Deskripsi	: program memunculkan tipe bentukan invers terbalik
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
		
		//algoritma
		
		mytab.neff=0;
		printf("Masukan Bilangan :"); scanf("%d", &N);
		while(N!=999){
			if(mytab.neff < nMax){
				mytab.neff++;
				mytab.T[mytab.neff]=N;
			}
			printf("Masukan Bilangan :"), scanf("%d", &N);
		}
		for(i=mytab.neff; i>=1; i--){
			printf("%d", mytab.T[i]);
		}
		return 0;
	}

