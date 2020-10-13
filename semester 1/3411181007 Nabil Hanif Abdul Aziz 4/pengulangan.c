/*
Program		: Loopfor.c
Author		: 3411181007, nabil hanif abdul aziz
Deskripsi	: program untuk mengulang suatu aksi
Tanggal		: 10 Oktober 2018
*/

#include<stdio.h>
#include<conio.h>

	int main(){
		//kamus global
		int i, j, n;
		
		//algoritma
			printf("Masukan jumlah pengulangan :"); scanf("%d",&n);
			for(i=1; i<=n;i++){
				printf("iterasi ke : %d\n",i);
			}
					printf("\n");
			for(i=1;i<=n;i++){
				for(j=1; j<=i; j++){
					printf("*");
				}
				printf("\n");
			}
			return 0;
	}
