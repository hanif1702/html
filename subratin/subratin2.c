/*
Program		: subratin2.c
Author		: 3411181007, Nabil Hanif Abdul Aziz
Deskripsi	: program berfungsi untuk mencetak hasil
ganjil yang telah disisipkan dengan menggunakan procedure
dan function
Tanggal		: 14 November 2018
*/

#include <stdio.h>
#include <conio.h>
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
void CetakTab(TabInt T);
/* 
I.S : T terdefinisi sembarang, 
	tidak kosong.
F.S : Semua Elemen T dicetak
*/

void CetakGanjil(TabInt T);
/* 
I.S : T terdefinisi sembarang, 
	tidak kosong.
F.S : Semua Elemen T dicetak secara ganjil
*/

//main driver
int main (){
	//kamus
	TabInt MyTab;
	int N;
	//algoritma
	
	CreateTab(&MyTab);
	printf("Masukan Bilangan :"); scanf("%d", &N);
	while(N!=999){
		AddElm(&MyTab, N);
		printf("Masukan Bilangan :"); scanf("%d", &N);
	}
	CetakTab(MyTab);
	printf ("\n");
	CetakGanjil(MyTab);
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

void CetakTab(TabInt T){
	//kamus
	int i;
	//Algoritma
	for(i=1; i<=T.neff; i++){
		printf("<%d>", T.T[i]);
	}
}

void CetakGanjil(TabInt T){
	//kamus
	int i;
	//Algoritma
	for(i=1; i<=T.neff; i++){
		if (T.T[i]%2 ==1){
		printf("<%d>", T.T[i]);
			}
	}
}
