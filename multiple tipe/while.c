/*
Program		: while.c
Author		: 3411181007, Nabil Hanif Abdul Aziz
Deskripsi	: 
Tanggal		: 28 November 2018
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
#define nMax 10

typedef struct{
	int abs, ord;
	}Point;

typedef struct{
	Point Pawal, Pakhir;
	}Garis;
	
typedef struct{
	Garis Tg[nMax+1];
	int neff;
	}TabGaris;
	
//prototype
void CreateTab(TabGaris *T);
void AddElmTab(TabGaris *T, Garis G);
void CetakTab(TabGaris T);
float PanjangGaris(TabGaris T, int x);
	
//main driver
int main(){
	//kamus
	TabGaris MyTab;
	int x1, y1, x2, y2;
	Garis G;
	//algoritma

	while(x1 !=999 && y1 !=999){
	CreateTab(&MyTab);
	printf("\nx1 :"); scanf("%d", &x1);
	printf("y1 :"); scanf("%d", &y1);
	printf("x2 :"); scanf("%d", &x2);
	printf("y2 :"); scanf("%d", &y2);
	G.Pawal.abs=x1;
	G.Pawal.ord=y1;
	G.Pakhir.abs=x2;
	G.Pakhir.ord=y2;
	
	AddElmTab(&MyTab, G);
	CetakTab(MyTab);
}
}
//realisasi prototype
void CreateTab(TabGaris *T){
	(*T).neff=0;
}

void AddElmTab(TabGaris *T, Garis G){
	if((*T).neff<nMax){
		(*T).neff++;
		(*T).Tg[(*T).neff]=G;
	}
}

void CetakTab(TabGaris T){
	//kamus
	int i;
	int x1,y1,x2,y2;
	float pjg;
	//Algoritma
	for(i=1; i<=T.neff; i++){
		x1=T.Tg[i].Pawal.abs;
		y1=T.Tg[i].Pawal.ord;
		x2=T.Tg[i].Pakhir.abs;
		y2=T.Tg[i].Pakhir.ord;
		printf("G[P1(%d,%d);P2(%d,%d)]",x1,y1,x2,y2);
		pjg=PanjangGaris(T,i);
		printf("\nPanjang: %.2f", pjg);
}
}

float PanjangGaris(TabGaris T, int x){
	//kamus
	float jarak;
	int x1, y1, x2, y2;
	//algoritma
	x1=T.Tg[x].Pawal.abs;
	y1=T.Tg[x].Pawal.ord;
	x2=T.Tg[x].Pakhir.abs;
	y2=T.Tg[x].Pakhir.ord;
	jarak=sqrt(((y2-y1)*(y2-y1)+(x2-x1)*(x2-x1)));
	return(jarak);
}
