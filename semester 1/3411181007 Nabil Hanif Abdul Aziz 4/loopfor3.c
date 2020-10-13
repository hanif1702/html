/*
Program		: Loopfor3.c
Author		: 3411181007, nabil hanif abdul aziz
Deskripsi	: program untuk memunculkan bilangan ganjil s/d n
Tanggal		: 10 Oktober 2018
*/

#include<stdio.h>
#include<conio.h>

	int main(){
		//kamus global
		int i, n;
		
		//algoritma
			printf("Masukan jumlah pengulangan : "); scanf("%d",&n);
			for(i=1; i<=n; i++){
				if(i%2 !=0){
				printf("%d \n", i);
			}
			}
					printf("\n");
			return 0;
	}
