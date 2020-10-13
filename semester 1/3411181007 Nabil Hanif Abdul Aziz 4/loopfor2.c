/*
Program		: Loopfor2.c
Author		: 3411181007, nabil hanif abdul aziz
Deskripsi	: program untuk memunculkan bilangan genap sebanyak n kali
Tanggal		: 10 Oktober 2018
*/

#include<stdio.h>
#include<conio.h>

int main(){
		//kamus global
		int i, n, j;
		
		//algoritma
			printf("Masukan jumlah pengulangan :"); scanf("%d",&n);
			j = 2;
			for(i=1; i<=n; i++){
				printf("bilangan genap ke : %d\n",j);
				j = j + 2;
			}
			return 0;
	}
