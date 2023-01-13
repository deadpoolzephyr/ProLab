#include <stdio.h>

typedef struct {
    char ad[100];
    char yonetmen[50];
    int yapimYili;
}Film;

int main(void) {
    
    Film film = {"Contact", "Robert Zemeckis", 1997};
    char *dosyaAdi= "film.bin";
    FILE* dosya = NULL;
    
    // Dosyayı okunabilir, yazılabilir ve ikili modda açtık
    dosya = fopen(dosyaAdi, "rb+");
    if(dosya == NULL){
        printf("%s dosyasi bulunamadi\n", dosyaAdi);
        return 0;
    }
    fwrite(&film, sizeof(Film), 1, dosya);
    fclose(dosya);
    
    // Dosyaya yazdığımız bilgileri başka bir değişkene okuyalım
    Film film1;
    // Dosyayı tekra acalim
    dosya = fopen(dosyaAdi, "rb+");
    if (dosya == NULL) {
        printf("%s dosyasi bulunamadi\n", dosyaAdi);
        return 0;
    }

    fread(&film1, sizeof(Film), 1, dosya);
    fclose(dosya);
    
    printf("Dosyadan okunan film bilgileri\n");
    printf("------------------------------\n");
    puts(film1.ad);
    puts(film1.yonetmen);
    printf("%d\n", film1.yapimYili);
    return 0;
}



