// Duhan SOYSAL - 220223055_3
// --------------------------------------
// Girilen nokta sayilarinca aralarindaki birbirine en uzak olan 2 noktayi bulan ve aralarindaki uzakligi bulup yazan program. (GitHub icin aciklama yapiyorum.) 

#include <stdio.h>
#include <math.h>

// Odevde belirtildiði gibi x ve y tanimlamalarini 'struct' yapisini kullanarak double veri tipi ile tanimladim.

typedef struct Nokta_2D 
{
    double x, y;
};

int main() 
{
// Kullanicidan nokta sayisi istendi ve 2den az olmasi durumunda gerekli uyari yazdirildi.

    int nokta_sayisi; 
    printf("-------------------\n");	  
    printf(" Nokta sayisi: ");
    scanf("%d", &nokta_sayisi);
    printf("\n");    
    
    if (nokta_sayisi<2) 
	{
        printf("En az 2 nokta gereklidir!\n");
        return 1;  
    }
// Kullanicinin girdiði nokta koordinatlari for dongusu ile x ve y seklinde Nokta2D dizisine aktarildi. for dongusu artirdikca degerler de yeni yerine atandi.
    
	struct Nokta_2D Nokta_2D[nokta_sayisi];
    for (int i=0; i<nokta_sayisi; i++) 
	{
        printf("   %d. Nokta: ", i + 1);
        scanf("%lf %lf", &Nokta_2D[i].x, &Nokta_2D[i].y);
    }
// Mesafe hesaplamasi yapmadan once en uzak mesafede olan 2 noktanin tespit edilmesi gerekiyor. Burada bunlari tespit ettik ve en uzak 1&2 nokta degiskenlerine atandi.
    
    double en_uzak_mesafe = 0.0;
    struct Nokta_2D en_uzak_nokta1, en_uzak_nokta2;
    
    for (int i = 0; i < nokta_sayisi; i++) {
        for (int j = i + 1; j < nokta_sayisi; j++) {
            double current_mesafe = mesafe(Nokta_2D[i], Nokta_2D[j]);
            if (current_mesafe > en_uzak_mesafe) {
                en_uzak_mesafe = current_mesafe;
                en_uzak_nokta1 = Nokta_2D[i];
                en_uzak_nokta2 = Nokta_2D[j];
            }
        }
    } 
// Gerekli sonuclar yazdirildi.
    
    printf("\n--------------------------------------------------------------\n");    
    printf("Birbirine en uzak olan noktalar      : (%d, %d) - (%d, %d)\n", (int)en_uzak_nokta1.x, (int)en_uzak_nokta1.y,(int)en_uzak_nokta2.x, (int)en_uzak_nokta2.y);
    printf("--------------------------------------------------------------\n");     
    printf("Noktalar arasindaki Euclid mesafesi  : %.3lf\n", en_uzak_mesafe);
    printf("--------------------------------------------------------------\n");     
    
    return 0;	  	
}


