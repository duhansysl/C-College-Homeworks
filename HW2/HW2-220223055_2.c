// Duhan SOYSAL - 220223055_2

#include <stdio.h>

int main()
{	

// Burada girilen sayi sayisinin tamsayi veri tipi ile diziye (N) aktarilmasini sagladim.
	
	int i, N;
	printf("Eleman sayisini giriniz: ");
	scanf("%d", &N);

// Burada ustte girilen sayi kadar deger sorulmasini ve girilen degerlerin scanf fonksiyonu ile double veri tipi ile tarandiktan sonra diziye (i) eklenmesini sagladim.
	
	double x[N];	
	for (i=1;i<=N;i++)
	{
		printf("%d. sayi: ", i);
		scanf("%lf", &x[i]);
	}
}


