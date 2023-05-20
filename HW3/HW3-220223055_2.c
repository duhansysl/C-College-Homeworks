// Duhan SOYSAL - 220223055_2
// --------------------------------------
// Girilen katsayi degerine gore polinom yazan ve girilen x degerine gore kullaniciya polinomun sonucunu veren program. (GitHub icin aciklama yapiyorum.) 

#include <stdio.h>
#include <math.h>

//
// Giri� Arg�manlar�
//
// p : Katsayilar dizisinin ilk eleman�na i�aret eden pointer
// 
// a0 + a1x + a2x2 + � + aNxN
// 
// Katsay�lar haf�zada s�ras�yla a0, a1,�, aN olacak �ekilde saklanmaktad�r.
//
// N : Polinomun derecesi
//
// x : Polinomun de�erinin hesaplanaca�� nokta 
//
// Geri D�n�� De�eri
//
// a0 + a1x + a2x2 + � + aNxN
//

float PolinomHesapla(float *p, int N, float x) 
{
    int i;
    float sonuc = 0;

    	for (i=0; i<=N; i++)
		{
     	   sonuc += *(p + i) * pow(x, i);
   		}
    
    return sonuc;
}

int main() 
{
    int N, i;
    float x;
    
    printf("---------------------------------------\n");
    printf("Polinomun derecesini girin: ");
    scanf("%d", &N);
    printf("----------------------------------------\n");
  	printf("----\n"); 	    

    float p[N + 1];

    for (i=0; i<=N; i++) 
	{
        printf("%d. Degiskenin katsayisini girin: ", i+1);
        scanf("%f", &p[i]);
  	    printf("----\n");            
    }

    printf("\nPolinomun degerinin hesaplanacagi noktayi girin: ");
    scanf("%f", &x);

    float sonuc = PolinomHesapla(p, N, x);
  	printf("\n-----------------------\n");
    printf("\nSonuc: %.2f\n", sonuc);
  	printf("\n-----------------------\n");    

    return 0;
}
