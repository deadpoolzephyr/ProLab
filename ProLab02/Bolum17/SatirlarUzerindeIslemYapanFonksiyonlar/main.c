#include <stdio.h>
#define MAX_SATIR_UZUNLUGU 100
#define MAX_KELIME_SAYISI 100

int main(void) {
    
    char *dosyaAdi= "kelimeler.txt";
    
    FILE* dosya = NULL;
    
    // Dosyayı okunabilir ve yazılabilir modda açtık
    dosya = fopen(dosyaAdi, "r+");
    
    if(dosya == NULL)
    {
        printf("%s dosyasi bulunamadi\n", dosyaAdi);
        return 0;
    }
    
    printf("\n%s dosyasi okunuyor...\n", dosyaAdi);
    int i = 0;
    char kelimeDizisi[MAX_KELIME_SAYISI][MAX_SATIR_UZUNLUGU];
    while(i<MAX_KELIME_SAYISI &&  !feof(dosya)){
        fgets(kelimeDizisi[i], MAX_SATIR_UZUNLUGU, dosya);
        i++;
    }

    // Dosyanın en basina git
    rewind(dosya);
    
    while(i >= 0){
        fputs(kelimeDizisi[i], dosya);
        i--;
    }
        
    printf("\nDosya Tersine Cevrildi");
    fclose(dosya);
    return 0;
}

