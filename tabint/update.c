/*
Program		: tabint.c
Author		: 3411181007, nabil hanif abdul aziz
Deskripsi	: program memunculkan tipe bentukan update tabel terbalik
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
		int hi,lo,tmp;
		
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
		for(i=1; i<=mytab.neff; i++){
			printf("<%d>", mytab.T[i]);
		}
		printf("\n UPDATE \n");
		if(N>0){
			lo=1;
			hi=mytab.neff;
			for(i=1; i<=mytab.neff/2; i++){
				tmp=mytab.T[lo];
				mytab.T[lo]=mytab.T[hi];
				mytab.T[hi]=tmp;
				lo++;
				hi--;
			}
			for(i=1; i<=mytab.neff; i++){
				printf("<%d>", mytab.T[i]);
			}
		}
		return 0;
	}

