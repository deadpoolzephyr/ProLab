#include <stdio.h>
int main(void) {
    
    FILE* dosya = NULL;

    dosya = fopen("fikra.txt", "r");

    if(dosya == NULL)
    {
        printf("Dosya bulunamadi\n");
    }
    else
    {
        printf("--------------\n");
        printf("Dosya Icerigi:\n");
        printf("--------------\n");
        
        int ch = fgetc(dosya);
        while(ch != EOF){
            putchar(ch);
            ch = fgetc(dosya);
        }

        printf("\n");
        fclose(dosya);
    }

    return 0;
}

