/*
Program		: subratin4.c
Author		: 3411181007, Nabil Hanif Abdul Aziz
Deskripsi	: program berfungsi untuk mencari 
tata letak elemen data yang telah dimasukan
sebelumnya dengan menggunakan procedure dan
function

Tanggal		: 14 November 2018
*/

#include <stdio.h>
#include <conio.h>
#include "boolean.h"
#define nMax 10

//pembentukan tipe
typedef struct {
	int T[nMax+1];
	int neff;
}TabInt;

//prototype
void CreateTab(TabInt *T);
/*
I.S : T terdefinisi, belum diketahui
F.S : T berupa tabel kosong
*/

void AddElm(TabInt*T, int x);
/*
I.S : T terdefinisi sembarang,
	mungkin kosong.
F.S : T bertambah satu elemen
	bernilai x
	*/

int SumElm(TabInt T);
/* Mengirim penjumlahan
nilai elemenT
*/

int CariElm(TabInt T, int x);
/*Mengirim index dari elemen
bernilai x, jika ditemukan,
dan 0 jika x tidak ditemukan
*/


//main driver
int main (){
	//kamus
	TabInt MyTab;
	int N, idx;
	//algoritma
	
	CreateTab(&MyTab);
	printf("Masukan Bilangan :"); scanf("%d", &N);
	while(N!=999){
		AddElm(&MyTab, N);
		printf("Masukan Bilangan :"); scanf("%d", &N);
	}
	printf("Masukan Bilangan yang Dicari :"); scanf("%d", &N);
	idx= CariElm(MyTab, N);
	if(idx !=0){
		printf("Bilangan %d, ditemukan di baris ke %d" ,N, idx);
	}
	else{
		printf("Tidak ditemukan!");
	}
	return 0;
	}

//realisasi protoype
void CreateTab(TabInt *T){
	(*T).neff=0;
}

void AddElm(TabInt *T, int x){
	if((*T).neff<nMax){
		(*T).neff++;
		(*T).T[(*T).neff]=x;
	}
}

int SumElm(TabInt T){
	//kamus
	int jum;
	int i;
	
	//Algoritma
	jum=0;
	for(i=1; i<=T.neff; i++){
	jum=jum + T.T[i];
	}
return(jum);
}

int CariElm(TabInt T, int x){
	//kamus
	int i;
	boolean ketemu;
	
	//Algortma
		ketemu=false;
		i=1;
		while(i<=T.neff && !ketemu){
			if(T.T[i] == x){
				ketemu = true;
			}
			else{
				i++;
			}
		}
		if(ketemu){
			return(i);
		}
		else{
			return 0;
		}
}

