#include<conio.h>
#include<stdio.h>

int main(){
	//kamus
		int a, b, c;
	//algoritma
	printf("Masukan A :"); scanf("%d",&a);
	printf("Masukan B :"); scanf("%d",&b);
	printf("Masukan C :"); scanf("%d",&c);
		
	if (a>b && b>c) printf("\nranking 1 : a \nranking 2 : b \nranking 3 :c");
	else if (a>b && c>b) printf("\nranking 1 : a \nranking 2 : c \nranking 3 :b");
	else if (b>a && a>c) printf("\nranking 1 : b \nranking 2 : a \nranking 3 :c");
	else if (b>c && c>a) printf("\nranking 1 : b \nranking 2 : c \nranking 3 :a");
	else if (c>a && a>c) printf("\nranking 1 : c \nranking 2 : a \nranking 3 :b");
	else
		printf("\nranking 1 : c \nranking 2 : b \nranking 3 : a");
		return 0;
	
	}
		
		

