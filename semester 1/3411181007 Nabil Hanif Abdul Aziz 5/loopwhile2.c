/*
Program		: Loopwhile2.c
Author		: 3411181007, nabil hanif abdul aziz
Deskripsi	: program while memunculkan bilangan habis dibagi 3 sebanyak N
Tanggal		: 17 Oktober 2018
*/

#include<conio.h>
#include<stdio.h>

int main(){
	//kamus
	int N, i, j ;
	//algoritma
	printf("Masukan N :"), scanf("%d", &N);
	if(N>0){
		i=1;
		j=0;
		while(i<=N){
			j=j+1;
			if(j%3==0){
				printf("%d \n", j);
				i++;
			}
		}
		
}
}
