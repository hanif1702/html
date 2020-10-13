/*
Program		: loopfor6.c
Author		: 3411181007, Nabil Hanif Abdul Aziz
Deskripsi	: program untuk perpangkatan
Tanggal		: 10 oktober 2018
*/

#include<stdio.h>
#include<conio.h>
	int main () {
		//kamus global
			int x,n,i,k;
		//algoritma
		printf("Masukan Bilangan : "); scanf("%d", &x);
		printf("Masukan pangkat : "); scanf("%d", &n);
	
	if(x>0 && n>0){
		for(i=1; i<=n; i++){
			for (i=1; i<=n; i++)
			k=k*x;
		}
		printf ("%d", k);
	}
	else{
			printf("Data tidak valid");
	}
		return 0;
	}
