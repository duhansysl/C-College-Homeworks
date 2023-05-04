// Duhan SOYSAL - 220223055_1

#include <stdio.h>

int main()
{
	int yerleskesecim;
	float su_miktar, fatura, kdv = 0.08;
	
	/* KULLANICIDAN YERLESKE TIPININ GIRILMESI ISTENDI */

	printf("------------------------------ \n");	
	printf("Lutfen yerleske tipini seciniz:");
	printf("\n------------------------------");	
	printf("\n 1-) KONUT");
	printf("\n 2-) ISYERI");
	printf("\n 3-) SANAYI");
	printf("\n------------------------------");
	printf("\n Seciminizi giriniz: ");
	scanf("%d", &yerleskesecim);	
	
	/* KULLANICININ SECTIGI YERLESKE TIPINE GORE SWITCH CASE DEYIMLERIYLE GEREKEN ISLEMLER YAPILDI  */	
	
	switch(yerleskesecim){	

case 1:
			printf("\n -------------------------------------------------- \n");	
			printf("\n Metrekup cinsinden kullanilan su miktarini giriniz : ");
			scanf("%f", &su_miktar);
			printf("\n -------------------------------------------------- \n");
				if (su_miktar < 10){
					fatura = ((su_miktar * 3.9) * (1 + kdv));
					printf(" Odenecek su fatura tutari : %.2f TL", fatura);
					printf("\n -------------------------------------------------- \n");
				}
				else if (&su_miktar >= 10){
					fatura = (((su_miktar - 10) * 7.1) + (10 * 3.9)) * (1 + kdv);
			    	printf(" Odenecek su fatura tutari (KDV dahil) : %.2f TL", fatura);
					printf("\n -------------------------------------------------- \n");		
				}
				break;

case 2:
				printf("\n -------------------------------------------------- \n");				
				printf("\n Metrekup cinsinden kullanilan su miktarini giriniz : ");
				scanf("%f", &su_miktar);
				printf("\n -------------------------------------------------- \n");			
				fatura = (su_miktar * 10.9) * (1 + kdv);
				printf(" Odenecek su fatura tutari (KDV dahil) : %.2f TL", fatura);
				printf("\n -------------------------------------------------- \n");		
				break;

case 3:
				printf("\n -------------------------------------------------- \n");			   
			    printf("\n Metrekup cinsinden kullanilan su miktarini giriniz : ");
			    scanf("%f", &su_miktar);
				printf("\n -------------------------------------------------- \n");			    
			    fatura = (su_miktar * 13.1) * (1 + kdv);
				printf(" Odenecek su fatura tutari (KDV dahil) : %.2f TL", fatura);
				printf("\n -------------------------------------------------- \n");		
			    break;
default: 
				printf("Lutfen Girilen Degeri Kontrol Ediniz ! ");
				printf("\n -------------------------------------------------- \n");		
				break;		
												
							
}
	return 0;
}


