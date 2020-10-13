/*
Program		: insert.c
Author		: 3411181007, Nabil Hanif Abdul Aziz
Deskripsi	: program berfungsi untuk menyisipkan suatu data
pada suatu data yang sudah diisi sebelumnya dengan type data bentukan
Tanggal		: 07 November 2018
*/

#include<conio.h>
#include<stdio.h>
#include "boolean.h"
#define nMax 10


	//pembentukan type
	typedef struct {
			int T[nMax+1];
			int neff;
	}Tabint;
	
	//main driver
	int main (){
		//Kamus
		Tabint MyTab;
		int N;
		int i,x,y,j;
		int jumlah, akhir;
		int ketemu;
		
		//Algoritma
			MyTab.neff=0;
			jumlah=0;
			printf("Masukan Bilangan : "); scanf("%d", &N);
			while(N!=999){
				if(MyTab.neff < nMax){
					MyTab.neff++;
					MyTab.T[MyTab.neff]=N;
				}
			printf("Masukan Bilangan : "); scanf("%d",&N);
		}
		for(i=1; i<=MyTab.neff; i++){
			printf("%d", MyTab.T[i]);
		}
		printf("\n");
		
		//insert after
		printf("Masukan bilangan yang akan disisipkan : "); scanf("%d", &x);
		printf("Masukan bilangan sesudah x : "); scanf("%d", &y);
		
		//cari Y
		ketemu=false;
		i=1;
		while(i<=MyTab.neff && !ketemu){
			if(MyTab.T[i]==y){
				ketemu=true;
			}
			else
			i++;
		}
		if(ketemu){
			//pemindahan angka
			akhir=MyTab.neff;
			for(j=1; j<=MyTab.neff-i; j++){
				MyTab.T[akhir+1]=MyTab.T[akhir];
				akhir--;
			}
			MyTab.T[i+1]=x;
			MyTab.neff++;
		}
		//print
		for(i=1; i<=MyTab.neff; i++){
			printf("%d", MyTab.T[i]);
		}
		
		return 0;
}
