// Duhan SOYSAL - 220223055_2
// --------------------------------------
// Girilen katsayi degerine gore polinom yazan ve girilen x degerine gore kullaniciya polinomun sonucunu veren program. (GitHub icin aciklama yapiyorum.) 

#include <stdio.h>
#include <math.h>

//
// Giriþ Argümanlarý
//
// p : Katsayilar dizisinin ilk elemanýna iþaret eden pointer
// 
// a0 + a1x + a2x2 + … + aNxN
// 
// Katsayýlar hafýzada sýrasýyla a0, a1,…, aN olacak þekilde saklanmaktadýr.
//
// N : Polinomun derecesi
//
// x : Polinomun deðerinin hesaplanacaðý nokta 
//
// Geri Dönüþ Deðeri
//
// a0 + a1x + a2x2 + … + aNxN
//

float PolinomHesapla(float *katsayilar, int derece, float x) 
{
    int i;
    float sonuc = 0;

    	for (i=0; i<=derece; i++)
		{
     	   sonuc += *(katsayilar + i) * pow(x, i);
   		}
    
    return sonuc;
}

int main() 
{
    int derece, i;
    float x;
    
    printf("---------------------------------------\n");
    printf("Polinomun derecesini girin: ");
    scanf("%d", &derece);
    printf("----------------------------------------\n");
  	printf("----\n"); 	    

    float katsayilar[derece + 1];

    for (i=0; i<=derece; i++) 
	{
        printf("%d. Degiskenin katsayisini girin: ", i+1);
        scanf("%f", &katsayilar[i]);
  	    printf("----\n");            
    }

    printf("\nPolinomun degerinin hesaplanacagi noktayi girin: ");
    scanf("%f", &x);

    float sonuc = PolinomHesapla(katsayilar, derece, x);
  	printf("\n-----------------------\n");
    printf("\nSonuc: %.2f\n", sonuc);
  	printf("\n-----------------------\n");    

    return 0;
}
