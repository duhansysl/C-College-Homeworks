// Duhan SOYSAL - 220223055_2

#include<stdio.h>

int main() {
	long long sonuc, i;
	
// burada sayilar teker teker sayacimiza gore artirildi.

	printf(" - ");
	for (i = 0; i < 1000000; i++) {  
		sonuc = i * i;

// bu kisimda sirasiyla 10, 100, 1000, 10000, 100000, 1000000 sayilariyla mod aldýk ve cikan sonuc kendisi oldugu takdirde bunu ekrana yazdirdik.

		if (sonuc % 10 == i) {    
			printf("%ld\n - ", i);
		}
		else if (sonuc % 100 == i) {
			printf("%ld\n - ", i);
		}
		else if (sonuc % 1000 == i) {
			printf("%ld\n - ", i);
		}
		else if (sonuc % 10000 == i) {
			printf("%ld\n - ", i);
		}
		else if (sonuc % 100000 == i) {
			printf("%ld\n - ", i);
		}
		else if (sonuc % 1000000 == i) {
			printf("%ld\n - ", i);
		}
	
	}
		
	printf("------------------------ ");
	return 0;
}
