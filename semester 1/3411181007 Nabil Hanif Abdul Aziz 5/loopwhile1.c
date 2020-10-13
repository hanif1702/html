/*
Program		: Loopwhile1.c
Author		: 3411181007, nabil hanif abdul aziz
Deskripsi	: program while memunculkan bilangan ganjil sebanyak N kali
Tanggal		: 17 Oktober 2018
*/

#include<conio.h>
#include<stdio.h>

int main(){
	//kamus
	int N, i, j ;
	//algoritma
	printf("Masukan N :"), scanf("%d", &N);
	i=1;
	j=1;
	while(i<=N){
		i=i;
		printf("<%d>", j);
		printf("\n");
		j=j+2;
		i++;
	}
	return 0;
}
