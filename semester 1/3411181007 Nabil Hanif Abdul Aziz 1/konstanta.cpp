/*
Program		: konstanta.c
Author		: 3411181007, nabil hanif abdul aziz
Deskripsi	: program membaca jari-jari lingkaran, kemudian menghitung luas lingkaran dengan rumus L = Pr^2
Tanggal		: 19 September 2018
*/

#include <stdio.h>
int main () {
	/* Kamus Data */
	const float PI = 3.1415;
	float r, luas;
	
	/* Algoritma */
	// Baca Data
	printf("jari-jari lingkaran = \n") ;
	scanf("%f", &r);
	
	// Hitung Luas dan cetak hasil 
	luas = PI * r * r;
	printf("Luas Lingkaran dengan jari-jari %f = %f\n", r, luas);
	return 0;
}
