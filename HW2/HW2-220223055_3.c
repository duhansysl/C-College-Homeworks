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

    // Dizileri ters �eviriyoruz ki birler basama��ndan ba�layarak toplama yapabilelim.
    reverse_string(sayi1);
    reverse_string(sayi2);

    for (i = 0; i < max_len; i++) {
        int digit1 = i < len1 ? sayi1[i] - '0' : 0; // E�er birinci say�n�n bu basama�� yoksa 0 olarak kabul ediyoruz.
        int digit2 = i < len2 ? sayi2[i] - '0' : 0; // E�er ikinci say�n�n bu basama�� yoksa 0 olarak kabul ediyoruz.

        digit_sum = digit1 + digit2 + carry; // Bu basamaktaki rakamlar� topluyoruz.
        carry = digit_sum / 10; // Carry de�erini hesapl�yoruz.
        digit_sum = digit_sum % 10; // Bu basamaktaki sonu� rakam�n� belirliyoruz.

        toplam[i] = digit_sum + '0'; // Sonu� dizisine rakam� ekliyoruz.
    }

    // E�er en son yap�lan toplamda bir carry de�eri varsa, sonu� dizisinin bir basama��na ekliyoruz.
    if (carry > 0) {
        toplam[max_len] = carry + '0';
        toplam[max_len + 1] = '\0';
    } else {
        toplam[max_len] = '\0';
    }

    // Sonu� dizisini de ters �eviriyoruz
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

	add_numbers(sayi1, sayi2, toplam);
    int r = strlen(toplam) ;
    int s = 0 , y = 0 , z = 0 ; 
    int f1 = strlen(toplam) - strlen(sayi1) ;
    int f2 = strlen(toplam) - strlen(sayi2) ;
    
    // Basamak farklar�n�n say�sal de�erlerini hesaplamak i�in tna�mlamalar yapt�m 
    
    printf("\n") ;
    
    for (y=0 ; y!=f1 ; ++y )
    {
    	printf(" ");
	}
	
    printf("     %*s\n     ", strlen(sayi1), sayi1) ;
    for (z=0 ; z!=f2 ; ++z )
    {
    	printf(" ");
	}
	
    printf("%*s\n", strlen(sayi2), sayi2);
    printf("     +\n     ");
    while (s < r)
    {
    	printf("-") ;
    	++s ;
	}
	printf("\n     ");
    printf("%*s\n", strlen(toplam), toplam);

    return 0;
}
