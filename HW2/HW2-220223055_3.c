// Duhan SOYSAL - 220223055_3

#include <stdio.h>
#include <stdlib.h>

// Burada yazilan sayiyi ters ceviren bir fonksiyon olusturduk. Cunku yazi tersten yaziliyor. Gerektiginde cagrilacak.

void string_reversion(char str[]) {
    int length = strlen(str);
    int i;
    char temp;

    for (i = 0; i < length / 2; i++) {
        temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

// Burada gerekli islemleri yapabilen fonksiyonu olusturduk. Gerektiginde main (ana) fonskiyon tarafindan cagrilacak.

void add_numbers(char sayi1[], char sayi2[], char toplam[]) {
    int len1 = strlen(sayi1);
    int len2 = strlen(sayi2);
    int max_len = len1 > len2 ? len1 : len2;
    int calculation = 0;
    int result = 0;
    int i;

// Burada dizileri birler basamagindan itibaren toplama yapabilmek icin ustte olusturdugumuz fonksiyonla ters yazdirdim.

    string_reversion(sayi1);
    string_reversion(sayi2);

    for (i = 0; i < max_len; i++) {
        int digit1 = i < len1 ? sayi1[i] - '0' : 0; // Burada birinci sayinin basamagi olmadigi takdirde bu kýsmý 0 olarak kabul ettigimizi ifade ettik.
        int digit2 = i < len2 ? sayi2[i] - '0' : 0; // Burada ikinci sayinin basamagi olmadigi takdirde bu kýsmý 0 olarak kabul ettigimizi ifade ettik.

        result = digit1 + digit2 + calculation; // Bu basamaktaki rakamlar toplaniyor.
        calculation = result / 10; // Burada calculation degeri hesaplaniyor
        result = result % 10; // Burada sonuc degeri hesaplaniyor

        toplam[i] = result + '0'; // Toplam dizisine rakam ekleniyor
    }

// En son yapilan toplamda bir calculation degeri varsa, toplam dizisinin bir basamagina ekliyoruz.

    if (calculation > 0) {
        toplam[max_len] = calculation + '0';
        toplam[max_len + 1] = '\0';
    } else {
        toplam[max_len] = '\0';
    }

// Sonuc dizisi ters yazildigi icin ters cevirici fonksiyon ile yazilar ters cevrilmekte.

    string_reversion(toplam);
    string_reversion(sayi1);
    string_reversion(sayi2);
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
    
// Burada basamak farklarini olcup ona gore bosluk ekleyen ya da eklemeyen tespit edici kod yazdim, goruntusel anlamda guzel gozukmesi icin.
    
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
