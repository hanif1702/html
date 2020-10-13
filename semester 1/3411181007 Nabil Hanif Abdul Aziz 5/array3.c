/*
Program		: array3.c
Author		: 3411181007, nabil hanif abdul aziz
Deskripsi	: program array3
Tanggal		: 17 Oktober 2018
*/

#include<conio.h>
#include<stdio.h>

#define nMax 10

int main(){
//kamus
int T[nMax + 1];
int i, j, k, l;
int N, lo, hi, tmp;

//algoritma
i=0;
printf("Masukan bilangan :");
scanf("%d", &N);

while(N!=999){
	if(i<=nMax){
		i++;
		T[i]=N;
	}
	printf("Masukan bilangan :");
	scanf("%d", &N);
}
for(j=1; j<=i; j++){
	printf("<%d>", T[j]);
}
printf("\n UPDATE \n");

if(N>0){
	lo=1;
	hi=i;
	for(j=1; j<=i/2; j++){
		tmp=T[lo];
		T[lo]=T[hi];
		T[hi]=tmp;
		lo++;
		hi--;
	}
	for(j=1; j<=i; j++){
		printf("<%d>", T[j]);
	}
	
	}
	return 0;
}







