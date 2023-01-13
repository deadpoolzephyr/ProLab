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
    d2 = fopen("cikti.txt", "w");

    int secim;

    begin:
    printf("--------MENU--------\n");
    printf("1=Yeni sehir ekle.\n");
    printf("2=Yeni komsuluk ekle.\n");
    printf("3=Arama yap.\n");
    printf("4=Bolge listele.\n");
    printf("5=Komsu sayisina gore listele.\n");
    printf("6=Cikis.\n");
    printf("Secim yapiniz: ");
    scanf("%d", &secim);

    switch(secim)
        {
        case 1:
        {

            goto begin;
        }
        case 2:
        {

            goto begin;
        }
        case 3:
        {

            goto begin;
        }
        case 4:
        {

            goto begin;
        }
        case 5:
        {

            goto begin;
        }
        case 6:
        {


            fclose(d1);
            fclose(d2);
            printf("Cikis yapildi!\n");
            break;
        }

        }

    char buffer[10240];
    char *token;

    struct sehir *sehir = malloc(sizeof(struct sehir)*6);
    struct komsu *komsu = malloc(sizeof(struct komsu)*6);
    int i = 0;
    if(d1 != NULL)
    {

        char ch = fgetc(d1);
        while(ch != EOF)
        {
            //putchar(ch);
            ch = fgetc(d1);
            if(ch=='\n')
            {
                i++;
            }
            fscanf(d1,"%d,%s,%s,%s", &sehir[i].plakaKodu,sehir[i].sehirAdi,sehir[i].cografiBolge,sehir[i].komsu[i].komsuSehir);
            //i++;
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
            strcpy(sehir[i].komsu[i].komsuSehir,token);

        }

        token=strtok(NULL,",");
        if(token)
        {
            sehir[i].komsu[i].komsuSehir=malloc(sizeof(char *));
            sehir[i].komsu[i].komsuSehir[0]=strdup(token); // Need to index using 0 as komsuSize won't have a value yet
            sehir[i].komsu[i].komsuSize=1;

            token=strtok(NULL,",");
            while(token)
            {
                sehir[i].komsu[i].komsuSehir=realloc(sehir[i].komsu[i].komsuSehir,(sehir[i].komsu[i].komsuSize+1)*sizeof(char *));
                sehir[i].komsu[i].komsuSehir[sehir[i].komsu[i].komsuSize]=strdup(token);
                sehir[i].komsu[i].komsuSize++;

                token=strtok(NULL,",");
            }
        }

        fprintf(d2,"%d\n%s\t%s\n%s\n", sehir[i].plakaKodu, sehir[i].sehirAdi, sehir[i].komsu[i].komsuSehir, sehir[i].cografiBolge);





    }
    fclose(d1);
    fclose(d2);
    printf("Hello world!\n");
    return 0;

}
