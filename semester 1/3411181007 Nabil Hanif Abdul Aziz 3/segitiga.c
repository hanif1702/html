#include<conio.h>
#include<stdio.h>

int main(){
	//kamus
		int a, b, c;
	//algoritma
		printf("Masukan A:"); scanf("%d", &a);
		printf("Masukan B:"); scanf("%d", &b);
		printf("Masukan C:"); scanf("%d", &c);
		
			if(a>0 && b>0 && c>0){
				if(a+b>c && a+c>b && b+c>a)
			printf("Dapat Jadi Segitiga");
		else
		printf("Tidak Mungkin");
		}
	return 0;
}
