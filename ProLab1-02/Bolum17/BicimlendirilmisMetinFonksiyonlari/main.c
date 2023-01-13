#include <stdio.h>
int main(void) {
    
    char *parametreDosyaAdi= "C:\\islem\\parametre.txt";
    char *sonucDosyaAdi = "C:\\islem\\sonuc.txt";
    
    FILE* parametreDosyasi = NULL;
    parametreDosyasi = fopen(parametreDosyaAdi, "r");
    if(parametreDosyasi == NULL)
    {
        printf("Parametre dosyasi bulunamadi\n");
        return 0;
    }
    
    printf("%s konumundaki parametre dosyasi bulundu.", parametreDosyaAdi);
    // Dosya bulunmuş ise dosyadan parametreleri okuyalim
    int param1, param2;
    char islem;    
    fscanf(parametreDosyasi, "%d %c %d", &param1, &islem, &param2);
    
    FILE* sonucDosyasi = NULL;
    if((sonucDosyasi = fopen(sonucDosyaAdi, "w")) != NULL)
    {
        int sonuc = 0;
        switch(islem){
            case '+':
                sonuc = param1 + param2; 
                break;
            case '-':
                sonuc = param1 - param2;
                break;
            case 'x':
                sonuc = param1 * param2;
                break;
            case '/':
                sonuc = param1 / param2;
                break;
            case '%':
                sonuc = param1 % param2;
                break;                  
        }                
        
        fprintf(sonucDosyasi, "Islem sonucu = %d %c %d = %d", param1, islem, param2, sonuc);        
        printf("\nIslem sonucu %s dosyasina yazildi\n", sonucDosyaAdi);
    }
   
    // Dosyalari kapatalim
    fclose(parametreDosyasi);
    fclose(sonucDosyasi);
    
    return 0;
}

