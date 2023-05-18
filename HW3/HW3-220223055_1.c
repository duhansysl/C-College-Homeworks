// Duhan SOYSAL - 220223055_1
// --------------------------------------
// Girilen cevaplar ile cevap anahtarini karsilastiran program. (GitHub icin aciklama yapiyorum.) 

#include  <stdio.h>
#include  <string.h>

int main()
{
	
// Burada 100 adetlik bir dizi olusturdum, tanimlamalarimi yaptim ve kullanicidan veri isteyip gets komutu ile dizilere atama yaptim.

    char answers[100], user_input[100];
    int soru_sayi, length = 0, i = 0, tr = 0, emp = 0;
    printf("------------------------------------------------------------------\n");
    printf("Cevap Anahtarini Giriniz        : ");
    gets(answers);
    printf("------------------------------------------------------------------\n");    
    printf("Ogrencinin Cevaplarini Giriniz  : ");
	gets(user_input);
	printf("------------------------------------------------------------------");
	soru_sayi=strlen(answers);
	
// Burada while dongusu ile cevaplar dogru ise dogru cevap sayisini, bossa bos tanimlamasini artiran kodu yazdim. 
// '\0' komutu dizi elemaný bittiginde kodu sonlandiracak.

	while (answers[i] != '\0')
    {
		if (answers[i] == user_input[i] && user_input[i] != ' ')
		{
        	i++;
       		tr++;
		}
		else if (answers[i] != user_input[i] && user_input[i] != ' ')
        {
        	i++;
		}
		else if (user_input[i] == ' ')
		{
			i++;
        	emp++;	
		}
    }
