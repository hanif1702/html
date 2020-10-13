/*
Program		: Loopfor4.c
Author		: 3411181007, nabil hanif abdul aziz
Deskripsi	: program memunculkan bintang dari sedikit ke banyak
Tanggal		: 10 Oktober 2018
*/

#include<stdio.h>
#include<conio.h>

	int main(){
		//kamus global
		int i, j, n, s;
		
		//algoritma
			printf("Masukan jumlah pengulangan : "); scanf("%d" ,&n);
			
				for(i=1; i<=n; i++){
					
					s=n-i;
					for(j=1; j<=s; j++){
						printf(" ");
				}
				for(j=1; j<=i; j++)
					printf("*");
					printf("\n");
			}
			
			return 0;
	}

