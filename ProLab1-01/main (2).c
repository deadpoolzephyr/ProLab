#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define fp1 "veriler1.nkt"
#define fp2 "veriler2.nkt"
#define fp3 "binaryXYZRGB.nkt"
#define fp4 "binaryXYZ.nkt"
#define fp5 "testVerileri.nkt"
#define fp6 "problemli.nkt"
#define fp7 "nkt_olmayan_dosya.benioku"

struct Nokta1
{
    float x[10];
    float y[10];
    float z[10];
    int r[10];
    int g[10];
    int b[10];

} n1;

struct Nokta1X
{
    char x[10];
    char y[10];
    char z[10];
    int r[10];
    int g[10];
    int b[10];

} n1X;

struct Nokta2
{
    float x[10];
    float y[10];
    float z[10];

} n2;

void stringtohexString(char* input, char* output)
{
    int loop;
    int i;

    i=0;
    loop=0;

    while(input[loop] != '\0')
    {
        sprintf((char*)(output+i),"%02X", input[loop]);
        loop+=1;
        i+=2;
    }

    output[i++] = '\0';
}

int main()
{

    struct Nokta1 n1;
    struct Nokta1X n1X;
    struct Nokta2 n2;

    FILE *dosya1 = fopen(fp1, "r");
    FILE *dosya2 = fopen(fp2, "r");
    FILE *dosya3 = fopen(fp3, "r");
    FILE *dosya4 = fopen(fp4, "r");
    FILE *dosya5 = fopen(fp5, "r");
    FILE *dosya6 = fopen(fp6, "r");
    FILE *dosya7 = fopen(fp7, "r");
    int i=0, s=0, s1=0, s2=0, s3=0, s4=0, s5=0, s6=0, s7=0, secim=0, nokta_sayisi=0;
    float cx=0, cy=0, cz=0, cr=0;
    int ch, xk=0, yk=0, zk=0, rk=0, gk=0, bk=0;;
    char buf[100];


    printf("----MENU----\n");
    printf("1-Dosya Kontrolu \n");
    printf("2-En Yakin/Uzak Noktalar\n");
    printf("3-Kup\n");
    printf("4-Kure\n");
    printf("5-Nokta Uzakliklari\n");
    printf("Seciminizi yapiniz: \n");
    scanf("%d",&secim);


    if (dosya1 == NULL)
    {
        printf("Dosya1 acilamadi!\n");
        exit(1);
    }

    if (dosya2 == NULL)
    {
        printf("Dosya2 acilamadi!\n");
        exit(1);
    }

    if (dosya3 == NULL)
    {
        printf("Dosya3 acilamadi!\n");
        exit(1);
    }

    if (dosya4 == NULL)
    {
        printf("Dosya4 acilamadi!\n");
        exit(1);
    }

    if (dosya5 == NULL)
    {
        printf("Dosya5 acilamadi!\n");
        exit(1);
    }

    if (dosya6 == NULL)
    {
        printf("Dosya6 acilamadi!\n");
        exit(1);
    }

    if (dosya7 == NULL)
    {
        printf("Dosya7 acilamadi!\n");
        exit(1);
    }


    switch(secim)
    {

    case 1:

        while ( fgets(buf, 100, dosya1) != NULL )
        {
            s1++;
            s++;
            printf("1- %d. satir: \"%s\"\n", s1, buf);

            /*
            for(i=0; i<=s2; i++){
                if(s1==3){
                    fscanf(dosya1,"%c %c %c %c %c %c %c", 'ALANLAR', xk, yk, zk, rk, gk, bk);
                    if(xk=='x' && yk=='y' && zk=='z' && rk=='r' && gk=='g' && bk=='b'){
                        printf("Dosya1 Alan bilgileri dogrudur.\n");
                    }

                    else{
                        printf("Dosya1 Alan bilgileri eksiktir.\n");
                    }

                }

                if(s1==4){
                    fscanf(dosya1,"%c %d", 'NOKTALAR', &nokta_sayisi);
                    if(nokta_sayisi==(s1-5)){
                        printf("Dosya1 Nokta sayisi dogrudur.\n");
                    }
                    else{
                        printf("Dosya1 Nokta sayisi eksiktir.\n");
                    }

                }
            }*/
        }
        for(i=6; i<=s1; i++)
        {
            fscanf(dosya1,"%f %f %f %d %d %d",&n1.x[i], &n1.y[i], &n1.z[i], &n1.r[i], &n1.g[i], &n1.b[i]);

        }
        printf("%f %f %f\n",&n1.x[i], &n1.y[i], &n1.z[i]);
        printf("%d\n",s1);

        while ( fgets(buf, 100, dosya2) != NULL )
        {
            s2++;
            s++;
            printf("2- %d. satir: \"%s\"\n", s2, buf);

            /*
            for(i=0; i<=s2; i++){
                if(s2==3){

                    fscanf(dosya2,"%c %c %c %c",'ALANLAR', xk, yk, zk);
                    if(xk=='x' && yk=='y' && zk=='z'){
                        printf("Dosya2 Alan bilgileri dogrudur.\n");
                    }

                    else{
                        printf("Dosya2 Alan bilgileri eksiktir.\n");
                    }

                }

                if(s2==4){
                    fscanf(dosya2,"%c %d", 'NOKTALAR', &nokta_sayisi);
                    if(nokta_sayisi==(s2-5)){
                        printf("Dosya2 Nokta sayisi dogrudur.\n");
                    }
                    else{
                        printf("Dosya2 Nokta sayisi eksiktir.\n");
                    }
                }

            }*/
        }
        for(i=6; i<=s2; i++)
        {
            fscanf(dosya2,"%f %f %f",&n2.x[i], &n2.y[i], &n2.z[i]);
        }
        printf("%d\n",s2);



        while ( fgets(buf, 100, dosya3) != NULL )
        {
            s3++;
            s++;

            for(i=6; i<=s3; i++)
            {
                /*float f = 0.0f;
                memcpy(&f, &x, sizeof(f) < sizeof(x) ? sizeof(f) : sizeof(x));*/
                fscanf(dosya3,"%f %f %f %d %d %d",&n1.x[i], &n1.y[i], &n1.z[i], &n1.r[i], &n1.g[i], &n1.b[i]);

                /*float f = 0.0f;
                memcpy(&f, &n1.x[i], sizeof(f) < sizeof(n1.x[i]) ? sizeof(f) : sizeof(n1.x[i]));

                fscanf(dosya3,"%f",&f);*/

                //fscanf(dosya3,"%s %s %s %d %d %d",&n1X.x[i], &n1X.y[i], &n1X.z[i], &n1X.r[i], &n1X.g[i], &n1X.b[i]);
                /*printf("ascii_str: %s\n", n1X.x[i]);

                int len = strlen(n1X.x[i]);
                char hex_str[(len*2)+1];

                stringtohexString(n1X.x[i], hex_str);

                printf("hex_str: %s\n", hex_str);*/

                /*float f1 = 0.0f;
                float f2 = 0.0f;
                float f3 = 0.0f;
                memcpy(&f1, &n1.x[i], sizeof(f1) < sizeof(n1.x[i]) ? sizeof(f1) : sizeof(n1.x[i]));
                memcpy(&f2, &n1.y[i], sizeof(f2) < sizeof(n1.y[i]) ? sizeof(f2) : sizeof(n1.y[i]));
                memcpy(&f3, &n1.z[i], sizeof(f3) < sizeof(n1.z[i]) ? sizeof(f3) : sizeof(n1.z[i]));

                printf("%d %d %d -- %f %f %f -- %f %f %f\n",sizeof(n1.x[i]),sizeof(n1.y[i]),sizeof(n1.z[i]), n1.x[i], n1.y[i], n1.z[i], f1, f2, f3);*/

            }

            if(s3 > 5)
            {
                printf("3- %d. satir: \"%s\"\n", s3, buf);
                fscanf(dosya3,"%s %s %s %d %d %d", &n1X.x[i], &n1X.y[i], &n1X.z[i], &n1X.r[i], &n1X.g[i], &n1X.b[i]);

                /*
                int xi = 0;

                int len = strlen(n1X.x[xi]);
                char hex_str[(len*2)+1];

                stringtohexString(n1X.x[xi], hex_str);

                printf("hex_str: %s\n", hex_str);

                float f1 = 0.0f;
                memcpy(&f1, &n1X.x[xi], sizeof(f1) < sizeof(n1X.x[xi]) ? sizeof(f1) : sizeof(n1X.x[xi]));
                printf("memcpy: %f\n", f1);

                printf("|%s|\n", n1X.x[xi]);
                printf("|%s|\n", n1X.y[xi]);
                printf("|%s|\n", n1X.z[xi]);
                printf("|%d|\n", n1X.r[xi]);
                printf("|%d|\n", n1X.g[xi]);
                printf("|%d|\n", n1X.b[xi]);
                printf("\n");

                xi++;
                */
            }
        }

        printf("%d\n",s3);

        while ( fgets(buf, 100, dosya4) != NULL )
        {
            s4++;
            s++;
            printf("4- %d. satir: \"%s\"\n", s4, buf);

        }
        for(i=6; i<=s4; i++)
        {
            fscanf(dosya4,"%f %f %f",&n2.x[i], &n2.y[i], &n2.z[i]);
        }
        printf("%d\n",s4);

        while ( fgets(buf, 100, dosya5) != NULL )
        {
            s5++;
            s++;
            printf("5- %d. satir: \"%s\"\n", s5, buf);

        }
        for(i=6; i<=s5; i++)
        {
            fscanf(dosya5,"%f %f %f",&n2.x[i], &n2.y[i], &n2.z[i]);
        }
        printf("%d\n",s5);

        while ( fgets(buf, 100, dosya6) != NULL )
        {
            s6++;
            s++;
            printf("6- %d. satir: \"%s\"\n", s6, buf);

        }
        for(i=6; i<=s6; i++)
        {
            fscanf(dosya6,"%f %f %f",&n2.x[i], &n2.y[i], &n2.z[i]);
        }
        printf("%d\n",s6);


        while ( fgets(buf, 100, dosya7) != NULL )
        {
            s7++;
            s++;
            printf("7- %d. satir: \"%s\"\n", s7, buf);

        }
        for(i=6; i<=s7; i++)
        {
            fscanf(dosya7,"%f %f %f",&n2.x[i], &n2.y[i], &n2.z[i]);
        }
        printf("%d \n", s7);

        printf("--------------------------------\n");
        printf("%d \n", s1);
        printf("%d \n", s2);
        printf("%d \n", s3);
        printf("%d \n", s4);
        printf("%d \n", s5);
        printf("%d \n", s6);
        printf("%d \n", s7);
        printf("%d \n", s);

        break;


    case 2:

        break;

    case 3:
        for(i=6; i<=s1; i++)
        {
            fscanf(dosya1,"%f %f %f %d %d %d",&n1.x[i], &n1.y[i], &n1.z[i], &n1.r[i], &n1.g[i], &n1.b[i]);
        }


        break;

    case 4:

        printf("Koordinat ve yaricap bilgilerini giriniz: (x y z r formatinda)\n");
        scanf("%f %f %f %f", &cx, &cy, &cz, &cr);
        printf("\n");
        for(i=6; i<=s1; i++)
        {
            fscanf(dosya1,"%f %f %f %d %d %d",&n1.x[i], &n1.y[i], &n1.z[i], &n1.r[i], &n1.g[i], &n1.b[i]);
            if(sqrt(pow(cx-(n1.x[i]),2)+pow(cy-(n1.y[i]),2)+pow(cz-(n1.z[i]),2))<=cr)
            {
                printf("%f %f %f",n1.x[i], n1.y[i], n1.z[i]);
            }
        }
        printf("\n");
        for(i=6; i<=s2; i++)
        {
            fscanf(dosya2,"%f %f %f",&n2.x[i], &n2.y[i], &n2.z[i]);
            if(sqrt(pow(cx-(n2.x[i]),2)+pow(cy-(n2.y[i]),2)+pow(cz-(n2.z[i]),2))<=cr)
            {
                printf("%f %f %f",n2.x[i], n2.y[i], n2.z[i]);
            }
        }
        printf("\n");
        for(i=6; i<=s3; i++)
        {
            fscanf(dosya3,"%f %f %f %d %d %d",&n1.x[i], &n1.y[i], &n1.z[i], &n1.r[i], &n1.g[i], &n1.b[i]);
            if(sqrt(pow(cx-(n1.x[i]),2)+pow(cy-(n1.y[i]),2)+pow(cz-(n1.z[i]),2))<=cr)
            {
                printf("%f %f %f",n1.x[i], n1.y[i], n1.z[i]);
            }
        }
        printf("\n");
        for(i=6; i<=s4; i++)
        {
            fscanf(dosya4,"%f %f %f",&n2.x[i], &n2.y[i], &n2.z[i]);
            if(sqrt(pow(cx-(n2.x[i]),2)+pow(cy-(n2.y[i]),2)+pow(cz-(n2.z[i]),2))<=cr)
            {
                printf("%f %f %f",n2.x[i], n2.y[i], n2.z[i]);
            }
        }
        printf("\n");
        for(i=6; i<=s5; i++)
        {
            fscanf(dosya5,"%f %f %f",&n2.x[i], &n2.y[i], &n2.z[i]);
            if(sqrt(pow(cx-(n2.x[i]),2)+pow(cy-(n2.y[i]),2)+pow(cz-(n2.z[i]),2))<=cr)
            {
                printf("%f %f %f",n2.x[i], n2.y[i], n2.z[i]);
            }
        }
        printf("\n");
        for(i=6; i<=s6; i++)
        {
            fscanf(dosya6,"%f %f %f",&n2.x[i], &n2.y[i], &n2.z[i]);
            if(sqrt(pow(cx-(n2.x[i]),2)+pow(cy-(n2.y[i]),2)+pow(cz-(n2.z[i]),2))<=cr)
            {
                printf("%f %f %f",n2.x[i], n2.y[i], n2.z[i]);
            }
        }
        /*
        for(i=6; i<=s7; i++)
        {
            fscanf(dosya7,"%f %f %f",&n2.x[i], &n2.y[i], &n2.z[i]);
            if(sqrt(pow(cx-(n2.x[i]),2)+pow(cy-(n2.y[i]),2)+pow(cz-(n2.z[i]),2))<=cr){
            printf("%f %f %f",n2.x[i], n2.y[i], n2.z[i]);
            }
        }
        */
        break;

    case 5:

        break;

    default:
        printf("Hatali bir numara girdiniz!\n");



    }


    fclose(dosya1);
    fclose(dosya2);
    fclose(dosya3);
    fclose(dosya4);
    fclose(dosya5);
    fclose(dosya6);
    fclose(dosya7);

    return 0;
}

// satir satir okuma islemi
/*
    while (fgets(buf, 100, dosya) != NULL )
    {

        s++;
        //printf("%d: \"%s\"\n", s, buf);

    }
*/


/*
void formatli_oku()
{
    FILE * dosya;
    if ((dosya = fopen(fp1, "r")) == NULL)
    {

        printf("dosya acilamadi!\n");
        exit(1);

    }
    char buf[100];
    fscanf(dosya, "%99s", buf); // max 99 harfli kelime oku
    printf("okunan kelime: %s \n", buf);
    fscanf(dosya, "%99s", buf);
    printf("okunan kelime: %s\n", buf);

    fclose(dosya);

}
*/
