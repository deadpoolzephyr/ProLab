#include <stdio.h>
#include <stdlib.h>


int main(){

	int x, y, z, t, xYog, yYog, zYog, tYog, aYog, bYog, cYog, dYog, eYog;
	char aBas, aYon, bBas, bYon, cBas, cYon, dBas, dYon, eBas, eYon;
	int harita;
	float G[5][6];

	HaritaSecim:
	printf("Harita seciniz (Harita 1 icin 1 - Harita 2 icin 2): \n");
	scanf("%d", &harita);

	if(harita==1){
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

			if((x==1) && (y==1) && (z==2) && (t==2)){
			}
			else if((x==1) && (y==2) && (z==1) && (t==2)){
			}
			else if((x==1) && (y==2) && (z==2) && (t==1)){
			}
			else if((x==2) && (y==1) && (z==1) && (t==2)){
			}
			else if((x==2) && (y==1) && (z==2) && (t==1)){
			}
			else if((x==2) && (y==2) && (z==1) && (t==1)){
			}
			else{
				printf("Hatali giris yaptiniz. Lutfen 2 giris 2 cikis giriniz.");
				goto xSecim;
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
		scanf(" %c", &bBas);
		printf("B yolu icin yon belirleyiniz. (x-y) \n");
		scanf(" %c", &bYon);

			if(bBas=='x' && bYon=='y'){
				printf("A yolu icin baslangic noktasi ve yon belirlenmistir.\n");
			}
			else if(bBas=='y' && bYon=='x'){
				printf("A yolu icin baslangic noktasi ve yon belirlenmistir.\n");
			}
			else{
				printf("Hatali giris yaptiniz tekrar deneyin.\n");
				goto bYol;
			}

		cYol:
		printf("C yolu icin baslangic noktasi belirleyiniz. (z-t) \n");
		scanf(" %c", &cBas);
		printf("C yolu icin yon belirleyiniz. (z-t) \n");
		scanf(" %c", &cYon);

			if(cBas=='t' && cYon=='z'){
				printf("C yolu icin baslangic noktasi ve yon belirlenmistir.\n");
			}
			else if(cBas=='z' && cYon=='t'){
				printf("C yolu icin baslangic noktasi ve yon belirlenmistir.\n");
			}
			else{
				printf("Hatali giris yaptiniz tekrar deneyin.\n");
				goto cYol;
			}

		dYol:
		printf("D yolu icin baslangic noktasi belirleyiniz. (y-z) \n");
		scanf(" %c", &dBas);
		printf("D yolu icin yon belirleyiniz. (y-z) \n");
		scanf(" %c", &dYon);

			if(dBas=='z' && dYon=='y'){
				printf("D yolu icin baslangic noktasi ve yon belirlenmistir.\n");
			}
			else if(dBas=='y' && dYon=='z'){
				printf("D yolu icin baslangic noktasi ve yon belirlenmistir.\n");
			}
			else{
				printf("Hatali giris yaptiniz tekrar deneyin.\n");
				goto dYol;
			}

		printf("X yolunun arac yogunlugunu giriniz.");
		scanf("%d", &xYog);

		printf("Y yolunun arac yogunlugunu giriniz.");
		scanf("%d", &yYog);

		printf("Z yolunun arac yogunlugunu giriniz.");
		scanf("%d", &zYog);

		printf("T yolunun arac yogunlugunu giriniz.");
		scanf("%d", &tYog);

		printf("A yolunun arac yogunlugunu giriniz.");
		scanf("%d", &aYog);

		printf("B yolunun arac yogunlugunu giriniz.");
		scanf("%d", &bYog);

		printf("C yolunun arac yogunlugunu giriniz.");
		scanf("%d", cYog);

		printf("D yolunun arac yogunlugunu giriniz.");
		scanf("%d", &dYog);


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
		scanf(" %c", &aBas);
		printf("A yolu icin yon belirleyiniz. (x-t) \n");
		scanf(" %c", &aYon);
			if(aBas=='x' && aYon=='t'){
				printf("A yolu icin baslangic noktasi ve yon belirlenmistir.\n");
			}
			else if(aBas=='t' && aYon=='x'){
				printf("A yolu icin baslangic noktasi ve yon belirlenmistir.\n");
			}
			else{
				printf("Hatali giris yaptiniz tekrar deneyin.\n");
				goto AYol;
			}

		BYol:
		printf("B yolu icin baslangic noktasi belirleyiniz. (x-y) \n");
		scanf(" %c", &bBas);
	    printf("B yolu icin yon belirleyiniz. (x-y) \n");
		scanf(" %c", &bYon);
			if(bBas=='x' && bYon=='y'){
				printf("A yolu icin baslangic noktasi ve yon belirlenmistir.\n");
			}
			else if(bBas=='y' && bYon=='x'){
				printf("A yolu icin baslangic noktasi ve yon belirlenmistir.\n");
			}
			else{
				printf("Hatali giris yaptiniz tekrar deneyin.\n");
				goto BYol;
			}

		CYol:
		printf("C yolu icin baslangic noktasi belirleyiniz. (z-t) \n");
		scanf(" %c", &cBas);
	    printf("C yolu icin yon belirleyiniz. (z-t) \n");
		scanf(" %c", &cYon);
			if(cBas=='t' && cYon=='z'){
				printf("C yolu icin baslangic noktasi ve yon belirlenmistir.\n");
			}
			else if(cBas=='z' && cYon=='t'){
				printf("C yolu icin baslangic noktasi ve yon belirlenmistir.\n");
			}
			else{
				printf("Hatali giris yaptiniz tekrar deneyin.\n");
				goto CYol;
			}

		DYol:
		printf("D yolu icin baslangic noktasi belirleyiniz. (y-z) \n");
		scanf(" %c", &dBas);
		printf("D yolu icin yon belirleyiniz. (y-z) \n");
		scanf(" %c", &dYon);
			if(dBas=='z' && dYon=='y'){
				printf("D yolu icin baslangic noktasi ve yon belirlenmistir.\n");
			}
			else if(dBas=='y' && dYon=='z'){
				printf("D yolu icin baslangic noktasi ve yon belirlenmistir.\n");
			}
			else{
				printf("Hatali giris yaptiniz tekrar deneyin.\n");
				goto DYol;
			}

		EYol:
		printf("E yolu icin baslangic noktasi belirleyiniz. (y-t) \n");
		scanf(" %c", &eBas);
		printf("E yolu icin yon belirleyiniz. (y-t) \n");
		scanf(" %c", &eYon);
			if(eBas=='t' && eYon=='y'){
				printf("E yolu icin baslangic noktasi ve yon belirlenmistir.\n");
			}
			else if(eBas=='y' && eYon=='t'){
				printf("E yolu icin baslangic noktasi ve yon belirlenmistir.\n");
			}
			else{
				printf("Hatali giris yaptiniz tekrar deneyin.\n");
				goto EYol;
			}

		printf("X yolunun arac yogunlugunu giriniz.");
		scanf("%d", &xYog);

		printf("Y yolunun arac yogunlugunu giriniz.");
		scanf("%d", &yYog);

		printf("Z yolunun arac yogunlugunu giriniz.");
		scanf("%d", &zYog);

		printf("T yolunun arac yogunlugunu giriniz.");
		scanf("%d", &tYog);

		printf("A yolunun arac yogunlugunu giriniz.");
		scanf("%d", &aYog);

		printf("B yolunun arac yogunlugunu giriniz.");
		scanf("%d", &bYog);

		printf("C yolunun arac yogunlugunu giriniz.");
		scanf("%d", cYog);

		printf("D yolunun arac yogunlugunu giriniz.");
		scanf("%d", &dYog);

		printf("E yolunun arac yogunlugunu giriniz.");
		scanf("%d", &eYog);

	}
	else{
	    printf("Hatali giris yaptiniz tekrar deneyin.");
	    goto HaritaSecim;
	}

	return 0;
}

/*

	if(x=1 && aBas='t' && aYon='x' && bBas='y' && bYon='x'){
		printf("Hatali giris! Lütfen girdiginiz yol yonlerine dikkat ediniz.");
	}
	if(t=1 && aBas='x' && aYon='t' && cBas='z' && cYon='t'){
		printf("Hatali giris! Lütfen girdiginiz yol yonlerine dikkat ediniz.");
	}
	if(y=1 && bBas='x' && bYon='y' && dBas='z' && dYon='y'){
		printf("Hatali giris! Lütfen girdiginiz yol yonlerine dikkat ediniz.");
	}
	if(z=1 && cBas='t' && cYon='z' && dBas='y' && bYon='z'){
		printf("Hatali giris! Lütfen girdiginiz yol yonlerine dikkat ediniz.");
	}
	if(t=1 && aBas='x' && bYon='t' && cBas='z' && cYon='t' && eBas='y' && eYon='t'){
		printf("Hatali giris! Lütfen girdiginiz yol yonlerine dikkat ediniz.");
	}
	if(y=1 && bBas='x' && bYon='y' && dBas='z' && dYon='y' && eBas='t' && eYon='y'){
		printf("Hatali giris! Lütfen girdiginiz yol yonlerine dikkat ediniz.");
	}

*/

/*

	if((x==1) && (y==1) && (z==-1) && (t==-1))
else if((x==1) && (y==-1) && (z==1) && (t==-1))
else if((x==1) && (y==-1) && (z==-1) && (t==1))
else if((x==-1) && (y==1) && (z==1) && (t==-1))
else if((x==-1) && (y==1) && (z==-1) && (t==1))
else if((x==-1) && (y==-1) && (z==1) && (t==1))
else{
    printf("Hatali giris yaptiniz. Lutfen 2 giris 2 cikis giriniz.");
	goto xSecim;
    }

	*/


/*

	if(z==1 && cBas=='t' && cYon=='z' && dBas=='y' && bYon=='z'){
    printf("Hatali giris! Lutfen girdiginiz yol yonlerine dikkat ediniz.\n\n");
	}
	if(z==-1 && cBas=='z' && cYon=='t' && dBas=='z' && bYon=='y'){
		printf("Hatali giris! Lutfen girdiginiz yol yonlerine dikkat ediniz.\n\n");
	}
	if(t==1 && aBas=='x' && bYon=='t' && cBas=='z' && cYon=='t' && eBas=='y' && eYon=='t'){
		printf("Hatali giris! Lutfen girdiginiz yol yonlerine dikkat ediniz.\n\n");
	}
	if(t==-1 && aBas=='t' && aYon=='x' && cBas=='t' && cYon=='z' && eBas=='t' && eYon=='y'){
		printf("Hatali giris! Lutfen girdiginiz yol yonlerine dikkat ediniz.\n\n");
	}
	if(y==1 && bBas=='x' && bYon=='y' && dBas=='z' && dYon=='y' && eBas=='t' && eYon=='y'){
		printf("Hatali giris! Lutfen girdiginiz yol yonlerine dikkat ediniz.\n\n");
	}
	if(y==-1 && bBas=='y' && bYon=='x' && dBas=='y' && dYon=='z' && eBas=='y' && eYon=='t'){
		printf("Hatali giris! Lutfen girdiginiz yol yonlerine dikkat ediniz.\n\n");
	}

*/

/*
	if(x==-1 && aBas=='x' && aYon=='t' && bBas=='x' && bYon=='y'){
		printf("Hatali giris! Lutfen girdiginiz yol yonlerine dikkat ediniz.\n");
	goto AYol;
	}
	if(t==-1 && aBas=='t' && aYon=='x' && cBas=='t' && cYon=='z'){
		printf("Hatali giris! Lutfen girdiginiz yol yonlerine dikkat ediniz.\n");
	goto AYol;
	}
	if(y==-1 && bBas=='y' && bYon=='x' && dBas=='y' && dYon=='z'){
		printf("Hatali giris! Lutfen girdiginiz yol yonlerine dikkat ediniz.\n\n");
	goto AYol;
	}
	if(z==-1 && cBas=='z' && cYon=='t' && dBas=='z' && bYon=='y'){
		printf("Hatali giris! Lutfen girdiginiz yol yonlerine dikkat ediniz.\n\n");
	goto AYol;
	}
	if(t==-1 && aBas=='t' && aYon=='x' && cBas=='t' && cYon=='z' && eBas=='t' && eYon=='y'){
		printf("Hatali giris! Lutfen girdiginiz yol yonlerine dikkat ediniz.\n\n");
	goto AYol;
	}
	if(y==-1 && bBas=='y' && bYon=='x' && dBas=='y' && dYon=='z' && eBas=='y' && eYon=='t'){
		printf("Hatali giris! Lutfen girdiginiz yol yonlerine dikkat ediniz.\n\n");
	goto AYol;
	}
*/

/*

if((x==1) && (y==1) && (z==-1) && (t==-1)){
xYog+yYog=zYog+tYog;
}
else if((x==1) && (y==-1) && (z==1) && (t==-1)){
xYog+zYog=yYog+tYog;
}
else if((x==1) && (y==-1) && (z==-1) && (t==1)){
xYog+tYog=zYog+yYog;
}
else if((x==-1) && (y==1) && (z==1) && (t==-1)){
xYog+tYog=zYog+yYog;
}
else if((x==-1) && (y==1) && (z==-1) && (t==1)){
xYog+zYog=yYog+tYog;
}
else if((x==-1) && (y==-1) && (z==1) && (t==1)){
xYog+yYog=zYog+tYog;
}

*/

/*

if(aBas=='x' && aYon=='t'){
a=1;
}
if(aBas=='t' && aYon=='x'){
a=2;
}
if(bBas=='x' && bYon=='y'){
b=1;
}
if(bBas=='y' && bYon=='x'){
b=2;
}
if(cBas=='t' && cYon=='z'){
c=1;
}
if(cBas=='z' && cYon=='t'){
c=2;
}
if(dBas=='y' && dYon=='z'){
d=1;
}
if(dBas=='z' && bYon=='y'){
d=2;
}
if(eBas=='t' && eYon=='y'){
e=1;
}
if(eBas=='y' && eYon=='t'){
e=2;
}

*/

/*

if(x==1 && a==1 && b==1){
    xYog=aYog+bYog;
}
if(x==1 && a==1 && b==-1){
    xYog=aYog-bYog;
}
if(x==1 && a==-1 && b==1){
    xYog=bYog-aYog;
}
if(x==-1 && a==-1 && b==-1){
    xYog=aYog+bYog;
}
if(x==-1 && a==1 && b==-1){
    xYog=bYog-aYog;
}
if(x==-1 && a==-1 && b==1){
    xYog=aYog-bYog;
}
if(y==-1 && b==-1 &&  d==-1){
    yYog=bYog-dYog;
}
if(y==1 && b==1 && d==1){
    yYog=dYog-bYog;
}
if(y==1 && b==-1 && d==1){
    yYog=bYog+dYog;
}
if(y==-1 && b==-1 && d==-1){
    yYog=dYog-bYog;
}
if(y==-1 && b==1 && d==-1){
    yYog=bYog+dYog;
}
if(y==-1 && b==1 && d==1){
    yYog=bYog-dYog;
}
if(z==1 && c==-1 && d==-1){
    zYog=cYog+dYog;
}
if(z==1 && c==1 && d==-1){
    zYog=dYog-cYog;
}
if(z==1 && c==-1 && d==1){
    zYog=cYog-dYog;
}
if(z==-1 && c==1 && d==1){
    zYog=cYog+dYog;
}
if(z==-1 && c==-1 && d==1){
    zYog=dYog-cYog;
}
if(z==-1 && c==1 && d==-1){
    zYog=cYog-dYog;
}
if(t==1 && a==1 && c==1){
    tYog=aYog+cYog;
}
if(t==1 && a==1 && c==-1){
    tYog=aYog-cYog;
}
if(t==1 && a==-1 && c==1){
    tYog=cYog-aYog;
}
if(t==-1 && a==-1 && c==-1){
    tYog=aYog+cYog;
}
if(t==-1 && a==1 && c==-1){
    tYog=cYog-aYog;
}
if(t==-1 && a==-1 && c==1){
    tYog=aYog+cYog;
}
if(y==-1 && b==-1 &&  d==-1 && e==1){
    yYog=bYog-dYog-eYog;
}
if(y==-1 && b==-1 &&  d==-1 && e==-1){
    yYog=bYog-dYog+eYog;
}
if(y==1 && b==1 && d==1 && e==1){
    yYog=dYog-bYog-eYog;
}
if(y==1 && b==1 && d==1 && e==-1){
    yYog=dYog-bYog+eYog;
}
if(y==1 && b==-1 && d==1 && e==1){
    yYog=bYog+dYog-eYog;
}
if(y==1 && b==-1 && d==1 && e==-1){
    yYog=bYog+dYog+eYog;
}
if(y==-1 && b==-1 && d==-1 && e==1){
    yYog=dYog-bYog-eYog;;
}
if(y==-1 && b==-1 && d==-1 && e==-1){
    yYog=dYog-bYog+eYog;
}
if(y==-1 && b==1 && d==-1 && e==1){
    yYog=bYog+dYog-eYog;
}
if(y==-1 && b==1 && d==-1 && e==-1){
    yYog=bYog+dYog+eYog;
}
if(y==-1 && b==1 && d==1 && e==1){
    yYog=bYog-dYog-eYog;
}
if(y==-1 && b==1 && d==1 && e==-1){
    yYog=bYog-dYog+eYog;
}
if(t==1 && a==1 && c==1 && e==1){
    tYog=aYog+cYog+eYog;
}
if(t==1 && a==1 && c==1 && e==-1){
    tYog=aYog+cYog;-eYog
}
if(t==1 && a==1 && c==-1 && e==1){
    tYog=aYog-cYog+eYog;
}
if(t==1 && a==1 && c==-1 && e==-1){
    tYog=aYog-cYog-eYog;
}
if(t==1 && a==-1 && c==1 && e==1){
    tYog=cYog-aYog+eYog;
}
if(t==1 && a==-1 && c==1 && e==-1){
    tYog=cYog-aYog-eYog;
}
if(t==-1 && a==-1 && c==-1 && e==1){
    tYog=aYog+cYog+eYog;
}
if(t==-1 && a==-1 && c==-1 && e==-1){
    tYog=aYog+cYog-eYog;
}
if(t==-1 && a==1 && c==-1 && e==1){
    tYog=cYog-aYog+eYog;
}
if(t==-1 && a==1 && c==-1 && e==-1){
    tYog=cYog-aYog-eYog;
}
if(t==-1 && a==-1 && c==1 && e==1){
    tYog=aYog+cYog+eYog;
}
if(t==-1 && a==-1 && c==1 && e==-1){
    tYog=aYog+cYog-eYog;
}

*/

/*if((x==1) && (y==1) && (z==-1) && (t==-1)){
    xYog+yYog=zYog+tYog;
}
else if((x==1) && (y==-1) && (z==1) && (t==-1)){
    xYog+zYog=yYog+tYog;
}
else if((x==1) && (y==-1) && (z==-1) && (t==1)){
    xYog+tYog=yYog+zYog;
}
else if((x==-1) && (y==1) && (z==1) && (t==-1)){
    xYog+tYog=yYog+zYog;
}
else if((x==-1) && (y==1) && (z==-1) && (t==1)){
    xYog+zYog=yYog+tYog;
}
else if((x==-1) && (y==-1) && (z==1) && (t==1)){
    xYog+yYog=zYog+tYog;
}

*/
