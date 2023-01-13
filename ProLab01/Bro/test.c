#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z,t;
    char aBas, aYon;
    int harita;
    
    HaritaSecim:
    printf("Harita seciniz (Harita 1 icin 1 - Harita 2 icin 2): \n");
    scanf("%d", &harita);
    
    if(harita==1){
    	printf("Yollarin giris/cikis yonunu belirleyin. Giris icin 1, Cikis icin 2\n\n");
    
    	xSecim:
    	printf("X yolu icin: \n");
    	scanf("%d", &x);
		if(x==1){
			printf("X yolu giristir.\n");
		}
		else if(x==2){
			printf("X yolu cikistir.\n");
		}
		else{
			printf("Hatali giris yaptiniz tekrar deneyin.\n");
			goto xSecim;
		}
		
    	ySecim:
    	printf("Y yolu icin: \n");
    	scanf("%d", &y);
		if(y==1){
			printf("Y yolu giristir.\n");
		}
		else if(y==2){
			printf("Y yolu cikistir.\n");
		}
		else{
			printf("Hatali giris yaptiniz tekrar deneyin.\n");
			goto ySecim;
		}
    
    	zSecim:
    	printf("Z yolu icin: \n");
    	scanf("%d", &z);
		if(z==1){
			printf("Z yolu giristir.\n");
		}
		else if(z==2){
			printf("Z yolu cikistir.\n");
		}
		else{
			printf("Hatali giris yaptiniz tekrar deneyin.\n");
			goto zSecim;
		}
    
    	tSecim:
    	printf("T yolu icin: \n");
    	scanf("%d", &t);
		if(t==1){
			printf("T yolu giristir.\n");
		}
		else if(t==2){
			printf("T yolu cikistir.\n");
		}
		else{
			printf("Hatali giris yaptiniz tekrar deneyin.\n");
			goto tSecim;
		}
    
        printf("\nGiris cikis yollari belirlenmistir.\n");
        printf("Ara caddelerin yonunu belirleyin:\n\n");
    
    	aBasSecim:
    	printf("A yolu icin baslangic noktasi belirleyiniz. (x-t) \n");
    	scanf(" %c", &aBas);
    	
    	if(aBas=='x'){
    	    printf("A yolu icin baslangic noktasi secilmistir.\n");
    	}else if(aBas=='t'){
    	    printf("A yolu icin baslangic noktasi secilmistir.\n");
    	}else{
    	    printf("Hatali giris yaptiniz tekrar deneyin.\n");
    		goto aBasSecim;
    	}
    	
    	aYonSecim:
    	printf("A yolu icin yon belirleyiniz. (x-t) \n");
    	scanf(" %c", &aYon);
    	
    	if(aYon=='x'){
    	    printf("A yolu icin yon secilmistir.\n");
    	}else if(aYon=='t'){
    	    printf("A yolu icin yon secilmistir.\n");
    	}else{
    	    printf("Hatali giris yaptiniz tekrar deneyin.\n");
    		goto aYonSecim;
    	}
    }
    else{
        printf("Hatali giris yaptiniz tekrar deneyin.");
        goto HaritaSecim;
    }

    return 0;
}