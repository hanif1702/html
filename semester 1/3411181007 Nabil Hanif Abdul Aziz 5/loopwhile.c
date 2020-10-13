/*
Program		: Loopwhile.c
Author		: 3411181007, nabil hanif abdul aziz
Deskripsi	: program while pengulangan bilangan
Tanggal		: 17 Oktober 2018
*/

#include<conio.h>
#include<stdio.h>

int main(){
	//kamus
	int N, i ;
	//algoritma
	printf("Masukan N :"), scanf("%d", &N);
	i=1;
	while(i<=N){
		printf("<%d>", i);
		printf("\n");
		i++;
	}
	return 0;
}
