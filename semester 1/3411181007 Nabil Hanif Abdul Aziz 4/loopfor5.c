/*
Program		: loopfor5.c
Author		: 3411181007, Nabil Hanif Abdul Aziz
Deskripsi	: program memunculkan bintang yang berlawanan
Tanggal		: 10 oktober 2018
*/

#include<stdio.h>
#include<conio.h>

	int main(){
		//kamus global
		int i,j,n,s;
		
		//algoritma
			printf("Masukan jumlah bilangan  : "); scanf("%d",&n);
			
				for(i=1; i<=n; i++)
				{
					s=n-i;
					for(j=1; j<=s; j++){
						printf(" ");
					}
					for(j=1; j<=i; j++)
						printf("*");
						printf("\n");
				}
				
				for(i=n; i>=1; i--)
				{
					s=n;
					for(j=1; j<=s; j++){
						printf(" ");
					}
					for(j=1; j<=i; j++)
						printf("*");
						printf("\n");
				}
		return 0;
	}
	
