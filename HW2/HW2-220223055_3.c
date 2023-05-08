// Duhan SOYSAL - 220223055_3

#include <stdio.h>
#include <stdlib.h>

void reverse_string(char str[]) {
    int length = strlen(str);
    int i;
    char temp;

    for (i = 0; i < length / 2; i++) {
        temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

void add_numbers(char sayi1[], char sayi2[], char toplam[]) {
    int len1 = strlen(sayi1);
    int len2 = strlen(sayi2);
    int max_len = len1 > len2 ? len1 : len2;
    int carry = 0;
    int digit_sum = 0;
    int i;

    // Dizileri ters çeviriyoruz ki birler basamaðýndan baþlayarak toplama yapabilelim.
    reverse_string(sayi1);
    reverse_string(sayi2);

    for (i = 0; i < max_len; i++) {
        int digit1 = i < len1 ? sayi1[i] - '0' : 0; // Eðer birinci sayýnýn bu basamaðý yoksa 0 olarak kabul ediyoruz.
        int digit2 = i < len2 ? sayi2[i] - '0' : 0; // Eðer ikinci sayýnýn bu basamaðý yoksa 0 olarak kabul ediyoruz.

        digit_sum = digit1 + digit2 + carry; // Bu basamaktaki rakamlarý topluyoruz.
        carry = digit_sum / 10; // Carry deðerini hesaplýyoruz.
        digit_sum = digit_sum % 10; // Bu basamaktaki sonuç rakamýný belirliyoruz.

        toplam[i] = digit_sum + '0'; // Sonuç dizisine rakamý ekliyoruz.
    }

    // Eðer en son yapýlan toplamda bir carry deðeri varsa, sonuç dizisinin bir basamaðýna ekliyoruz.
    if (carry > 0) {
        toplam[max_len] = carry + '0';
        toplam[max_len + 1] = '\0';
    } else {
        toplam[max_len] = '\0';
    }

    // Sonuç dizisini de ters çeviriyoruz
    reverse_string(toplam);
    reverse_string(sayi1);
    reverse_string(sayi2);
}

int main()
{
	
// Burada girilen sayilarin char veri tipi ile diziye (sayi1&2) aktarilmasini sagladim.

	int basamak_fark, length1, length2, i, j, a, b, sum;
	char sayi1[100000], sayi2[100000], toplam[1000000];
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
		printf("    %s\n", sayi1);
		printf("     %s\n", sayi2);	
	}

	if (length2 < length1)	
	{
		printf("     %s\n", sayi1);
		for (i=0;i<basamak_fark;i++)
		{
			printf(" ");
		}
		printf("      %s\n", sayi2);	
	}
	
	if (length2 == length1)
	{
		for (i=0;i<length1;i++)
		{
			printf("-");
		}	
	}
	
// Burada birinci ya da ikinci sayilardan hangisinin basamak sayisi fazlaysa onu bulup o kadar cizgi ceken bir fonksiyon yazdim.	
	
	printf("     +\n     ");
	
	if (length2 == length1)
	{
		for (i=0;i<length1;i++)
		{
			printf("-");
		}	
	}
	
	add_numbers(sayi1, sayi2, toplam);
    int r = strlen(toplam);
    int s = 0 ;
	
	while (s < r )
    {
    	printf("-") ;
    	++s ;
	}
	printf("\n     ");
    printf("%*s\n", strlen(toplam), toplam);

    return 0;
}
