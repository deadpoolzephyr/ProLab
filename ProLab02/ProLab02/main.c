#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

struct devre {
    char kapi[4];
    char kapiTuru[4];
    int girisSayisi;
    int giris[10];
    int cikis[1];
    float tepkiSuresi;
};

int main()
{
    struct devre;

    FILE* d01 = NULL;
    FILE* d02 = NULL;
    FILE* d03 = NULL;
    FILE* d04 = NULL;

        d01 = fopen("devre.txt", "r");
        d02 = fopen("deger.txt", "r");
        d03 = fopen("komut1.txt", "r+");
        d04 = fopen("log_komut1.txt", "r+");

    printf("<Kapi Turu> <Giris Sayisi> <Cikis> <Girisler> <Tepki Suresi(nsn)>\n\n");

    if(d01 == NULL)
    {
        printf("Dosya bulunamadi\n");
    }
    else
    {

int k=1;
char c;

        int ch = fgetc(d01);
        while(ch != EOF){
        c=getc(d01);
        if(c=='\n'){
        k++;
        }
        putchar(ch);
        ch = fgetc(d01);
        }

        struct devre devre1[k];
        fscanf(d01, "%s %s %d %d %d %f", devre1.kapi, devre1.kapiTuru, &devre1.girisSayisi, &devre1.cikis, &devre1.giris , &devre1.tepkiSuresi);

    if(d02 == NULL)
    {
        printf("Dosya bulunamadi\n");
    }



        printf("\n\n");
        fclose(d02);
        fclose(d01);
    }


    return 0;
}


/*

if(kapiTuru=='AND' || kapiTuru=='and'){
if(girisSayisi==1){
1>1
0>0
}

if(girisSayisi==2){
1   1>1
1   0>0
0   1>0
0   0>0
}

if(girisSayisi==3){
1   1   1>1
1   1   0>0
1   0   1>0
1   0   0>0
0   1   1>0
0   1   0>0
0   0   1>0
0   0   0>0
}

}
if(kapiTuru=='OR' || kapiTuru=='or'){
if(girisSayisi==1){
1>1
0>0
}

if(girisSayisi==2){
1   1>1
1   0>1
0   1>1
0   0>0
}

if(girisSayisi==3){
1   1   1>1
1   1   0>1
1   0   1>1
1   0   0>1
0   1   1>1
0   1   0>1
0   0   1>1
0   0   0>0
}

}
if(kapiTuru=='XOR' || kapiTuru=='xor'){
if(girisSayisi==1){
1>1
0>0
}

if(girisSayisi==2){
1   1>0
1   0>1
0   1>1
0   0>0
}

if(girisSayisi==3){
1   1   1>1
1   1   0>0
1   0   1>0
1   0   0>1
0   1   1>0
0   1   0>1
0   0   1>1
0   0   0>0
}

}
if(kapiTuru=='NAND' || kapiTuru=='nand'){
if(girisSayisi==1){
1>0
0>1
}

if(girisSayisi==2){
1   1>0
1   0>1
0   1>1
0   0>1
}

if(girisSayisi==3){
1   1   1>0
1   1   0>1
1   0   1>1
1   0   0>1
0   1   1>1
0   1   0>1
0   0   1>1
0   0   0>1
}

}
if(kapiTuru=='NOR' || kapiTuru=='nor'){
if(girisSayisi==1){
1>0
0>1
}

if(girisSayisi==2){
1   1>0
1   0>0
0   1>0
0   0>1
}

if(girisSayisi==3){
1   1   1>0
1   1   0>0
1   0   1>0
1   0   0>0
0   1   1>0
0   1   0>0
0   0   1>0
0   0   0>1
}

}
if(kapiTuru=='NOT' || kapiTuru=='not'){
if(girisSayisi==1){
1>0
0>1
}

}
*/

/*
giris (giris kapilari)
cikis (cikis kapilari)
kapi (kapi türü) (giris sayisi) (çikislar) (girisler) (kapinin girislere cevap verme süresi)
son



and or xor not nand nor

AND		OR		XOR
1 1	1	1 1	1	1 1	0
1 0	0	1 0	1	1 0	1
0 1	0	0 1	1	0 1	1
0 0	0	0 0	0	0 0	0

NAND		NOR		NOT
1 1	0	1 1	0	1	0
1 0	1	1 0	0	0	1
0 1	1	0 1	0
0 0	1	0 0	1
*/

/*

if(girisSayisi==1){
1
0
}

if(girisSayisi==2){
1   1
1   0
0   1
0   0
}

if(girisSayisi==3){
1   1   1
1   1   0
1   0   1
1   0   0
0   1   1
0   1   0
0   0   1
0   0   0
}

if(girisSayisi>4){
    printf("4'ten buyuk giris sayisi hesaplanamamaktadir.");
}
if(girisSayisi<1){
    printf("0 veya negatif deger girilemez.");
}
k=girisSayisi;
int giris[k];

*/


