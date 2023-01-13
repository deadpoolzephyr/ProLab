#include <stdio.h>
int main(void) {
    
    char kaynakDosyaAdi[40];
    char hedefDosyaAdi[40];
    
    printf("Kopyalanacak dosyanin adini giriniz:");
    scanf("%s", kaynakDosyaAdi);
    
    
    FILE* kaynakDosya = NULL;
    kaynakDosya = fopen(kaynakDosyaAdi, "r");
    if(kaynakDosya == NULL)
    {
        printf("Kopyalanacak dosya bulunamadi\n");
        return 0;
    }
    
    printf("Yeni dosyanin adini giriniz:");
    scanf("%s", hedefDosyaAdi);
    
    
    FILE* hedefDosya = NULL;
    if((hedefDosya = fopen(hedefDosyaAdi, "w")) != NULL)
    {
        int ch;
        while((ch = fgetc(kaynakDosya)) != EOF){
            fputc(ch, hedefDosya);
        }
        printf("\nKopyalama islemi tamamlandi...\n");
    }
    else
    {
        // Hedef dosya olusturulurken bir hata olusmus ise buraya girer;
        printf("\n%s dosyasi olusturulurken bir hata olustu", hedefDosyaAdi);
    }
    
    // Dosyalari kapatalim
    fclose(kaynakDosya);
    fclose(hedefDosya);
    
    return 0;
}

