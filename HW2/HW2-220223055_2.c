// Duhan SOYSAL - 220223055_2

#include <stdio.h>

int main()
{	

// Burada girilen sayi sayisinin tamsayi veri tipi ile diziye (N) aktarilmasini sagladim.
	
	int i, N;
	printf("---------------------------\n");
	printf("Eleman sayisini giriniz: ");
	scanf("%d", &N);
	printf("---------------------------\n\nSayilari giriniz: \n\n");
	printf("--------------\n");

// Burada ustte girilen sayi kadar deger sorulmasini (N) ve girilen degerlerin scanf fonksiyonu ile double veri tipi ile tarandiktan sonra diziye (i) eklenmesini sagladim.
	
	double x[N];	
	for (i=1;i<=N;i++)
	{
		printf("%d. sayi: ", i);
		scanf("%lf", &x[i]);
		printf("--------------\n");
	}
	
	IsSorted(x, N);
}

// Burada IsSorted fonksiyonunu kullanarak kucukten buyuge olup olmadigini kontrol eden kodu yazdim.

int IsSorted(double x[], int N)
{
 
 	N--;

	if (x[N] > x[N-1])
{
	 	printf("\n-------------------------------------------------\n");
 		printf("Girilen sayilar kucukten buyuge dogru siralidir.");
 		printf("\n-------------------------------------------------\n\n");
}
  	else if (x[N] < x[N-1])
{
		printf("\n-----------------------------------------------------\n");
 		printf("Girilen sayilar kucukten buyuge dogru sirali degildir.");
 		printf("\n-----------------------------------------------------\n\n");
}
	else if (x[N] = x[N-1])
{
		printf("\n-----------------------------------------------------\n");
 		printf("Girilen sayilar kucukten buyuge dogru sirali degildir.");
 		printf("\n-----------------------------------------------------\n\n");
}
	else return IsSorted(x, N);
}


