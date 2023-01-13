#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct gates {
    int type;
    int ns;
}gate[10];

int A,B,C,D,E,F;
int Y=0,I=0,S=0;


int main(){
    char komut[100];
    do{
        printf(">");
        gets(komut);

        if(!strcmp(komut,"Y")){
            FILE *fp;
            char birkelime[100];
            char kelimeler[100][100];
            int c,i=0,b=0;
            fp = fopen("devre.txt","r");
            do{
                c = fscanf(fp,"%s",birkelime);
                    if (c != EOF){
                strcpy(kelimeler[i],birkelime);
                i++;
              }
            }while (c != EOF);
            fclose(fp);

            for (int a=0;a<i;a++){
                if(!strcmp(kelimeler[a],".kapi")){
                    if(!strcmp(kelimeler[a+1],"AND")){
                        gate[b].type=1;
                    }
                    if(!strcmp(kelimeler[a+1],"OR")){
                        gate[b].type=2;
                    }
                    if(!strcmp(kelimeler[a+1],"XOR")){
                        gate[b].type=3;
                    }
                    if(!strcmp(kelimeler[a+1],"NOT")){
                        gate[b].type=4;
                    }
                    if(!strcmp(kelimeler[a+1],"NAND")){
                        gate[b].type=5;
                    }
                    if(!strcmp(kelimeler[a+1],"NOR")){
                        gate[b].type=6;
                    }

                    gate[b].ns=atoi(kelimeler[a+6]);
                b++;
                }
           }
            /*for (i=0;i<b;i++){
                printf("%d\t%d\n",gate[i].type,gate[i].ns);
            }*/
            printf("devre.txt yuklendi\n");
            Y++;
        }

        if(!strcmp(komut,"I")){
            FILE *fp;
            int cc,j=0;
            char birkelime[100];
            char kelimeler[100][100];
            fp = fopen("deger.txt","r");
            do{
                cc = fscanf(fp,"%s",birkelime);
                    if (cc != EOF){
                strcpy(kelimeler[j],birkelime);
                j++;
              }
            }while (cc != EOF);
            fclose(fp);

            A=atoi(kelimeler[1]);
            B=atoi(kelimeler[3]);
            C=atoi(kelimeler[5]);
            D=atoi(kelimeler[7]);
            E=atoi(kelimeler[9]);
            F=atoi(kelimeler[11]);

            printf("%d\t%d\t%d\t%d\t%d\t%d\t",A,B,C,D,E,F);
            printf("degerler atandi.\n");
            I++;
        }

        if(!strcmp(komut,"G a")){
            if (Y==1 && I==1){
                printf("a: %d\n",A);
            }else
                printf("Y ve I komutlari daha once calistirilmamistir.\n");
        }

        if(!strcmp(komut,"G b")){
            if (Y==1 && I==1){
                printf("b: %d\n",B);
            }else
                printf("Y ve I komutlari daha once calistirilmamistir.\n");
        }

        if(!strcmp(komut,"G c")){
            if (Y==1 && I==1){
                printf("c: %d\n",C);
            }else
                printf("Y ve I komutlari daha once calistirilmamistir.\n");
        }

        if(!strcmp(komut,"G d")){
            if (Y==1 && I==1){
                printf("d: %d\n",D);
            }else
                printf("Y ve I komutlari daha once calistirilmamistir.\n");
        }

        if(!strcmp(komut,"G e")){
            if (Y==1 && I==1){
                printf("e: %d\n",E);
            }else
                printf("Y ve I komutlari daha once calistirilmamistir.\n");
        }

        if(!strcmp(komut,"G f")){
            if (Y==1 && I==1){
                printf("f: %d\n",F);
            }else
                printf("Y ve I komutlari daha once calistirilmamistir.\n");
        }

        if(!strcmp(komut,"G*")){
            if (Y==1 && I==1){
                printf("a: %d\tb: %d\tc: %d\td: %d\te: %d\tf: %d\n",A,B,C,D,E,F);
            }else
                printf("Y ve I komutlari daha once calistirilmamistir.\n");
        }


    }while (1);






   return 0;
}
