// Duhan SOYSAL - 220223055_2
// --------------------------------------
// Girilen katsayi degerine gore polinom yazan ve girilen x degerine gore kullaniciya polinomun sonucunu veren program. (GitHub icin aciklama yapiyorum.) 

#include <stdio.h>
#include <math.h>

int main() 
{
    int derece, i;
    float x;

    printf("Polinomun derecesini girin: ");
    scanf("%d", &derece);

    float katsayilar[derece + 1];

    for (i = 0; i <= derece; i++) {
        printf("%d katsayisini girin: ", i+1);
        scanf("%f", &katsayilar[i]);
    }

    printf("x degerini girin: ");
    scanf("%f", &x);

    float sonuc = PolinomHesapla(katsayilar, derece, x);

    printf("Sonuc: %f\n", sonuc);

    return 0;
}
