#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct devre {
    char kapi[4];
    char kapiTuru[4];
    int girisSayisi;
    int giris[10];
    int cikis[1];
    int tepkiSuresi;
};

int main()
{

    FILE* d01 = NULL;
    FILE* d02 = NULL;
    FILE* d03 = NULL;
    FILE* d04 = NULL;
    FILE* d05 = NULL;

        d01 = fopen("devre.txt", "r+");
        d02 = fopen("deger.txt", "r+");
        d03 = fopen("baska_dosya02.txt", "r+");
        d04 = fopen("komut1.txt", "r+");
        d05 = fopen("log_komut1.txt", "r+");

    printf("<Kapi Turu> <Giris Sayisi> <Cikis> <Girisler> <Tepki Suresi(nsn)>\n\n");

int x=1;
char ch;
char yukle, ilkle, ikincil, secim, high, low, simule, hgoster, komut, cikis;
int a, b, c, d, e ,f, k, l, m;
int goster[6]={a,b,c,d,e,f};
int kol[6]={a,b,c,d,e,f};

    a=0;
    b=0;
    c=1;
    d=1;
    e=1;
    f=0;

    if(d01 != NULL){

    printf(">");
    bas1:
    scanf("%c",&yukle);
    if(yukle=='Y' || yukle=='y'){
    printf("Devre.txt dosyasi yuklendi.\n");

        int ch = fgetc(d01);
        while(ch != EOF){
            //putchar(ch);
            ch = fgetc(d01);
            if(ch=='\n'){
                x++;
                }
            }
    struct devre devre1[x];
    fscanf(d01, "%s %s %d %d %d %d\n", devre1[2].kapi, devre1[2].kapiTuru, &devre1[2].girisSayisi, &devre1[2].cikis, &devre1[2].giris , &devre1[2].tepkiSuresi);
    fscanf(d01, "%s %s %d %d %d %d\n", devre1[3].kapi, devre1[3].kapiTuru, &devre1[3].girisSayisi, &devre1[3].cikis, &devre1[3].giris , &devre1[3].tepkiSuresi);
    fscanf(d01, "%s %s %d %d %d %d\n", devre1[4].kapi, devre1[4].kapiTuru, &devre1[4].girisSayisi, &devre1[4].cikis, &devre1[4].giris , &devre1[4].tepkiSuresi);

    }
    else{
        goto bas1;
    }
        //printf("\n\n%d",k);
        }
        else{
        printf("Dosya bulunamadi\n");
    }

    if(d02 != NULL){
    printf(">");
    bas2:
    scanf("%c",&ilkle);
    if(ilkle=='I' || ilkle=='ı'){
    printf("Deger.txt dosyasi yuklendi.\n");

        int ch = fgetc(d02);
        while(ch != EOF){
            putchar(ch);
            ch = fgetc(d02);
            }
        }
        else{
            goto bas2;
        }
    }

        printf("\n");
        printf(">");
        scanf("%c",&secim);
while(scanf("%c", &secim) != 'Ç'){
        if(secim=='H' || secim=='h'){
            printf("H-");
            scanf("%c",&high);
            if(high=='A' || high=='a'){
                kol[0]=1;
            }
            if(high=='B' || high=='b'){
                kol[1]=1;
            }
            if(high=='C' || high=='c'){
                kol[2]=1;
            }
            if(high=='D' || high=='d'){
                kol[3]=1;
            }
            if(high=='E' || high=='e'){
                kol[4]=1;
            }
            if(high=='F' || high=='f'){
                kol[5]=1;
            }
        }
        if(secim=='L' || secim=='l'){
            printf("L-");
            scanf("%c",&low);
            if(low=='A' || low=='a'){
                kol[0]=0;
            }
            if(low=='B' || low=='b'){
                kol[1]=0;
            }
            if(low=='C' || low=='c'){
                kol[2]=0;
            }
            if(low=='D' || low=='d'){
                kol[3]=0;
            }
            if(low=='E' || low=='e'){
                kol[4]=0;
            }
            if(low=='F' || low=='f'){
                kol[5]=0;
            }
        }

if(a==1 && b==1){
    d==0;
}
else if(a==1 && b==0){
    d==0;
}
else if(a==0 && b==1){
    d==0;
}
else if(a==0 && b==0){
    d==1;
}

if(b==1 && c==1){
    e==0;
}
else if(b==1 && c==0){
    e==1;
}
else if(b==0 && c==1){
    e==1;
}
else if(b==0 && c==0){
    e==1;
}

if(d==1 && e==1){
    f==0;
}
else if(d==1 && e==0){
    f==1;
}
else if(d==0 && e==1){
    f==1;
}
else if(d==0 && e==0){
    f==0;
}

        if(secim=='S' || secim=='s'){
            printf(">");
            scanf("%c",&simule);
        }

        if(secim=='G' && secim=='g'){
            printf(">");
            scanf("%c",&goster);
            printf("%d" ,kol);
            }

        if(secim=='G*' && secim=='g*'){
            printf(">");
            scanf("%c",&hgoster);
            printf("%d" ,kol);
        }

        printf(">");
        scanf("%c",&cikis);
        if(cikis=='Ç' || cikis=='ç'){
        printf("Benzetimden cikildi.");
        fclose(d01);
        fclose(d02);
        fclose(d03);
        fclose(d04);
        break;
        }
    }
    return 0;
}


/*
    struct devre devre2[x];
    fscanf(d03, "%s %s %d %d %d %d\n", devre2[2].kapi, devre2[2].kapiTuru, &devre2[2].girisSayisi, &devre2[2].cikis, &devre2[2].giris , &devre2[2].tepkiSuresi);
    fscanf(d03, "%s %s %d %d %d %d\n", devre2[3].kapi, devre2[3].kapiTuru, &devre2[3].girisSayisi, &devre2[3].cikis, &devre2[3].giris , &devre2[3].tepkiSuresi);
    fscanf(d03, "%s %s %d %d %d %d\n", devre2[4].kapi, devre2[4].kapiTuru, &devre2[4].girisSayisi, &devre2[4].cikis, &devre2[4].giris , &devre2[4].tepkiSuresi);

    else{
        printf("Dosya bulunamadi\n");
        }
*/

/*
         if(d03 != NULL){
    printf(">");
    bas3:
    scanf("%c",&ikincil);
    if(ikincil=='İ' || ikincil=='i'){
    printf("baska_dosya.txt dosyasi yuklendi.\n");

        int ch = fgetc(d03);
        while(ch != EOF){
            //putchar(ch);
            ch = fgetc(d03);
            }
        }
        else{
            goto bas3;
        }
    }
    else{
        printf("Dosya bulunamadi\n");
        }
*/


/*

if(kapiTuru=='AND' || kapiTuru=='and'){
if(girisSayisi==1){

}

if(girisSayisi==2){

}

if(girisSayisi==3){

}

}
if(kapiTuru=='OR' || kapiTuru=='or'){
if(girisSayisi==1){

}

if(girisSayisi==2){

}

if(girisSayisi==3){

}

}
if(kapiTuru=='XOR' || kapiTuru=='xor'){
if(girisSayisi==1){

}

if(girisSayisi==2){

}

if(girisSayisi==3){

}

}
if(kapiTuru=='NAND' || kapiTuru=='nand'){
if(girisSayisi==1){

}

if(girisSayisi==2){

}

if(girisSayisi==3){

}

}
if(kapiTuru=='NOR' || kapiTuru=='nor'){
if(girisSayisi==1){

}

if(girisSayisi==2){

}

if(girisSayisi==3){

}

}
if(kapiTuru=='NOT' || kapiTuru=='not'){
if(girisSayisi==1){

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
1 1	0   	1 1	0	1	0
1 0	1   	1 0	0	0	1
0 1	1   	0 1	0
0 0	1   	0 0	1


if(girisSayisi>4){
    printf("4'ten buyuk giris sayisi hesaplanamamaktadir.");
}
if(girisSayisi<1){
    printf("0 veya negatif deger girilemez.");
}
k=girisSayisi;
int giris[k];

*/


