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
	
	double x[N+1];	
	for (i=0;i<N;i++)
	{
		printf("%d. sayi: ", i+1);
		scanf("%lf", &x[i]);
		printf("--------------\n");
	}
	
	IsSorted(x, N);
	
// Burada ise degerlere gore argumanlar yazildi.

	if(IsSorted(x, N))
	{
		printf("\nGirilen sayilar kucukten buyuge dogru siralidir.");
	}
	else 
	{
		printf("\nGirilen sayilar kucukten buyuge dogru sirali degildir.");
	}
	return 0;
}

// Burada IsSorted fonksiyonunu kullanarak kucukten buyuge olup olmadigini kontrol eden kodu yazdim.

int IsSorted(double x[], int N)
{
 	if(N <= 1)
	 {
 		return 1;
	 }
	if(x[0] < x[1])
	{
	 	return IsSorted(x + 1, N - 1);
	}
	 else 
	 return 0;
}




