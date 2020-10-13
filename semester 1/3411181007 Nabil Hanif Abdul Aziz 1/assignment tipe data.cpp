/*
Program		: assigmentNTipeData.c
Author		: 3411181007, nabil hanif abdul aziz
Deskripsi	: program ini berisi contoh sederhana untuk mendefinisikan variable-variable bulat (short int, int, long int), karakter dan bilangan desimal
Tanggal		: 19 September 2018
*/

#include <stdio.h>
int main () {
	/* Kamus Data */
	short ks;
	int ki;
	long kl;
	char c;
	float x;
	//float x;
	
	/* Algoritma */
	ks = 1;
	ki = 10;
	kl = 10000;
	c = 'z';
	x = 1.55;
	printf("Karakter %c\n", c) ;
	printf("Bilangan short integer %d\n", ki);
	printf("Bilangan integer %d\n", ks);
	printf("Bilangan long integer %d\n", kl);
	printf("Bilangan desimal %f\n", x);
	return 0;
}
