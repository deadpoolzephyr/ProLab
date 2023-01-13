#include <graphics.h>
#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

main(){
    string tercih,tercih2;
    int giris=0,cikis=0;
    int secim;
    int x=1,y=1,z=1,t=1;
    int aa=1,bb=1,cc=1,dd=1;

	initwindow(800,600);
	readimagefile("map1.jpg",25,25,325,325);
	readimagefile("map2.jpg",350,25,650,325);

	printf("Harita seciniz(1-2):");
	scanf("%d",&secim);

	closegraph();

    if(secim==1){
		initwindow(650,650);
		readimagefile("harita1.jpg",25,25,625,625);

		printf("\tHaritanin Giris-Cikis Yollari\t\n");
		x_sec:
		cout<<"x caddesi giris caddesi mi cikis caddesi mi?(giris-cikis):";
		cin>>tercih;

		if(tercih=="giris"){
            printf("x caddesi giris caddesi olmustur.\n");
            giris++;
        }else if (tercih=="cikis"){
            printf("x caddesi cikis caddesi olmustur.\n");
            x=0;
            cikis++;
        }else{
            printf("Tanimsiz deger girdiniz.\n");
            goto x_sec;
        }

        y_sec:
        cout<<"y caddesi giris caddesi mi cikis caddesi mi?(giris-cikis)";
		cin>>tercih;

		if(tercih=="giris"){
            printf("y caddesi giris caddesi olmustur.\n");
            giris++;
        }else if (tercih=="cikis"){
            printf("y caddesi cikis caddesi olmustur.\n");
            y=0;
            cikis++;
        }else{
            printf("Tanimsiz deger girdiniz.\n");
            goto y_sec;
        }

        z_sec:
        cout<<"z caddesi giris caddesi mi cikis caddesi mi?(giris-cikis)";
		cin>>tercih;

		if(tercih=="giris"){
            if(giris>1){
            goto z_sec;}
            else{
            printf("z caddesi giris caddesi olmustur.\n");
            giris++;}
         }else if (tercih=="cikis"){
            if(cikis>1){
            goto z_sec;}
            else{
            printf("z caddesi cikis caddesi olmustur.\n");
            z=0;
            cikis++;}
        }else{
            printf("Tanimsiz deger girdiniz.\n");
            goto z_sec;
        }

        t_sec:
        cout<<"t caddesi giris caddesi mi cikis caddesi mi?(giris-cikis)";
		cin>>tercih;

		if(tercih=="giris"){
            if(giris>1){
            goto t_sec;}
            else{
            printf("t caddesi giris caddesi olmustur.\n");
            }
        }else if (tercih=="cikis"){
            if(cikis>1){
            goto t_sec;}
            else{
            printf("t caddesi cikis caddesi olmustur.\n");
            t=0;
            }
        }else{
            printf("Tanimsiz deger girdiniz.\n");
            goto t_sec;
        }

        printf("Harita giris, cikisleri belirlendi.\n\n");

        for( int j = 0 ; j <= 15 ; j++ ){

             //X
             line(325,105,325,125);
             if(x==1){
                line(325,126,320,121); //-Y
                line(325,126,330,121); //-Y
             }else{
                line(325,104,320,109); //Y
                line(325,104,330,109); //Y
             }


             //Y
             line(525,325,545,325);
             if(y==1){
                line(524,325,529,320); //-X
                line(524,325,529,330); //-X
             }else{
                line(546,325,541,320); //X
                line(546,325,541,330); //X
             }

             //Z
             line(325,525,325,545);
             if(z==1){
                line(325,524,320,529); //Y
                line(325,524,330,529); //Y
             }else{
                line(325,546,320,541); //-Y
                line(325,546,330,541); //-Y
             }

             //T
             line(105,325,125,325);
             if(z==1){
                line(126,325,121,320); //X
                line(126,325,121,330); //X
             }else{
                line(104,325,109,320); //-X
                line(104,325,109,330); //-X
             }

             setcolor(j);
             delay(100);
             //if ( j == 15 ) j = 2;
        }

        printf("\tCaddelerin Yonunun Belirlenmesi\t\n");

        a_sec:
		cout<<"a caddesinin baslangic noktasi?(t-x):";
		cin>>tercih;
		cout<<"a caddesinin yonu ?(t-x):";
		cin>>tercih2;

		if(tercih=="t" && tercih2=="x"){
            printf("a caddesinin yonu belirlenmistir.\n");
        }else if (tercih=="x" && tercih2=="t"){
            printf("a caddesinin yonu belirlenmistir.\n");
            aa=0;
        }else if ((tercih=="x" && tercih2=="x") || (tercih=="t" && tercih2=="t")){
            printf("Baslangic noktasi ile yon ayni olamaz.\n");
            goto a_sec;
        }else{
            printf("Tanimsiz deger girdiniz.\n");
            goto a_sec;
        }

        b_sec:
		cout<<"b caddesinin baslangic noktasi?(x-y):";
		cin>>tercih;
		cout<<"b caddesinin yonu ?(x-y):";
		cin>>tercih2;

		if(tercih=="y" && tercih2=="x"){
            printf("b caddesinin yonu belirlenmistir.\n");
        }else if (tercih=="x" && tercih2=="y"){
            printf("b caddesinin yonu belirlenmistir.\n");
            bb=0;
        }else if ((tercih=="x" && tercih2=="x") || (tercih=="y" && tercih2=="y")){
            printf("Baslangic noktasi ile yon ayni olamaz.\n");
            goto b_sec;
        }else{
            printf("Tanimsiz deger girdiniz.\n");
            goto b_sec;
        }

        c_sec:
		cout<<"c caddesinin baslangic noktasi?(t-z):";
		cin>>tercih;
		cout<<"c caddesinin yonu ?(t-z):";
		cin>>tercih2;

		if(tercih=="z" && tercih2=="t"){
            printf("c caddesinin yonu belirlenmistir.\n");
        }else if (tercih=="t" && tercih2=="z"){
            printf("c caddesinin yonu belirlenmistir.\n");
            cc=0;
        }else if ((tercih=="t" && tercih2=="t") || (tercih=="z" && tercih2=="z")){
            printf("Baslangic noktasi ile yon ayni olamaz.\n");
            goto c_sec;
        }else{
            printf("Tanimsiz deger girdiniz.\n");
            goto c_sec;
        }

        d_sec:
		cout<<"d caddesinin baslangic noktasi?(y-z):";
		cin>>tercih;
		cout<<"d caddesinin yonu ?(y-z):";
		cin>>tercih2;

		if(tercih=="z" && tercih2=="y"){
            printf("d caddesinin yonu belirlenmistir.\n");
        }else if (tercih=="y" && tercih2=="z"){
            printf("d caddesinin yonu belirlenmistir.\n");
            dd=0;
        }else if ((tercih=="y" && tercih2=="y") || (tercih=="z" && tercih2=="z")){
            printf("Baslangic noktasi ile yon ayni olamaz.\n");
            goto d_sec;
        }else{
            printf("Tanimsiz deger girdiniz.\n");
            goto d_sec;
        }

        printf("Haritadaki caddelerin yonleri belirlendi.\n\n");

        for( int j = 0 ; j <= 15 ; j++ ){

             //A
             line(202,233,224,211);
             if(aa==1){
                line(224,211,216,211); //UST
                line(224,211,224,219); //UST
             }else{
                line(202,233,202,225); //ALT
                line(202,233,210,233); //ALT
             }


             //B
             line(429,210,451,232);
             if(bb==1){
                line(429,210,429,218); //UST
                line(429,210,438,210); //UST
             }else{
                line(451,232,443,232); //ALT
                line(451,232,451,224); //ALT
             }

             //C
             line(202,417,224,439);
             if(cc==1){
                line(202,417,202,425); //UST
                line(202,417,210,417); //UST
             }else{
                line(224,439,216,439); //ALT
                line(224,439,224,431); //ALT
             }

             //D
             line(429,440,451,418);
             if(dd==1){
                line(451,418,443,418); //UST
                line(451,418,451,426); //UST
             }else{
                line(429,440,429,432); //ALT
                line(429,440,437,440); //ALT
             }

             setcolor(j);
             delay(100);
             //if ( j == 15 ) j = 2;
        }

        cout<<"a caddesinin baslangic noktasi?(t-x):";
		cin>>tercih;

    }else if(secim==2){
		initwindow(800,600);
		readimagefile("map2.jpg",25,25,325,325);
        printf("Harita seciniz(1-2):");
    }else{
       printf("Yanlis Secim");
    }


}
