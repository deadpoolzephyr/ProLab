#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
int x,y,z,t;
char aBas, aYon, bBas, bYon, cBas, cYon, dBas, dYon, eBas, eYon;
int harita;
HaritaSecim:
printf("Harita seciniz (Harita 1 icin 1 - Harita 2 icin 2): \n");
scanf("%d", &harita);






if(harita=1){
	printf("Yollarin giris/cikis yonunu belirleyin. Giris icin 1, Cikis icin 2\n\n");

	xSecim:
	printf("X yolu icin: \n");
	scanf("%d", &x);
		if(x==1){
			printf("X yolu giristir.\n");
		}
		else if(x==2){
			printf("X yolu cikistir.\n");
		}
		else{
			printf("Hatali giris yaptiniz tekrar deneyin.\n");
			goto xSecim;
		}


	ySecim:
	printf("Y yolu icin: \n");
	scanf("%d", &y);
		if(y==1){
			printf("Y yolu giristir.\n");
		}
		else if(y==2){
			printf("Y yolu cikistir.\n");
		}
		else{
			printf("Hatali giris yaptiniz tekrar deneyin.\n");
			goto ySecim;
		}

	zSecim:
	printf("Z yolu icin: \n");
	scanf("%d", &z);
		if(z==1){
			printf("Z yolu giristir.\n");
		}
		else if(z==2){
			printf("Z yolu cikistir.\n");
		}
		else{
			printf("Hatali giris yaptiniz tekrar deneyin.\n");
			goto zSecim;
		}

	tSecim:
	printf("T yolu icin: \n");
	scanf("%d", &t);
		if(t==1){
			printf("T yolu giristir.\n");
		}
		else if(t==2){
			printf("T yolu cikistir.\n");
		}
		else{
			printf("Hatali giris yaptiniz tekrar deneyin.\n");
			goto tSecim;
		}


printf("\nGiris cikis yollari belirlenmistir.\n");
printf("Ara caddelerin yonunu belirleyin:\n\n");

	aYol:
	printf("A yolu icin baslangic noktasi belirleyiniz. (x-t) \n");
	scanf(" %c", &aBas);
	printf("A yolu icin yon belirleyiniz. (x-t) \n");
	scanf(" %c", &aYon);

		if((aBas=='x') && (aYon=='t')){
			printf("A yolu icin baslangic noktasi ve yon belirlenmistir.\n");
		}
		else if((aBas=='t') && (aYon=='x')){
			printf("A yolu icin baslangic noktasi ve yon belirlenmistir.\n");
		}
		else{
			printf("Hatali giris yaptiniz tekrar deneyin.\n");
			goto aYol;
		}

	bYol:
	printf("B yolu icin baslangic noktasi belirleyiniz. (x-y) \n");
	scanf("%c", &bBas);
	printf("B yolu icin yon belirleyiniz. (x-y) \n");
	scanf("%c", &bYon);
		if(bBas==x && bYon==y){
			printf("A yolu icin baslangic noktasi ve yon belirlenmistir.\n");
		}
		else if(bBas==y && bYon==x){
			printf("A yolu icin baslangic noktasi ve yon belirlenmistir.\n");
		}
		else{
			printf("Hatali giris yaptiniz tekrar deneyin.\n");
			goto bYol;
		}

	cYol:
	printf("C yolu icin baslangic noktasi belirleyiniz. (t-z) \n");
	scanf("%c", &cBas);
	printf("C yolu icin yon belirleyiniz. (t-z) \n");
	scanf("%c", &cYon);
		if(cBas==t && cYon==z){
			printf("C yolu icin baslangic noktasi ve yon belirlenmistir.\n");
		}
		else if(cBas==z && cYon==t){
			printf("C yolu icin baslangic noktasi ve yon belirlenmistir.\n");
		}
		else{
			printf("Hatali giris yaptiniz tekrar deneyin.\n");
			goto cYol;
		}

	dYol:
	printf("D yolu icin baslangic noktasi belirleyiniz. (x-y) \n");
	scanf("%c", &dBas);
	printf("D yolu icin yon belirleyiniz. (x-y) \n");
	scanf("%c", &dYon);
		if(dBas==z && dYon==y){
			printf("D yolu icin baslangic noktasi ve yon belirlenmistir.\n");
		}
		else if(dBas==y && dYon==z){
			printf("D yolu icin baslangic noktasi ve yon belirlenmistir.\n");
		}
		else{
			printf("Hatali giris yaptiniz tekrar deneyin.\n");
			goto dYol;
		}

}


















else if(harita==2){
	printf("Yollarin giris/cikis yonunu belirleyin. Giris icin 1, Cikis icin 2\n\n");

	XSecim:
	printf("X yolu icin: \n");
	scanf("%d", &x);
		if(x==1){
			printf("X yolu giristir.\n");
		}
		else if(x==2){
			printf("X yolu cikistir.\n");
		}
		else{
			printf("Hatali giris yaptiniz tekrar deneyin.\n");
			goto XSecim;
		}


	YSecim:
	printf("Y yolu icin: \n");
	scanf("%d", &y);
		if(y==1){
			printf("Y yolu giristir.\n");
		}
		else if(y==2){
			printf("Y yolu cikistir.\n");
		}
		else{
			printf("Hatali giris yaptiniz tekrar deneyin.\n");
			goto YSecim;
		}

	ZSecim:
	printf("Z yolu icin: \n");
	scanf("%d", &z);
		if(z==1){
			printf("Z yolu giristir.\n");
		}
		else if(z==2){
			printf("Z yolu cikistir.\n");
		}
		else{
			printf("Hatali giris yaptiniz tekrar deneyin.\n");
			goto ZSecim;
		}

	TSecim:
	printf("T yolu icin: \n");
	scanf("%d", &t);
		if(t==1){
			printf("T yolu giristir.\n");
		}
		else if(t==2){
			printf("T yolu cikistir.\n");
		}
		else{
			printf("Hatali giris yaptiniz tekrar deneyin.\n");
			goto TSecim;
		}


printf("\nGiris cikis yollari belirlenmistir.\n");
printf("Ara caddelerin yonunu belirleyin:\n\n");

	AYol:
	printf("A yolu icin baslangic noktasi belirleyiniz. (x-t) \n");
	scanf("%c", &aBas);
	printf("A yolu icin yon belirleyiniz. (x-t) \n");
	scanf("%c", &aYon);
		if(aBas==x && aYon==t){
			printf("A yolu icin baslangic noktasi ve yon belirlenmistir.\n");
		}
		else if(aBas==t && aYon==x){
			printf("A yolu icin baslangic noktasi ve yon belirlenmistir.\n");
		}
		else{
			printf("Hatali giris yaptiniz tekrar deneyin.\n");
			goto AYol;
		}

	BYol:
	printf("B yolu icin baslangic noktasi belirleyiniz. (x-y) \n");
	scanf("%c", &bBas);
    printf("B yolu icin yon belirleyiniz. (x-y) \n");
	scanf("%c", &bYon);
		if(bBas==x && bYon==y){
			printf("A yolu icin baslangic noktasi ve yon belirlenmistir.\n");
		}
		else if(bBas==y && bYon==x){
			printf("A yolu icin baslangic noktasi ve yon belirlenmistir.\n");
		}
		else{
			printf("Hatali giris yaptiniz tekrar deneyin.\n");
			goto BYol;
		}

	CYol:
	printf("C yolu icin baslangic noktasi belirleyiniz. (t-z) \n");
	scanf("%c", &cBas);
    printf("C yolu icin yon belirleyiniz. (t-z) \n");
	scanf("%c", &cYon);
		if(cBas==t && cYon==z){
			printf("C yolu icin baslangic noktasi ve yon belirlenmistir.\n");
		}
		else if(cBas==z && cYon==t){
			printf("C yolu icin baslangic noktasi ve yon belirlenmistir.\n");
		}
		else{
			printf("Hatali giris yaptiniz tekrar deneyin.\n");
			goto CYol;
		}

	DYol:
	printf("D yolu icin baslangic noktasi belirleyiniz. (x-y) \n");
	scanf("%c", &dBas);
	printf("D yolu icin yon belirleyiniz. (x-y) \n");
	scanf("%c", &dYon);
		if(dBas==z && dYon==y){
			printf("D yolu icin baslangic noktasi ve yon belirlenmistir.\n");
		}
		else if(dBas==y && dYon==z){
			printf("D yolu icin baslangic noktasi ve yon belirlenmistir.\n");
		}
		else{
			printf("Hatali giris yaptiniz tekrar deneyin.\n");
			goto DYol;
		}

	EYol:
	printf("E yolu icin baslangic noktasi belirleyiniz. (t-y) \n");
	scanf("%c", &eBas);
	printf("E yolu icin yon belirleyiniz. (t-y) \n");
	scanf("%c", &eYon);
		if(eBas==t && eYon==y){
			printf("E yolu icin baslangic noktasi ve yon belirlenmistir.\n");
		}
		else if(eBas==y && eYon==t){
			printf("E yolu icin baslangic noktasi ve yon belirlenmistir.\n");
		}
		else{
			printf("Hatali giris yaptiniz tekrar deneyin.\n");
			goto EYol;
		}

}
else{
    printf("Hatali giris yaptiniz tekrar deneyin.");
    goto HaritaSecim;
}

return 0;
}
