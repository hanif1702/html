/*
Program		: Loopwhile3.c
Author		: 3411181007, nabil hanif abdul aziz
Deskripsi	: program while memunculkan bilangan genap yang habis dibagi m sebanyak N
Tanggal		: 17 Oktober 2018
*/

#include<conio.h>
#include<stdio.h>

int main(){
	//kamus
	int N, i, j, m;
	//algoritma
	printf("Masukan N :"), scanf("%d", &N);
	printf("Masukan m :"), scanf("%d", &m);
	if(N>0){
		i=1;
		j=0;
		while(i<=N){
			j=j+2;
			if(j%m==0){
				printf("%d \n", j);
				i++;
			}
		}
		
}
}
