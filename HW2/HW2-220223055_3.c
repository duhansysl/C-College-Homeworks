// Duhan SOYSAL - 220223055_3

#include <stdio.h>
#include <stdlib.h>

int main()
{
	
// Burada girilen sayi sayisinin tamsayi veri tipi ile diziye (N) aktarilmasini sagladim.
	
	char sayi1[100000], sayi2[100000];
	int basamak_fark, length1, length2, i;
	printf("---------------------------------------\n");
	printf("Birinci sayi:");
	scanf("%s%n", &sayi1, &length1);
	printf("---------------------------------------\n");
	printf("Ikinci sayi:");
	scanf("%s%n", &sayi2, &length2);
	printf("---------------------------------------\n");
	printf("\n");
	
// Burada basamak farkini hesaplayip sayilari duzgun bicimde alt alta yazdirdim.	
	
	basamak_fark = abs(length1-length2);

	if (length1 < length2)	
	{
		for (i=0;i<basamak_fark;i++)
		{
			printf(" ");
		}
		printf("%s\n", sayi1);
		printf(" %s\n", sayi2);	
	}

	if (length2 < length1)	
	{
		printf("%s\n", sayi1);
		for (i=0;i<basamak_fark;i++)
		{
			printf(" ");
		}
		printf(" %s\n", sayi2);	
	}
	
// Burada birinci ya da ikinci sayilardan hangisinin basamak sayisi fazlaysa onu bulup o kadar cizgi ceken bir fonksiyon yazdim.	
	
	printf("+\n");
	
	if (length1 < length2)
	{
		for (i=0;i<length2;i++)
		{
			printf("-");
		}	
	}
	
		if (length2 < length1)
	{
		for (i=0;i<length1;i++)
		{
			printf("-");
		}	
	}
}

