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

double PolinomHesapla(double *p, int N, double x) 
{
    int i;
    double sonuc = 0;

    for (i=0; i<=N; i++)
   		{
    	    sonuc += *(p + i) * pow(x, (double)i);
    	}

    return sonuc;
}

int main() 
{
    int N, i;
    double x;
    
    printf("---------------------------------------\n");
    printf("Polinomun derecesini girin: ");
    scanf("%d", &N);
    printf("----------------------------------------\n");
    printf("----\n"); 	    

    double p[N + 1];

    for (i=0; i<=N; i++) 
    	{
       		printf("%d. Degiskenin katsayisini girin: ", i + 1);
       		scanf("%lf", &p[i]);
       		printf("----\n");            
    	}

    printf("\nPolinomun degerinin hesaplanacagi noktayi girin: ");
    scanf("%lf", &x);

    double sonuc = PolinomHesapla(p, N, x);
    printf("\n-----------------------\n");
    printf("\nSonuc: %.2lf\n", sonuc);
    printf("\n-----------------------\n");    

    return 0;
}
