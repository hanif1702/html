/*
Program		: array1.c
Author		: 3411181007, nabil hanif abdul aziz
Deskripsi	: program array1
Tanggal		: 17 Oktober 2018
*/

#include<conio.h>
#include<stdio.h>

#define nMax 10

int main(){
	//kamus
	int T[nMax + 1];
	int i, j;
	int N;
	//algoritma
	i = 0;
	printf("Masukan Bilangan :"); scanf("%d", &N);
	while(N!=999){
		if(i<=nMax){
			i++;
			T[i]=N;
		}
		printf("Masukan bilangan :"); scanf("%d", &N);
	}
	if(i>0){
		for(j=i; j>=1; j--){
			printf("<%d>", T[j]);
		}
	}
	return 0;
}
