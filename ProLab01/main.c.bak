#include <stdio.h>
#include <stdlib.h>
#include <allegro.h>
#include <math.h>

void Gaussuygulamasi(int m, int n, double a[m][n], double x[n-1]){
    int i,j,k;
    for(i=0;i<m-1;i++){
        for(k=i+1;k<m;k++){
            if(fabs(a[i][i])<fabs(a[k][i])){
                for(j=0;j<n;j++){
                    double temp;
                    temp=a[i][j];
                    a[i][j]=a[k][j];
                    a[k][j]=temp;
                }
            }
        }
        for(k=i+1;k<m;k++){
            double  term=a[k][i]/ a[i][i];
            for(j=0;j<n;j++){
                a[k][j]=a[k][j]-term*a[i][j];
            }
        }

    }
    for(i=m-1;i>=0;i--){
        x[i]=a[i][n-1];
        for(j=i+1;j<n-1;j++){
            x[i]=x[i]-a[i][j]*x[j];
        }
        x[i]=x[i]/a[i][i];
    }

}
int main(void)
{
      volatile int cikfonk=FALSE;
      void fonk(){cikfonk=TRUE;}
      allegro_init();
      set_gfx_mode(GFX_SAFE, 1280, 720, 0, 0);
      install_keyboard();
      BITMAP *pic;
      pic = load_bitmap("Harita_01.bmp",NULL);
      BITMAP *pic2;
      pic2 = load_bitmap("Harita_10.bmp",NULL);
      BITMAP *pic3;
      pic3 = load_bitmap("Harita_20.bmp",NULL);
      BITMAP *pic4;
      pic4 = load_bitmap("a-2.bmp",NULL);
      BITMAP *pic5;
      pic5 = load_bitmap("a-1.bmp",NULL);
      BITMAP *pic6;
      pic6 = load_bitmap("b-2.bmp",NULL);
      BITMAP *pic7;
      pic7 = load_bitmap("b-1.bmp",NULL);
      BITMAP *pic8;
      pic8 = load_bitmap("c-2.bmp",NULL);
      BITMAP *pic9;
      pic9 = load_bitmap("c-1.bmp",NULL);
      BITMAP *pic10;
      pic10 = load_bitmap("d-2.bmp",NULL);
      BITMAP *pic11;
      pic11 = load_bitmap("d-1.bmp",NULL);
      BITMAP *pic12;
      pic12 = load_bitmap("Harita_11.bmp",NULL);
      BITMAP *pic13;
      pic13 = load_bitmap("Harita_12.bmp",NULL);
      BITMAP *pic14;
      pic14 = load_bitmap("Harita_13.bmp",NULL);
      BITMAP *pic15;
      pic15 = load_bitmap("Harita_14.bmp",NULL);
      BITMAP *pic16;
      pic16 = load_bitmap("Harita_15.bmp",NULL);
      BITMAP *pic17;
      pic17 = load_bitmap("Harita_16.bmp",NULL);
      BITMAP *pic18;
      pic18 = load_bitmap("Harita_21.bmp",NULL);
      BITMAP *pic19;
      pic19 = load_bitmap("Harita_22.bmp",NULL);
      BITMAP *pic20;
      pic20 = load_bitmap("Harita_23.bmp",NULL);
      BITMAP *pic21;
      pic21 = load_bitmap("Harita_24.bmp",NULL);
      BITMAP *pic22;
      pic22 = load_bitmap("Harita_25.bmp",NULL);
      BITMAP *pic23;
      pic23 = load_bitmap("Harita_26.bmp",NULL);
      BITMAP *pic24;
      pic24 = load_bitmap("e-2.bmp",NULL);
      BITMAP *pic25;
      pic25 = load_bitmap("e-1.bmp",NULL);

      while(!cikfonk)
    {
if(key[KEY_ESC])
    fonk();

    int i,j,k,l,m,n,p;
    char yollar[9]={'t','x','y','z','a','b','d','c','e'};
    char yonler[9];
    int arabasay[10]={0},secim,a;
    double gauss[5][10]={0};
    int sayacg=0,sayacc=0;
    draw_sprite(screen,pic , 12.5 , 42);
    clear(pic);
    p1:
    printf("\n------HER SECIMDEN SONRA ACILAN EKRANA TIKLAYINIZ-------\n");
    printf("Harita seciniz:");
    scanf("%d" ,&secim);

    if(secim!=1&&secim!=2) {printf("\nHata!! Tekrar Giriniz\n"); goto p1;}
    fflush(stdin);
    p2:
    sayacg=0;
    sayacc=0;
    if(secim==1){ draw_sprite(screen,pic2 , 12.5 , 42);
    printf("IcerÝ Icin(i) Disari Icin(d) Tuslayiniz\n");
    for(i=0;i<4;i++){
        printf("%c yonunu giriniz:",yollar[i]);
        scanf("%c" ,&yonler[i]);
        fflush(stdin);
        if(yonler[i]!='i'&&yonler[i]!='d') {printf("--i-- veya --d-- Disinda Baska Deger Girmeyiniz\n"); goto p2;}

        fflush(stdin);
        if(yonler[i]=='i'){
    sayacg++;
    printf("(%c Iceri Yon Secildi)\n" ,yollar[i]);
        }


    else if(yonler[i]=='d'){
            printf("(%c Disari Yon Secildi)\n" ,yollar[i]);
    sayacc++;
     }


    }

    if(sayacg>2) {printf("sadece 2 giris olmali\n");  goto p2;  }
    if(sayacc>2) {printf("sadece 2 giris olmali\n");  goto p2; }



    if(yonler[0]=='i'&&yonler[1]=='i') draw_sprite(screen,pic14 , 12.5 , 42);
    if(yonler[0]=='i'&&yonler[2]=='i') draw_sprite(screen,pic17 , 12.5 , 42);
    if(yonler[2]=='i'&&yonler[3]=='i') draw_sprite(screen,pic16 , 12.5 , 42);
    if(yonler[0]=='i'&&yonler[3]=='i') draw_sprite(screen,pic15 , 12.5 , 42);
    if(yonler[1]=='i'&&yonler[3]=='i') draw_sprite(screen,pic13, 12.5 , 42);
    if(yonler[1]=='i'&&yonler[2]=='i') draw_sprite(screen,pic12 , 12.5 , 42);

   char bas,son;
   geri:
   k=0;
    while(k==0){
   printf("a'nin basslangic noktasini giriniz:");
   scanf("%c" ,&bas);
   fflush(stdin);
   printf("a'nin yonunu giriniz:");
   scanf("%c" ,&son);
   fflush(stdin);
   if(bas=='t'&&son=='x'){
        draw_sprite(screen,pic5 , 60 , 93);
        yonler[4]='y';
        k++;
   }else if(bas=='x'&&son=='t'){
    draw_sprite(screen,pic4 , 60 , 93);
       yonler[4]='a';
        k++;}}
    l=0;
    while(l==0){
   printf("b'nin basslangic noktasini giriniz:");
   scanf("%c" ,&bas);
   fflush(stdin);
   printf("b'nin yonunu giriniz:");
   scanf("%c" ,&son);
   fflush(stdin);

   if(bas=='y'&&son=='x'){
        draw_sprite(screen,pic7 , 159 , 93);
        yonler[5]='y';
        l++;
   }else if(bas=='x'&&son=='y'){
    draw_sprite(screen,pic6 , 159 , 93);
       yonler[5]='a';
    l++;}}
    m=0;
    while(m==0){
   printf("d'nin basslangic noktasini giriniz:");
   scanf("%c" ,&bas);
   fflush(stdin);
   printf("d'nin yonunu giriniz:");
   scanf("%c" ,&son);
   fflush(stdin);

   if(bas=='z'&&son=='y'){
        draw_sprite(screen,pic11 , 160 , 193);
        yonler[6]='y';
        m++;
   }else if(bas=='y'&&son=='z'){
        draw_sprite(screen,pic10 , 160 , 193);
       yonler[6]='a';
        m++;}}
    n=0;
    while(n==0){
   printf("c'nin basslangic noktasini giriniz:");
   scanf("%c" ,&bas);
   fflush(stdin);
   printf("c'nin yonunu giriniz:");
   scanf("%c" ,&son);
   fflush(stdin);
   if(bas=='z'&&son=='t'){
        draw_sprite(screen,pic9 , 60 , 190);
        yonler[7]='y';
        n++;
   }else if(bas=='t'&&son=='z'){
    draw_sprite(screen,pic8 , 60 , 190);
       yonler[7]='a';
    n++;}}

if(yonler[0]=='i'&&yonler[4]=='a'&&yonler[7]=='y') {printf("yollar cakisiyor tekrar secim yapiniz\n"); goto geri;}
if(yonler[1]=='i'&&yonler[4]=='y'&&yonler[5]=='y') {printf("yollar cakisiyor tekrar secim yapinizn\n"); goto geri;}
if(yonler[2]=='i'&&yonler[5]=='a'&&yonler[6]=='y') {printf("yollar cakisiyor tekrar secim yapiniz\n"); goto geri;}
if(yonler[3]=='i'&&yonler[6]=='a'&&yonler[7]=='a') {printf("yollar cakisiyor tekrar secim yapiniz\n"); goto geri;}



    for(i=0;i<8;i++){

    printf("%c'nin ortalama arac sayisini giriniz(Bilgi Olmayan Caddeye -1 Giriniz):" ,yollar[i]);
    scanf("%d" ,&arabasay[i]);


   }




    a=8;
    if(yonler[0]=='i'&&yonler[4]=='a'&&yonler[7]=='y'){//t'nin denklimini bulabilmek icin

    printf("cakisma var denklem yok\n");

   }else if(yonler[0]=='i'&&yonler[4]=='a'&&yonler[7]=='a'){

    printf("t=c-a\n");
    if(arabasay[0]==-1)  gauss[0][0]=1;
        else  gauss[0][a]+=arabasay[0]*(-1);

    if(arabasay[4]==-1) gauss[0][4]=1;
        else gauss[0][a]+=arabasay[4]*(-1);

    if(arabasay[7]==-1) gauss[0][7]=-1;
        else gauss[0][a]+=arabasay[7];


   }else if(yonler[0]=='i'&&yonler[4]=='y'&&yonler[7]=='y'){

    printf("t=a-c\n");
    if(arabasay[0]==-1)  gauss[0][0]=1;
        else  gauss[0][a]+=arabasay[0]*(-1);

    if(arabasay[4]==-1) gauss[0][4]=-1;
        else gauss[0][a]+=arabasay[4];

    if(arabasay[7]==-1) gauss[0][7]=1;
        else gauss[0][a]+=arabasay[7]*(-1);



   }else if(yonler[0]=='i'&&yonler[4]=='y'&&yonler[7]=='a'){


        printf("t=c-a\n");
    if(arabasay[0]==-1)  gauss[0][0]=1;
        else  gauss[0][a]+=arabasay[0]*(-1);

    if(arabasay[4]==-1) gauss[0][4]=1;
        else gauss[0][a]+=arabasay[4]*(-1);

    if(arabasay[7]==-1) gauss[0][7]=-1;
        else gauss[0][a]+=arabasay[7];


   }else if(yonler[0]=='d'&&yonler[4]=='a'&&yonler[7]=='a'){
        printf("t=a-c\n");
    if(arabasay[0]==-1)  gauss[0][0]=1;
        else  gauss[0][a]+=arabasay[0]*(-1);

    if(arabasay[4]==-1) gauss[0][4]=-1;
        else gauss[0][a]+=arabasay[4];

    if(arabasay[7]==-1) gauss[0][7]=1;
        else gauss[0][a]+=arabasay[7]*(-1);


   }else if(yonler[0]=='d'&&yonler[4]=='a'&&yonler[7]=='y'){
            printf("t=a+c\n");
    if(arabasay[0]==-1)  gauss[0][0]=1;
        else  gauss[0][a]+=arabasay[0]*(-1);

    if(arabasay[4]==-1) gauss[0][4]=-1;
        else gauss[0][a]+=arabasay[4];

    if(arabasay[7]==-1) gauss[0][7]=-1;
        else gauss[0][a]+=arabasay[7];


   }else if(yonler[0]=='d'&&yonler[4]=='y'&&yonler[7]=='a'){

                           printf("t=0");



   }else if(yonler[0]=='d'&&yonler[4]=='y'&&yonler[7]=='y'){
                   printf("t=c-a\n");
    if(arabasay[0]==-1)  gauss[0][0]=1;
        else  gauss[0][a]+=arabasay[0]*(-1);

    if(arabasay[4]==-1) gauss[0][4]=1;
        else gauss[0][a]+=arabasay[4]*(-1);

    if(arabasay[7]==-1) gauss[0][7]=-1;
        else gauss[0][a]+=arabasay[7];}

    if(yonler[1]=='i'&&yonler[4]=='a'&&yonler[5]=='a'){ //x in denklemini bulabilmek için

                    printf("x=a+b\n");
    if(arabasay[1]==-1)  gauss[1][1]=1;
        else  gauss[1][a]+=arabasay[1]*(-1);

    if(arabasay[4]==-1) gauss[1][4]=-1;
        else gauss[1][a]+=arabasay[4];

    if(arabasay[5]==-1) gauss[1][5]=-1;
        else gauss[1][a]+=arabasay[5];





}else if(yonler[1]=='i'&&yonler[4]=='a'&&yonler[5]=='y'){

                       printf("x=a-b\n");
    if(arabasay[1]==-1)  gauss[1][1]=1;
        else  gauss[1][a]+=arabasay[1]*(-1);

    if(arabasay[4]==-1) gauss[1][4]=-1;
        else gauss[1][a]+=arabasay[4];

    if(arabasay[5]==-1) gauss[1][5]=1;
        else gauss[1][a]+=arabasay[5]*(-1);



}else if(yonler[1]=='i'&&yonler[4]=='y'&&yonler[5]=='y'){
                       printf("cakisma var denklem yok\n");


}else if(yonler[1]=='i'&&yonler[4]=='y'&&yonler[5]=='a'){
                       printf("x=b-a\n");
    if(arabasay[1]==-1)  gauss[1][1]=1;
        else  gauss[1][a]+=arabasay[1]*(-1);

    if(arabasay[4]==-1) gauss[1][4]=1;
        else gauss[1][a]+=arabasay[4]*(-1);

    if(arabasay[5]==-1) gauss[1][5]=-1;
        else gauss[1][a]+=arabasay[5];

}else if(yonler[1]=='d'&&yonler[4]=='a'&&yonler[5]=='a'){
                       printf("x=0\n");


}else if(yonler[1]=='d'&&yonler[4]=='a'&&yonler[5]=='y'){
                       printf("x=b-a\n");
    if(arabasay[1]==-1)  gauss[1][1]=1;
        else  gauss[1][a]+=arabasay[1]*(-1);

    if(arabasay[4]==-1) gauss[1][4]=1;
        else gauss[1][a]+=arabasay[4]*(-1);

    if(arabasay[5]==-1) gauss[1][5]=-1;
        else gauss[1][a]+=arabasay[5];

}else if(yonler[1]=='d'&&yonler[4]=='y'&&yonler[5]=='y'){

                           printf("x=a+b\n");
    if(arabasay[1]==-1)  gauss[1][1]=1;
        else  gauss[1][a]+=arabasay[1]*(-1);

    if(arabasay[4]==-1) gauss[1][4]=-1;
        else gauss[1][a]+=arabasay[4];

    if(arabasay[5]==-1) gauss[1][5]=-1;
        else gauss[1][a]+=arabasay[5];

}else if(yonler[1]=='d'&&yonler[4]=='y'&&yonler[5]=='a'){
                         printf("x=b-a\n");
    if(arabasay[1]==-1)  gauss[1][1]=1;
        else  gauss[1][a]+=arabasay[1]*(-1);

    if(arabasay[4]==-1) gauss[1][4]=1;
        else gauss[1][a]+=arabasay[4]*(-1);

    if(arabasay[5]==-1) gauss[1][5]=-1;
        else gauss[1][a]+=arabasay[5];}

    if(yonler[2]=='i'&&yonler[5]=='a'&&yonler[6]=='y'){//y'nin denklimini bulabilmek icin

                    printf("cakisma var denklem yok\n");


}else if(yonler[2]=='i'&&yonler[5]=='a'&&yonler[6]=='a'){
        printf("y=d-b\n");

if(arabasay[2]==-1)  gauss[2][2]=1;
        else  gauss[2][a]+=arabasay[2]*(-1);

    if(arabasay[5]==-1) gauss[2][5]=1;
        else gauss[2][a]+=arabasay[5]*(-1);

    if(arabasay[6]==-1) gauss[2][6]=-1;
        else gauss[2][a]+=arabasay[6];

}else if(yonler[2]=='i'&&yonler[5]=='y'&&yonler[6]=='a'){

                            printf("y=b+d\n");
    if(arabasay[2]==-1)  gauss[2][2]=1;
        else  gauss[2][a]+=arabasay[2]*(-1);

    if(arabasay[5]==-1) gauss[2][5]=-1;
        else gauss[2][a]+=arabasay[5];

    if(arabasay[6]==-1) gauss[2][6]=-1;
        else gauss[2][a]+=arabasay[6];


}else if(yonler[2]=='i'&&yonler[5]=='y'&&yonler[6]=='y'){

                            printf("y=b-d\n");
    if(arabasay[2]==-1)  gauss[2][2]=1;
        else  gauss[2][a]+=arabasay[2]*(-1);

    if(arabasay[5]==-1) gauss[2][5]=-1;
        else gauss[2][a]+=arabasay[5];

    if(arabasay[6]==-1) gauss[2][6]=1;
        else gauss[2][a]+=arabasay[6]*(-1);

}else if(yonler[2]=='d'&&yonler[5]=='a'&&yonler[6]=='a'){

                            printf("y=b-d\n");
      if(arabasay[2]==-1)  gauss[2][2]=1;
        else  gauss[2][a]+=arabasay[2]*(-1);

    if(arabasay[5]==-1) gauss[2][5]=-1;
        else gauss[2][a]+=arabasay[5];

    if(arabasay[6]==-1) gauss[2][6]=1;
        else gauss[2][a]+=arabasay[6]*(-1);

}else if(yonler[2]=='d'&&yonler[5]=='a'&&yonler[6]=='y'){

                            printf("y=b+d\n");
    if(arabasay[2]==-1)  gauss[2][2]=1;
        else  gauss[2][a]+=arabasay[2]*(-1);

    if(arabasay[5]==-1) gauss[2][5]=-1;
        else gauss[2][a]+=arabasay[5];

    if(arabasay[6]==-1) gauss[2][6]=-1;
        else gauss[2][a]+=arabasay[6];

}else if(yonler[2]=='d'&&yonler[5]=='y'&&yonler[6]=='a'){

                            printf("y=0\n");


}else if(yonler[2]=='d'&&yonler[5]=='y'&&yonler[6]=='y'){

                            printf("y=d-b\n");
    if(arabasay[2]==-1)  gauss[2][2]=1;
        else  gauss[2][a]+=arabasay[2]*(-1);

    if(arabasay[5]==-1) gauss[2][5]=1;
        else gauss[2][a]+=arabasay[5]*(-1);

    if(arabasay[6]==-1) gauss[2][6]=-1;
        else gauss[2][a]+=arabasay[6];

}

    if(yonler[3]=='i'&&yonler[7]=='a'&&yonler[6]=='a'){ //z in denklemini bulabilmek için

                    printf("hata cakisma var\n");

}else if(yonler[3]=='i'&&yonler[7]=='a'&&yonler[6]=='y'){
    printf("z=d-c\n");
     if(arabasay[3]==-1)  gauss[3][3]=1;
        else  gauss[3][a]+=arabasay[3]*(-1);

    if(arabasay[6]==-1) gauss[3][6]=-1;
        else gauss[3][a]+=arabasay[6];

    if(arabasay[7]==-1) gauss[3][7]=1;
        else gauss[3][a]+=arabasay[7]*(-1);



}else if(yonler[3]=='i'&&yonler[7]=='y'&&yonler[6]=='a'){
    printf("z=c-d\n");
     if(arabasay[3]==-1)  gauss[3][3]=1;
        else  gauss[3][a]+=arabasay[3]*(-1);

    if(arabasay[6]==-1) gauss[3][6]=1;
        else gauss[3][a]+=arabasay[6]*(-1);

    if(arabasay[7]==-1) gauss[3][7]=-1;
        else gauss[3][a]+=arabasay[7];

}else if(yonler[3]=='i'&&yonler[7]=='y'&&yonler[6]=='y'){
    printf("z=c+d\n");
     if(arabasay[3]==-1)  gauss[3][3]=1;
        else  gauss[3][a]+=arabasay[3]*(-1);

    if(arabasay[6]==-1) gauss[3][6]=-1;
        else gauss[3][a]+=arabasay[6];

    if(arabasay[7]==-1) gauss[3][7]=-1;
        else gauss[3][a]+=arabasay[7];

}else if(yonler[3]=='d'&&yonler[7]=='a'&&yonler[6]=='a'){
    printf("z=c+d\n");
     if(arabasay[3]==-1)  gauss[3][3]=1;
        else  gauss[3][a]+=arabasay[3]*(-1);

    if(arabasay[6]==-1) gauss[3][6]=-1;
        else gauss[3][a]+=arabasay[6];

    if(arabasay[7]==-1) gauss[3][7]=-1;
        else gauss[3][a]+=arabasay[7];

}else if(yonler[3]=='d'&&yonler[7]=='a'&&yonler[6]=='y'){
    printf("z=c-d\n");
     if(arabasay[3]==-1)  gauss[3][3]=1;
        else  gauss[3][a]+=arabasay[3]*(-1);

    if(arabasay[6]==-1) gauss[3][6]=1;
        else gauss[3][a]+=arabasay[6]*(-1);

    if(arabasay[7]==-1) gauss[3][7]=-1;
        else gauss[3][a]+=arabasay[7];

}else if(yonler[3]=='d'&&yonler[7]=='y'&&yonler[6]=='a'){
    printf("z=d-c\n");
     if(arabasay[3]==-1)  gauss[3][3]=1;
        else  gauss[3][a]+=arabasay[3]*(-1);

    if(arabasay[6]==-1) gauss[3][6]=-1;
        else gauss[3][a]+=arabasay[6];

    if(arabasay[7]==-1) gauss[3][7]=1;
        else gauss[3][a]+=arabasay[7]*(-1);

}else if(yonler[3]=='d'&&yonler[7]=='y'&&yonler[6]=='y'){
    printf("z=0\n");
}

    if(yonler[0]=='i'&&yonler[1]=='i') {printf("t+x=y+z\n");//girisler=cikislar denklemleri icin

            if(yonler[0]==-1)  gauss[4][0]=1;
                else  gauss[4][0]+=arabasay[0]*(-1);

            if(yonler[1]==-1) gauss[4][1]=1;
                else gauss[1][a]+=arabasay[1]*(-1);

            if(yonler[2]==-1) gauss[4][2]=-1;
                else gauss[1][a]+=arabasay[2];

            if(yonler[3]==-1) gauss[4][3]=-1;
                else gauss[4][a]+=arabasay[3];

}   else if(yonler[1]=='i'&&yonler[2]=='i') {  printf("x+y=t+z\n");

            if(yonler[0]==-1)  gauss[4][0]=-1;
                else  gauss[4][0]+=arabasay[0];

            if(yonler[1]==-1) gauss[4][1]=1;
                else gauss[1][a]+=arabasay[1]*(-1);

            if(yonler[2]==-1) gauss[4][2]=1;
                else gauss[1][a]+=arabasay[2]*(-1);

            if(yonler[4]==-1) gauss[4][3]=-1;
                else gauss[4][a]+=arabasay[3];




}   else if(yonler[0]=='i'&&yonler[3]=='i') {  printf("t+z=x+y\n");
            if(yonler[0]==-1)  gauss[4][0]=1;
                else  gauss[4][0]+=arabasay[0]*(-1);

            if(yonler[1]==-1) gauss[4][1]=-1;
                else gauss[1][a]+=arabasay[1];

            if(yonler[2]==-1) gauss[4][2]=-1;
                else gauss[1][a]+=arabasay[2];

            if(yonler[3]==-1) gauss[4][3]=1;
                else gauss[4][a]+=arabasay[3]*(-1);

}   else if(yonler[1]=='i'&&yonler[2]=='i') {  printf("x+y=t+z\n");
            if(yonler[0]==-1)  gauss[4][0]=-1;
                else  gauss[4][0]+=arabasay[0];

            if(yonler[1]==-1) gauss[4][1]=1;
                else gauss[1][a]+=arabasay[1]*(-1);

            if(yonler[2]==-1) gauss[4][2]=1;
                else gauss[1][a]+=arabasay[2]*(-1);

            if(yonler[3]==-1) gauss[4][3]=-1;
                else gauss[4][a]+=arabasay[3];

}   else if(yonler[1]=='i'&&yonler[3]=='i') {  printf("x+z=y+t\n");

            if(yonler[0]==-1)  gauss[4][0]=-1;
                else  gauss[4][0]+=arabasay[0];

            if(yonler[1]==-1) gauss[4][1]=1;
                else gauss[1][a]+=arabasay[1]*(-1);

            if(yonler[2]==-1) gauss[4][2]=-1;
                else gauss[1][a]+=arabasay[2];

            if(yonler[3]==-1) gauss[4][3]=1;
                else gauss[4][a]+=arabasay[3]*(-1);
}   else if(yonler[2]=='i'&&yonler[3]=='i') {  printf("y+z=x+t\n");
            if(yonler[0]==-1)  gauss[4][0]=-1;
                else  gauss[4][0]+=arabasay[0];

            if(yonler[1]==-1) gauss[4][1]=-1;
                else gauss[1][a]+=arabasay[1];

            if(yonler[2]==-1) gauss[4][2]=1;
                else gauss[1][a]+=arabasay[2]*(-1);

            if(yonler[3]==-1) gauss[4][3]=1;
                else gauss[4][a]+=arabasay[3]*(-1);

}






    for(i=0;i<5;i++){
    for(j=0;j<9;j++){

        printf("%.0f ",gauss[i][j]);}
    printf("\n");}




  double x[5];
    Gaussuygulamasi(5,10,gauss,x);
    printf("\nSONUCLAR:\n\n");
    for(i=0;i<10-1;i++){
        printf("x[%d]=\t%lf\n",i+1,x[i]);
    }



    }





    if(secim==2){ draw_sprite(screen,pic3 , 12.5 , 42);
    printf("Iceri Dogru Icin(i) Disari Dogru Icin(d) Tuslayiniz\n");//2.harita için
    for(i=0;i<4;i++){
        printf("%c yonunu giriniz:",yollar[i]);
        scanf("%c" ,&yonler[i]);
        fflush(stdin);
        if(yonler[i]!='i'&&yonler[i]!='d') {printf("--i-- veya --d-- Disinda Baska Deger Girmeyiniz\n"); goto p2;}

        fflush(stdin);
        if(yonler[i]=='i'){
    sayacg++;
            printf("(%c Iceri Yon Secildi)\n" ,yollar[i]);
        }


        else if(yonler[i]=='d'){
            printf("(%c Disari Yon Secildi)\n" ,yollar[i]);
    sayacc++;
        }


    }

    if(sayacg>2) {printf("sadece 2 giris olmali\n");  goto p2;  }
    if(sayacc>2) {printf("sadece 2 giris olmali\n");  goto p2; }



    if(yonler[0]=='i'&&yonler[1]=='i') draw_sprite(screen,pic21 , 12.5 , 42);
    if(yonler[0]=='i'&&yonler[2]=='i') draw_sprite(screen,pic18 , 12.5 , 42);
    if(yonler[2]=='i'&&yonler[3]=='i') draw_sprite(screen,pic19 , 12.5 , 42);
    if(yonler[0]=='i'&&yonler[3]=='i') draw_sprite(screen,pic23 , 12.5 , 42);
    if(yonler[1]=='i'&&yonler[3]=='i') draw_sprite(screen,pic20, 12.5 , 42);
    if(yonler[1]=='i'&&yonler[2]=='i') draw_sprite(screen,pic22 , 12.5 , 42);
   char bas,son;
   geri1:

   k=0;
    while(k==0){
    printf("a'nin basslangic noktasini giriniz:");
    scanf("%c" ,&bas);
    fflush(stdin);
    printf("a'nin yonunu giriniz:");
    scanf("%c" ,&son);
    fflush(stdin);
    if(bas=='t'&&son=='x'){
        draw_sprite(screen,pic5 , 60 , 93);
        yonler[4]='y';
        k++;
   }else if(bas=='x'&&son=='t'){
    draw_sprite(screen,pic4 , 60 , 93);
       yonler[4]='a';
        k++;}}
    l=0;
    while(l==0){
   printf("b'nin basslangic noktasini giriniz:");
   scanf("%c" ,&bas);
   fflush(stdin);
   printf("b'nin yonunu giriniz:");
   scanf("%c" ,&son);
   fflush(stdin);

   if(bas=='y'&&son=='x'){
        draw_sprite(screen,pic7 , 159 , 93);
        yonler[5]='y';
        l++;
   }else if(bas=='x'&&son=='y'){
    draw_sprite(screen,pic6 , 159 , 93);
       yonler[5]='a';
    l++;}}
    m=0;
    while(m==0){
   printf("d'nin basslangic noktasini giriniz:");
   scanf("%c" ,&bas);
   fflush(stdin);
   printf("d'nin yonunu giriniz:");
   scanf("%c" ,&son);
   fflush(stdin);

   if(bas=='z'&&son=='y'){
        draw_sprite(screen,pic11 , 160 , 193);
        yonler[6]='y';
        m++;
   }else if(bas=='y'&&son=='z'){
        draw_sprite(screen,pic10 , 160 , 193);
       yonler[6]='a';
        m++;}}
    n=0;
  while(n==0){
   printf("c'nin basslangic noktasini giriniz:");
   scanf("%c" ,&bas);
   fflush(stdin);
   printf("c'nin yonunu giriniz:");
   scanf("%c" ,&son);
   fflush(stdin);
   if(bas=='z'&&son=='t'){
        draw_sprite(screen,pic9 , 60 , 190);
        yonler[7]='y';
        n++;
   }else if(bas=='t'&&son=='z'){
    draw_sprite(screen,pic8 , 60 , 190);
       yonler[7]='a';
    n++;}}
    p=0;
    while(p==0){    printf("e'nin basslangic noktasini giriniz:");
   scanf("%c" ,&bas);
   fflush(stdin);
   printf("e'nin yonunu giriniz:");
   scanf("%c" ,&son);
   fflush(stdin);
   if(bas=='t'&&son=='y'){
    draw_sprite(screen,pic25 , 100 , 156);
       yonler[8]='r';
        p++;
   }else if(bas=='y'&&son=='t'){
    draw_sprite(screen,pic24 , 100 , 156);
       yonler[8]='l';
        p++;

   }}


if(yonler[0]=='i'&&yonler[4]=='a'&&yonler[7]=='y') {printf("yollar cakisiyor tekrar secim yapiniz\n"); goto geri1;}
if(yonler[1]=='i'&&yonler[4]=='y'&&yonler[5]=='y') {printf("yollar cakisiyor tekrar secim yapiniz\n"); goto geri1;}
if(yonler[2]=='i'&&yonler[5]=='a'&&yonler[6]=='y') {printf("yollar cakisiyor tekrar secim yapiniz\n"); goto geri1;}
if(yonler[3]=='i'&&yonler[6]=='a'&&yonler[7]=='a') {printf("yollar cakisiyor tekrar secim yapiniz\n"); goto geri1;}

if(yonler[0]=='i'&&yonler[4]=='a'&&yonler[7]=='y'&&yonler[8]=='l') {printf("yollar cakisiyor tekrar secim yapiniz\n"); goto geri1;}
if(yonler[2]=='i'&&yonler[5]=='a'&&yonler[6]=='y'&&yonler[8]=='r') {printf("yollar cakisiyor tekrar secim yapiniz\n"); goto geri1;}




   for(i=0;i<9;i++){

    printf("%c'nin ortalama arac sayisini giriniz(Bilgi Olmayan Caddeye -1 Giriniz):" ,yollar[i]);
    scanf("%d" ,&arabasay[i]);


   }
    a=9;

    if(yonler[0]=='i'&&yonler[4]=='a'&&yonler[7]=='y'&&yonler[8]=='r'){//t'nin denklimini bulabilmek icin

    printf("t+a+c=e\n");


    if(arabasay[0]==-1)  gauss[0][0]=1;
        else  gauss[0][a]+=arabasay[0]*(-1);

    if(arabasay[4]==-1) gauss[0][4]=1;
        else gauss[0][a]+=arabasay[4]*(-1);

    if(arabasay[7]==-1) gauss[0][7]=1;
        else gauss[0][a]+=arabasay[7]*(-1);

    if(arabasay[8]==-1) gauss[0][8]=-1;
        else gauss[0][a]+=arabasay[8];


    }else if(yonler[0]=='i'&&yonler[4]=='a'&&yonler[7]=='a'&&yonler[8]=='l'){

    printf("t=c-a-e\n");
    if(arabasay[0]==-1)  gauss[0][0]=1;
        else  gauss[0][a]+=arabasay[0]*(-1);

    if(arabasay[4]==-1) gauss[0][4]=1;
        else gauss[0][a]+=arabasay[4]*(-1);

    if(arabasay[7]==-1) gauss[0][7]=-1;
        else gauss[0][a]+=arabasay[7];
    if(arabasay[8]==-1) gauss[0][8]=1;
        else gauss[0][a]+=arabasay[8]*(-1);


   }else if(yonler[0]=='i'&&yonler[4]=='y'&&yonler[7]=='y'&&yonler[8]=='l'){

    printf("t=a-e-c\n");
    if(arabasay[0]==-1)  gauss[0][0]=1;
        else  gauss[0][a]+=arabasay[0]*(-1);

    if(arabasay[4]==-1) gauss[0][4]=-1;
        else gauss[0][a]+=arabasay[4];

    if(arabasay[7]==-1) gauss[0][7]=1;
        else gauss[0][a]+=arabasay[7]*(-1);
    if(arabasay[8]==-1) gauss[0][8]=1;
        else gauss[0][a]+=arabasay[8]*(-1);


   }else if(yonler[0]=='i'&&yonler[4]=='y'&&yonler[7]=='y'&&yonler[8]=='r'){

    printf("t=a-e-c\n");
    if(arabasay[0]==-1)  gauss[0][0]=1;
        else  gauss[0][a]+=arabasay[0]*(-1);

    if(arabasay[4]==-1) gauss[0][4]=-1;
        else gauss[0][a]+=arabasay[4];

    if(arabasay[7]==-1) gauss[0][7]=1;
        else gauss[0][a]+=arabasay[7]*(-1);
    if(arabasay[8]==-1) gauss[0][8]=-1;
        else gauss[0][a]+=arabasay[8];


   }else if(yonler[0]=='i'&&yonler[4]=='y'&&yonler[7]=='y'&&yonler[8]=='l'){

    printf("t=a-e-c\n");
    if(arabasay[0]==-1)  gauss[0][0]=1;
        else  gauss[0][a]+=arabasay[0]*(-1);

    if(arabasay[4]==-1) gauss[0][4]=-1;
        else gauss[0][a]+=arabasay[4];

    if(arabasay[7]==-1) gauss[0][7]=1;
        else gauss[0][a]+=arabasay[7]*(-1);
    if(arabasay[8]==-1) gauss[0][8]=1;
        else gauss[0][a]+=arabasay[8]*(-1);


   }else if(yonler[0]=='i'&&yonler[4]=='y'&&yonler[7]=='a'&&yonler[8]=='r'){


        printf("t=a+c+e\n");
    if(arabasay[0]==-1)  gauss[0][0]=1;
        else  gauss[0][a]+=arabasay[0]*(-1);

    if(arabasay[4]==-1) gauss[0][4]=-1;
        else gauss[0][a]+=arabasay[4];

    if(arabasay[7]==-1) gauss[0][7]=-1;
        else gauss[0][a]+=arabasay[7];
        if(arabasay[8]==-1) gauss[0][8]=-1;
        else gauss[0][a]+=arabasay[8];


   }else if(yonler[0]=='d'&&yonler[4]=='a'&&yonler[7]=='a'&&yonler[8]=='l'){
        printf("t=a-c\n");
    if(arabasay[0]==-1)  gauss[0][0]=1;
        else  gauss[0][a]+=arabasay[0]*(-1);

    if(arabasay[4]==-1) gauss[0][4]=-1;
        else gauss[0][a]+=arabasay[4];

    if(arabasay[7]==-1) gauss[0][7]=1;
        else gauss[0][a]+=arabasay[7]*(-1);
        if(arabasay[8]==-1) gauss[0][8]=-1;
        else gauss[0][a]+=arabasay[8];

   }else if(yonler[0]=='d'&&yonler[4]=='a'&&yonler[7]=='a'&&yonler[8]=='r'){
        printf("t=a-c\n");
    if(arabasay[0]==-1)  gauss[0][0]=1;
        else  gauss[0][a]+=arabasay[0]*(-1);

    if(arabasay[4]==-1) gauss[0][4]=-1;
        else gauss[0][a]+=arabasay[4];

    if(arabasay[7]==-1) gauss[0][7]=1;
        else gauss[0][a]+=arabasay[7]*(-1);
        if(arabasay[8]==-1) gauss[0][8]=1;
        else gauss[0][a]+=arabasay[8]*(-1);

   }else if(yonler[0]=='d'&&yonler[4]=='a'&&yonler[7]=='y'&&yonler[8]=='l'){
            printf("t=a+c\n");
    if(arabasay[0]==-1)  gauss[0][0]=1;
        else  gauss[0][a]+=arabasay[0]*(-1);

    if(arabasay[4]==-1) gauss[0][4]=-1;
        else gauss[0][a]+=arabasay[4];

    if(arabasay[7]==-1) gauss[0][7]=-1;
        else gauss[0][a]+=arabasay[7];

                if(arabasay[8]==-1) gauss[0][8]=-1;
        else gauss[0][a]+=arabasay[8];


   }else if(yonler[0]=='d'&&yonler[4]=='a'&&yonler[7]=='y'&&yonler[8]=='r'){
            printf("t=a+c\n");
    if(arabasay[0]==-1)  gauss[0][0]=1;
        else  gauss[0][a]+=arabasay[0]*(-1);

    if(arabasay[4]==-1) gauss[0][4]=-1;
        else gauss[0][a]+=arabasay[4];

    if(arabasay[7]==-1) gauss[0][7]=-1;
        else gauss[0][a]+=arabasay[7];

                if(arabasay[8]==-1) gauss[0][8]=1;
        else gauss[0][a]+=arabasay[8]*(-1);


   }else if(yonler[0]=='d'&&yonler[4]=='y'&&yonler[7]=='a'&&yonler[8]=='l'){

                           printf("t=e-a-c");
    if(arabasay[0]==-1)  gauss[0][0]=1;
        else  gauss[0][a]+=arabasay[0]*(-1);

    if(arabasay[4]==-1) gauss[0][4]=1;
        else gauss[0][a]+=arabasay[4]*(-1);

    if(arabasay[7]==-1) gauss[0][7]=1;
        else gauss[0][a]+=arabasay[7]*(-1);

                if(arabasay[8]==-1) gauss[0][8]=-1;
        else gauss[0][a]+=arabasay[8];


   }else if(yonler[0]=='d'&&yonler[4]=='y'&&yonler[7]=='a'&&yonler[8]=='r'){
       printf("denklem yok\n");

   }else if(yonler[0]=='d'&&yonler[4]=='y'&&yonler[7]=='y'&&yonler[8]=='r'){
                   printf("t=c-a-e\n");
    if(arabasay[0]==-1)  gauss[0][0]=1;
        else  gauss[0][a]+=arabasay[0]*(-1);

    if(arabasay[4]==-1) gauss[0][4]=1;
        else gauss[0][a]+=arabasay[4]*(-1);

    if(arabasay[7]==-1) gauss[0][7]=-1;
        else gauss[0][a]+=arabasay[7];

    if(arabasay[8]==-1) gauss[0][8]=-1;
        else gauss[0][a]+=arabasay[8];

    }else if(yonler[0]=='d'&&yonler[4]=='y'&&yonler[7]=='y'&&yonler[8]=='l'){
                   printf("t=c-a-e\n");
    if(arabasay[0]==-1)  gauss[0][0]=1;
        else  gauss[0][a]+=arabasay[0]*(-1);

    if(arabasay[4]==-1) gauss[0][4]=1;
        else gauss[0][a]+=arabasay[4]*(-1);

    if(arabasay[7]==-1) gauss[0][7]=-1;
        else gauss[0][a]+=arabasay[7];

    if(arabasay[8]==-1) gauss[0][8]=-1;
        else gauss[0][a]+=arabasay[8];

    }

    if(yonler[1]=='i'&&yonler[4]=='a'&&yonler[5]=='a'){ //x in denklemini bulabilmek için

                    printf("x=a+b\n");
    if(arabasay[1]==-1)  gauss[1][1]=1;
        else  gauss[1][a]+=arabasay[1]*(-1);

    if(arabasay[4]==-1) gauss[1][4]=-1;
        else gauss[1][a]+=arabasay[4];

    if(arabasay[5]==-1) gauss[1][5]=-1;
        else gauss[1][a]+=arabasay[5];





}else if(yonler[1]=='i'&&yonler[4]=='a'&&yonler[5]=='y'){

                       printf("x=a-b\n");
    if(arabasay[1]==-1)  gauss[1][1]=1;
        else  gauss[1][a]+=arabasay[1]*(-1);

    if(arabasay[4]==-1) gauss[1][4]=-1;
        else gauss[1][a]+=arabasay[4];

    if(arabasay[5]==-1) gauss[1][5]=1;
        else gauss[1][a]+=arabasay[5]*(-1);



}else if(yonler[1]=='i'&&yonler[4]=='y'&&yonler[5]=='y'){
                       printf("cakisma var denklem yok\n");


}else if(yonler[1]=='i'&&yonler[4]=='y'&&yonler[5]=='a'){
                       printf("x=b-a\n");
    if(arabasay[1]==-1)  gauss[1][1]=1;
        else  gauss[1][a]+=arabasay[1]*(-1);

    if(arabasay[4]==-1) gauss[1][4]=1;
        else gauss[1][a]+=arabasay[4]*(-1);

    if(arabasay[5]==-1) gauss[1][5]=-1;
        else gauss[1][a]+=arabasay[5];

}else if(yonler[1]=='d'&&yonler[4]=='a'&&yonler[5]=='a'){
                       printf("x=0\n");


}else if(yonler[1]=='d'&&yonler[4]=='a'&&yonler[5]=='y'){
                       printf("x=b-a\n");
    if(arabasay[1]==-1)  gauss[1][1]=1;
        else  gauss[1][a]+=arabasay[1]*(-1);

    if(arabasay[4]==-1) gauss[1][4]=1;
        else gauss[1][a]+=arabasay[4]*(-1);

    if(arabasay[5]==-1) gauss[1][5]=-1;
        else gauss[1][a]+=arabasay[5];

}else if(yonler[1]=='d'&&yonler[4]=='y'&&yonler[5]=='y'){

                           printf("x=a+b\n");
    if(arabasay[1]==-1)  gauss[1][1]=1;
        else  gauss[1][a]+=arabasay[1]*(-1);

    if(arabasay[4]==-1) gauss[1][4]=-1;
        else gauss[1][a]+=arabasay[4];

    if(arabasay[5]==-1) gauss[1][5]=-1;
        else gauss[1][a]+=arabasay[5];

}else if(yonler[1]=='d'&&yonler[4]=='y'&&yonler[5]=='a'){
                         printf("x=b-a\n");
    if(arabasay[1]==-1)  gauss[1][1]=1;
        else  gauss[1][a]+=arabasay[1]*(-1);

    if(arabasay[4]==-1) gauss[1][4]=1;
        else gauss[1][a]+=arabasay[4]*(-1);

    if(arabasay[5]==-1) gauss[1][5]=-1;
        else gauss[1][a]+=arabasay[5];}

    if(yonler[2]=='i'&&yonler[5]=='a'&&yonler[6]=='y'&&yonler[8]=='r'){//y'nin denklimini bulabilmek icin

                    printf("cakisma var denklem yok\n");


}else if(yonler[2]=='i'&&yonler[5]=='a'&&yonler[6]=='y'&&yonler[8]=='l'){
        printf("y=e-d-b\n");

if(arabasay[2]==-1)  gauss[2][2]=1;
        else  gauss[2][a]+=arabasay[2]*(-1);

    if(arabasay[5]==-1) gauss[2][5]=1;
        else gauss[2][a]+=arabasay[5]*(-1);

    if(arabasay[6]==-1) gauss[2][6]=-1;
        else gauss[2][a]+=arabasay[6];

            if(arabasay[8]==-1) gauss[2][8]=-1;
        else gauss[2][a]+=arabasay[8];


}else if(yonler[2]=='i'&&yonler[5]=='a'&&yonler[6]=='a'&&yonler[8]=='l'){
        printf("y=e+d-b\n");

if(arabasay[2]==-1)  gauss[2][2]=1;
        else  gauss[2][a]+=arabasay[2]*(-1);

    if(arabasay[5]==-1) gauss[2][5]=1;
        else gauss[2][a]+=arabasay[5]*(-1);

    if(arabasay[6]==-1) gauss[2][6]=-1;
        else gauss[2][a]+=arabasay[6];

            if(arabasay[8]==-1) gauss[2][8]=-1;
        else gauss[2][a]+=arabasay[8];

}else if(yonler[2]=='i'&&yonler[5]=='a'&&yonler[6]=='a'&&yonler[8]=='r'){
        printf("y=d-b-e\n");

if(arabasay[2]==-1)  gauss[2][2]=1;
        else  gauss[2][a]+=arabasay[2]*(-1);

    if(arabasay[5]==-1) gauss[2][5]=1;
        else gauss[2][a]+=arabasay[5]*(-1);

    if(arabasay[6]==-1) gauss[2][6]=-1;
        else gauss[2][a]+=arabasay[6];

            if(arabasay[8]==-1) gauss[2][8]=1;
        else gauss[2][a]+=arabasay[8]*(-1);

}else if(yonler[2]=='i'&&yonler[5]=='y'&&yonler[6]=='a'&&yonler[8]=='l'){

                            printf("y=b+d+e\n");
    if(arabasay[2]==-1)  gauss[2][2]=1;
        else  gauss[2][a]+=arabasay[2]*(-1);

    if(arabasay[5]==-1) gauss[2][5]=-1;
        else gauss[2][a]+=arabasay[5];

    if(arabasay[6]==-1) gauss[2][6]=-1;
        else gauss[2][a]+=arabasay[6];

        if(arabasay[8]==-1) gauss[2][8]=-1;
        else gauss[2][a]+=arabasay[8];


}else if(yonler[2]=='i'&&yonler[5]=='y'&&yonler[6]=='a'&&yonler[8]=='r'){

                            printf("y=b+d-e\n");
    if(arabasay[2]==-1)  gauss[2][2]=1;
        else  gauss[2][a]+=arabasay[2]*(-1);

    if(arabasay[5]==-1) gauss[2][5]=-1;
        else gauss[2][a]+=arabasay[5];

    if(arabasay[6]==-1) gauss[2][6]=-1;
        else gauss[2][a]+=arabasay[6];

        if(arabasay[8]==-1) gauss[2][8]=1;
        else gauss[2][a]+=arabasay[8]*(-1);


}else if(yonler[2]=='i'&&yonler[5]=='y'&&yonler[6]=='y'&&yonler[8]=='l'){

                            printf("y=b-d+e\n");
    if(arabasay[2]==-1)  gauss[2][2]=1;
        else  gauss[2][a]+=arabasay[2]*(-1);

    if(arabasay[5]==-1) gauss[2][5]=-1;
        else gauss[2][a]+=arabasay[5];

    if(arabasay[6]==-1) gauss[2][6]=1;
        else gauss[2][a]+=arabasay[6]*(-1);
                if(arabasay[8]==-1) gauss[2][8]=-1;
        else gauss[2][a]+=arabasay[8];

}else if(yonler[2]=='i'&&yonler[5]=='y'&&yonler[6]=='y'&&yonler[8]=='r'){

                            printf("y=b-d-e\n");
    if(arabasay[2]==-1)  gauss[2][2]=1;
        else  gauss[2][a]+=arabasay[2]*(-1);

    if(arabasay[5]==-1) gauss[2][5]=-1;
        else gauss[2][a]+=arabasay[5];

    if(arabasay[6]==-1) gauss[2][6]=1;
        else gauss[2][a]+=arabasay[6]*(-1);
                if(arabasay[8]==-1) gauss[2][8]=-1;
        else gauss[2][a]+=arabasay[8];

if(arabasay[8]==-1) gauss[2][8]=1;
        else gauss[2][a]+=arabasay[8]*(-1);

}else if(yonler[2]=='d'&&yonler[5]=='a'&&yonler[6]=='a'&&yonler[8]=='r'){

                            printf("y=b-d+e\n");
      if(arabasay[2]==-1)  gauss[2][2]=1;
        else  gauss[2][a]+=arabasay[2]*(-1);

    if(arabasay[5]==-1) gauss[2][5]=-1;
        else gauss[2][a]+=arabasay[5];

    if(arabasay[6]==-1) gauss[2][6]=1;
        else gauss[2][a]+=arabasay[6]*(-1);

        if(arabasay[8]==-1) gauss[2][8]=-1;
        else gauss[2][a]+=arabasay[8];


}else if(yonler[2]=='d'&&yonler[5]=='a'&&yonler[6]=='a'&&yonler[8]=='l'){

                            printf("y=b-d-e\n");
      if(arabasay[2]==-1)  gauss[2][2]=1;
        else  gauss[2][a]+=arabasay[2]*(-1);

    if(arabasay[5]==-1) gauss[2][5]=-1;
        else gauss[2][a]+=arabasay[5];

    if(arabasay[6]==-1) gauss[2][6]=1;
        else gauss[2][a]+=arabasay[6]*(-1);

        if(arabasay[8]==-1) gauss[2][8]=1;
        else gauss[2][a]+=arabasay[8]*(-1);


}else if(yonler[2]=='d'&&yonler[5]=='a'&&yonler[6]=='y'&&yonler[8]=='r'){

                            printf("y=b+d+e\n");
    if(arabasay[2]==-1)  gauss[2][2]=1;
        else  gauss[2][a]+=arabasay[2]*(-1);

    if(arabasay[5]==-1) gauss[2][5]=-1;
        else gauss[2][a]+=arabasay[5];

    if(arabasay[6]==-1) gauss[2][6]=-1;
        else gauss[2][a]+=arabasay[6];

         if(arabasay[8]==-1) gauss[2][8]=-1;
        else gauss[2][a]+=arabasay[8];


}else if(yonler[2]=='d'&&yonler[5]=='a'&&yonler[6]=='y'&&yonler[8]=='l'){

                            printf("y=b+d-e\n");
    if(arabasay[2]==-1)  gauss[2][2]=1;
        else  gauss[2][a]+=arabasay[2]*(-1);

    if(arabasay[5]==-1) gauss[2][5]=-1;
        else gauss[2][a]+=arabasay[5];

    if(arabasay[6]==-1) gauss[2][6]=-1;
        else gauss[2][a]+=arabasay[6];

         if(arabasay[8]==-1) gauss[2][8]=1;
        else gauss[2][a]+=arabasay[8]*(-1);

}else if(yonler[2]=='d'&&yonler[5]=='y'&&yonler[6]=='a'&&yonler[8]=='r'){

                            printf("y=b+e-d\n");


     if(arabasay[2]==-1)  gauss[2][2]=1;
        else  gauss[2][a]+=arabasay[2]*(-1);

    if(arabasay[5]==-1) gauss[2][5]=-1;
        else gauss[2][a]+=arabasay[5];

    if(arabasay[6]==-1) gauss[2][6]=1;
        else gauss[2][a]+=arabasay[6]*(-1);

         if(arabasay[8]==-1) gauss[2][8]=-1;
        else gauss[2][a]+=arabasay[8];


}else if(yonler[2]=='d'&&yonler[5]=='y'&&yonler[6]=='a'&&yonler[8]=='r'){

                            printf("y=b-e-d\n");


     if(arabasay[2]==-1)  gauss[2][2]=1;
        else  gauss[2][a]+=arabasay[2]*(-1);

    if(arabasay[5]==-1) gauss[2][5]=-1;
        else gauss[2][a]+=arabasay[5];

    if(arabasay[6]==-1) gauss[2][6]=1;
        else gauss[2][a]+=arabasay[6]*(-1);

         if(arabasay[8]==-1) gauss[2][8]=1;
        else gauss[2][a]+=arabasay[8]*(-1);


}else if(yonler[2]=='d'&&yonler[5]=='y'&&yonler[6]=='y'&&yonler[8]=='r'){

                            printf("y=d-b+e\n");
    if(arabasay[2]==-1)  gauss[2][2]=1;
        else  gauss[2][a]+=arabasay[2]*(-1);

    if(arabasay[5]==-1) gauss[2][5]=1;
        else gauss[2][a]+=arabasay[5]*(-1);

    if(arabasay[6]==-1) gauss[2][6]=-1;
        else gauss[2][a]+=arabasay[6];


         if(arabasay[8]==-1) gauss[2][8]=-1;
        else gauss[2][a]+=arabasay[8];


}else if(yonler[2]=='d'&&yonler[5]=='y'&&yonler[6]=='y'&&yonler[8]=='l'){

                            printf("y=d-b-e\n");
    if(arabasay[2]==-1)  gauss[2][2]=1;
        else  gauss[2][a]+=arabasay[2]*(-1);

    if(arabasay[5]==-1) gauss[2][5]=1;
        else gauss[2][a]+=arabasay[5]*(-1);

    if(arabasay[6]==-1) gauss[2][6]=-1;
        else gauss[2][a]+=arabasay[6];


         if(arabasay[8]==-1) gauss[2][8]=1;
        else gauss[2][a]+=arabasay[8]*(-1);


}

    if(yonler[3]=='i'&&yonler[7]=='a'&&yonler[6]=='a'){ //z in denklemini bulabilmek için

                    printf("hata cakisma var\n");

}else if(yonler[3]=='i'&&yonler[7]=='a'&&yonler[6]=='y'){
    printf("z=d-c\n");
     if(arabasay[3]==-1)  gauss[3][3]=1;
        else  gauss[3][a]+=arabasay[3]*(-1);

    if(arabasay[6]==-1) gauss[3][6]=-1;
        else gauss[3][a]+=arabasay[6];

    if(arabasay[7]==-1) gauss[3][7]=1;
        else gauss[3][a]+=arabasay[7]*(-1);



}else if(yonler[3]=='i'&&yonler[7]=='y'&&yonler[6]=='a'){
    printf("z=c-d\n");
     if(arabasay[3]==-1)  gauss[3][3]=1;
        else  gauss[3][a]+=arabasay[3]*(-1);

    if(arabasay[6]==-1) gauss[3][6]=1;
        else gauss[3][a]+=arabasay[6]*(-1);

    if(arabasay[7]==-1) gauss[3][7]=-1;
        else gauss[3][a]+=arabasay[7];

}else if(yonler[3]=='i'&&yonler[7]=='y'&&yonler[6]=='y'){
    printf("z=c+d\n");
     if(arabasay[3]==-1)  gauss[3][3]=1;
        else  gauss[3][a]+=arabasay[3]*(-1);

    if(arabasay[6]==-1) gauss[3][6]=-1;
        else gauss[3][a]+=arabasay[6];

    if(arabasay[7]==-1) gauss[3][7]=-1;
        else gauss[3][a]+=arabasay[7];

}else if(yonler[3]=='d'&&yonler[7]=='a'&&yonler[6]=='a'){
    printf("z=c+d\n");
     if(arabasay[3]==-1)  gauss[3][3]=1;
        else  gauss[3][a]+=arabasay[3]*(-1);

    if(arabasay[6]==-1) gauss[3][6]=-1;
        else gauss[3][a]+=arabasay[6];

    if(arabasay[7]==-1) gauss[3][7]=-1;
        else gauss[3][a]+=arabasay[7];

}else if(yonler[3]=='d'&&yonler[7]=='a'&&yonler[6]=='y'){
    printf("z=c-d\n");
     if(arabasay[3]==-1)  gauss[3][3]=1;
        else  gauss[3][a]+=arabasay[3]*(-1);

    if(arabasay[6]==-1) gauss[3][6]=1;
        else gauss[3][a]+=arabasay[6]*(-1);

    if(arabasay[7]==-1) gauss[3][7]=-1;
        else gauss[3][a]+=arabasay[7];

}else if(yonler[3]=='d'&&yonler[7]=='y'&&yonler[6]=='a'){
    printf("z=d-c\n");
     if(arabasay[3]==-1)  gauss[3][3]=1;
        else  gauss[3][a]+=arabasay[3]*(-1);

    if(arabasay[6]==-1) gauss[3][6]=-1;
        else gauss[3][a]+=arabasay[6];

    if(arabasay[7]==-1) gauss[3][7]=1;
        else gauss[3][a]+=arabasay[7]*(-1);

}else if(yonler[3]=='d'&&yonler[7]=='y'&&yonler[6]=='y'){
    printf("z=0\n");
}

    if(yonler[0]=='i'&&yonler[1]=='i') {printf("t+x=y+z\n");//girisler=cikislar denklemleri icin

            if(yonler[0]==-1)  gauss[4][0]=1;
                else  gauss[4][0]+=arabasay[0]*(-1);

            if(yonler[1]==-1) gauss[4][1]=1;
                else gauss[1][a]+=arabasay[1]*(-1);

            if(yonler[2]==-1) gauss[4][2]=-1;
                else gauss[1][a]+=arabasay[2];

            if(yonler[3]==-1) gauss[4][3]=-1;
                else gauss[4][a]+=arabasay[3];

}   else if(yonler[1]=='i'&&yonler[2]=='i') {  printf("x+y=t+z\n");

            if(yonler[0]==-1)  gauss[4][0]=-1;
                else  gauss[4][0]+=arabasay[0];

            if(yonler[1]==-1) gauss[4][1]=1;
                else gauss[1][a]+=arabasay[1]*(-1);

            if(yonler[2]==-1) gauss[4][2]=1;
                else gauss[1][a]+=arabasay[2]*(-1);

            if(yonler[4]==-1) gauss[4][3]=-1;
                else gauss[4][a]+=arabasay[3];




}   else if(yonler[0]=='i'&&yonler[3]=='i') {  printf("t+z=x+y\n");
            if(yonler[0]==-1)  gauss[4][0]=1;
                else  gauss[4][0]+=arabasay[0]*(-1);

            if(yonler[1]==-1) gauss[4][1]=-1;
                else gauss[1][a]+=arabasay[1];

            if(yonler[2]==-1) gauss[4][2]=-1;
                else gauss[1][a]+=arabasay[2];

            if(yonler[3]==-1) gauss[4][3]=1;
                else gauss[4][a]+=arabasay[3]*(-1);

}   else if(yonler[1]=='i'&&yonler[2]=='i') {  printf("x+y=t+z\n");
            if(yonler[0]==-1)  gauss[4][0]=-1;
                else  gauss[4][0]+=arabasay[0];

            if(yonler[1]==-1) gauss[4][1]=1;
                else gauss[1][a]+=arabasay[1]*(-1);

            if(yonler[2]==-1) gauss[4][2]=1;
                else gauss[1][a]+=arabasay[2]*(-1);

            if(yonler[3]==-1) gauss[4][3]=-1;
                else gauss[4][a]+=arabasay[3];

}   else if(yonler[1]=='i'&&yonler[3]=='i') {  printf("x+z=y+t\n");

            if(yonler[0]==-1)  gauss[4][0]=-1;
                else  gauss[4][0]+=arabasay[0];

            if(yonler[1]==-1) gauss[4][1]=1;
                else gauss[1][a]+=arabasay[1]*(-1);

            if(yonler[2]==-1) gauss[4][2]=-1;
                else gauss[1][a]+=arabasay[2];

            if(yonler[3]==-1) gauss[4][3]=1;
                else gauss[4][a]+=arabasay[3]*(-1);


}   else if(yonler[2]=='i'&&yonler[3]=='i') {  printf("y+z=x+t\n");
            if(yonler[0]==-1)  gauss[4][0]=-1;
                else  gauss[4][0]+=arabasay[0];

            if(yonler[1]==-1) gauss[4][1]=-1;
                else gauss[1][a]+=arabasay[1];

            if(yonler[2]==-1) gauss[4][2]=1;
                else gauss[1][a]+=arabasay[2]*(-1);

            if(yonler[3]==-1) gauss[4][3]=1;
                else gauss[4][a]+=arabasay[3]*(-1);

}


    for(i=0;i<5;i++){
        for(j=0;j<10;j++){

        printf("%.0f ",gauss[i][j]);}
    printf("\n");}

  double x[5];
    Gaussuygulamasi(5,10,gauss,x);
    printf("\nSONUCLAR:\n\n");
    for(i=0;i<10;i++){
        printf("x[%d]=\t%lf\n",i+1,x[i]);
    }

    }



}allegro_exit();
      return 0;}
      END_OF_MAIN();

