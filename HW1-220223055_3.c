// Duhan SOYSAL - 220223055_3

#include <stdio.h>

int main() {
    int birinci_sayi, ikinci_sayi, sonuc_sayi;
   
// burada sayilarin girisinin yapilmasi istendi. 
    
    printf("---------------------- \n");
	printf("Ilk sayiyi giriniz : ");
    scanf("%d", &birinci_sayi);
    printf("---------------------- \n");	   
	printf("Ikinci sayiyi giriniz : ");
	scanf("%d", &ikinci_sayi);  
    sonuc_sayi = 1; 
	
// burada girilen sayilara gore gerekli deyimler yazildi, 1 - 0, 0 - 1 ya da birisi 1'e esitken digeri degilse ve bunun tam tersi seklinde ise ya da buyuk sayilar istendiyse buna gore if denklemi kuruldu ve ona gore islem yapilmasi istendi

	if (ikinci_sayi == 1 && birinci_sayi == 0 || ikinci_sayi == 0 && birinci_sayi == 1 )  {
	    printf("------------------------------------------- \n"); 
        printf("%d sayisi %d sayisinin tamsayi kuvveti degildir.", birinci_sayi, ikinci_sayi);
    }	    
	
	else if (ikinci_sayi == 1 && birinci_sayi != 1)  {
	    printf("------------------------------------------- \n"); 
        printf("%d sayisi %d sayisinin tamsayi kuvveti degildir.", birinci_sayi, ikinci_sayi);
	}		
	
	else if (ikinci_sayi != 1  && birinci_sayi == 1 )  {
	    printf("------------------------------------------- \n"); 
        printf("%d sayisi %d sayisinin tamsayi kuvvetidir.", birinci_sayi, ikinci_sayi);
	}
		
	else {
		
    while (sonuc_sayi < birinci_sayi) {
        sonuc_sayi *= ikinci_sayi;     
    }
    
    if (sonuc_sayi == birinci_sayi) {
    	printf("------------------------------------------- \n");    	
        printf("%d sayisi %d sayisinin tamsayi kuvvetidir.", birinci_sayi, ikinci_sayi);
    } 
	else {
    	printf("------------------------------------------------- \n");     	
        printf("%d sayisi %d sayisinin tamsayi kuvveti degildir.", birinci_sayi, ikinci_sayi);
    }
    
}
    return 1;
}
