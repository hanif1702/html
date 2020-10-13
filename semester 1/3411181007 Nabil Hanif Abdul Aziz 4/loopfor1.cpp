/*
Program		: Loopfor1.c
Author		: 3411181007, nabil hanif abdul aziz
Deskripsi	: program memunculkan bintang dari banyak ke sedikit
Tanggal		: 10 Oktober 2018
*/

#include<stdio.h>
#include<conio.h>

	int main(){
		//kamus global
		int i, j, n;
		
		//algoritma
			printf("Masukan jumlah pengulangan : "); scanf("%d" ,&n);
			if(n>0){
				for(i=n;i>=1;i--){
					for(j=i; j>=1; j--){
						printf("*");
				}
				printf("\n");
				}
			}
			else{
				printf("N yang dimasukan tidak valid");
			}
			return 0;
	}

