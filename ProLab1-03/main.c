#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>


struct komsu
{
    char **komsuSehir;
    unsigned int komsuSize;
    int komsuPlakaKodu;
};

struct sehir
{
    int plakaKodu;
    char sehirAdi[20];
    char cografiBolge[2];
    //int komsuSayisi;
    struct komsu *komsu;
};



int main()
{
    FILE* d1 = NULL;
    FILE* d2 = NULL;
    d1 = fopen("sehirler.txt", "r+");
    d2 = fopen("cikti.txt", "w+");

    int secim;

    printf("--------MENU--------\n");
    printf("1-Yeni sehir ekle.\n");
    printf("2-Yeni komsuluk ekle.\n");
    printf("3-Arama yap.\n");
    printf("4-Bolge listele.\n");
    printf("5-Komsu sayisina gore listele.\n");
    printf("6-Çýkýþ.\n");
    printf("Secim yapiniz: ");
    scanf("%d", &secim);

    char buffer[10240];
    char *token;

    struct sehir *sehir = malloc(sizeof(struct sehir)*6);
    struct komsu *komsu = malloc(sizeof(struct komsu)*6);
    int i = 0;
    if(d1 != NULL)
    {

        int ch = fgetc(d1);
        while(ch != EOF)
        {
            //putchar(ch);
            ch = fgetc(d1);
            if(ch=='\n')
            {
                i++;
            }
            fscanf(d1,"%d,%s,%s,%s", &sehir[i].plakaKodu,sehir[i].sehirAdi,sehir[i].cografiBolge,komsu[i].komsuSehir);
            i++;
        }


        while(fgets(buffer,10240,d1))
        {
            token=strtok(NULL,",");
            sehir[i].plakaKodu = atoi(token);

            token=strtok(buffer,",");
            strcpy(sehir[i].sehirAdi,token);

            token=strtok(buffer,",");
            strcpy(sehir[i].cografiBolge,token);

            token=strtok(buffer,",");
            strcpy(komsu[i].komsuSehir,token);

        }

        token=strtok(NULL,",");
        if(token)
        {
            komsu[i].komsuSehir=malloc(sizeof(char *));
            komsu[i].komsuSehir[0]=strdup(token); // Need to index using 0 as komsuSize won't have a value yet
            komsu[i].komsuSize=1;

            token=strtok(NULL,",");
            while(token)
            {
                komsu[i].komsuSehir=realloc(komsu[i].komsuSehir,(komsu[i].komsuSize+1)*sizeof(char *));
                komsu[i].komsuSehir[komsu[i].komsuSize]=strdup(token);
                komsu[i].komsuSize++;

                token=strtok(NULL,",");
            }
        }

        fprintf(d2,"%d\n%s\t%s\n%s\n", sehir[i].plakaKodu, sehir[i].sehirAdi, komsu[i].komsuSehir, sehir[i].cografiBolge);

        /*
        switch(secim)
        {
        case(1)
        {

            break;
        }
        case(2)
        {

            break;
        }
        case(3)
        {

            break;
        }
        case(4)
        {

            break;
        }
        case(5)
        {

            break;
        }
        case(6)
        {


            fclose(d1);
            fclose(d2);
            printf("Hello world!\n");
            break;
        }

        }
        */

    }
    fclose(d1);
    fclose(d2);
    printf("Hello world!\n");
    return 0;

}



/*
        int ch = fgetc(d1);
        while(ch != EOF)
        {
            //putchar(ch);
            ch = fgetc(d1);
            if(ch=='\n')
            {
                x++;
            }
        }
        */
