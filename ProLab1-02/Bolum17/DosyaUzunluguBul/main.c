#include <stdio.h>

int main(void) {
   
    char *dosyaAdi= "dosya.txt";
    FILE* dosya = NULL;
    
    // Dosyayı okunabilir, yazılabilir ve ikili modda açtık
    dosya = fopen(dosyaAdi, "r");
    if(dosya == NULL){
        printf("%s dosyasi bulunamadi\n", dosyaAdi);
        return 0;
    }
    
    //imleci dosyanin en sonuna gotur 
    fseek(dosya, 0, SEEK_END);
    //imlecin kacinci baytta oldugunu ogren
    long int uzunluk = ftell(dosya);
    
    printf("Dosyanin uzunlugu: %ld bayt", uzunluk);
    
    // Dosyayi kapat
    fclose(dosya);
    return 0;
}



