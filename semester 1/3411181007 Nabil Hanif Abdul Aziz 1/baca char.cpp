/*
Program		: bacaChar.c
Author		: 3411181007, nabil hanif abdul aziz
Deskripsi	: program membaca karakter kemudian menuliskan nilai yang dibaca kelayar
Tanggal		: 19 September 2018
*/

#include <stdio.h>
int main () {
	/* Kamus Data */
	char huruf;
	
	/* Algoritma */
	printf("Contoh membaca dan menulis, ketik nilai character: \n") ;
	scanf("%c", &huruf);
	printf("Nilai yang dibaca %c\n", huruf);
	return 1;
}
