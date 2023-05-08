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
	
	if(IsSorted(x, N)){
		printf("\nDizi kucukten buyuge siralidir.");
	}
	else {
		printf("\nDizi kucukten buyuge sirali degildir.");
	}
	return 0;
}

// Burada IsSorted fonksiyonunu kullanarak kucukten buyuge olup olmadigini kontrol eden kodu yazdim.

int IsSorted(double x[], int N)
{
 	if(N <= 1){
 		return 1;
	 }
	 else if(x[0] < x[1]){
	 	return IsSorted(x + 1, N - 1);
	 }
	 else return 0;

}




