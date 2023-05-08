// Duhan SOYSAL - 220223055_1

#include <stdio.h>

void main()
{

	// Burada dizimin tanimlamasini "double" veri tipiyle yaptim.

double equation_one[3], equation_two[3], intersection[2]; 
	
	// Burada ilk dizimin elemanlarinin girisini kullanicidan istedim.

	printf("---------------------------------------\n"); 	
	printf("Ilk dogrunun parametrelerini giriniz:\n");	   
	printf("---------------------------------------\n\n"); 
		
	printf("-------\n x: "); 
 		scanf("%lf", &equation_one[0]);    
 	printf("-------\n y: ");
 		scanf("%lf", &equation_one[1]);
 	printf("--------------\n sabit sayi: ");
   		scanf("%lf", &equation_one[2]);
 	printf("--------------\n\n");	    		
   		
   	// Burada ise ikinci dizimin elemanlarinin girisini kullanicidan istedim.

	printf("---------------------------------------\n"); 
   	printf("Ikinci dogrunun parametrelerini giriniz:\n");
	printf("---------------------------------------\n\n"); 
   	
	   printf("-------\n x: ");
  		scanf("%lf", &equation_two[0]);
	printf("-------\n y: ");
  		scanf("%lf", &equation_two[1]);  
  	printf("--------------\n sabit sayi: ");
   		scanf("%lf", &equation_two[2]);
	printf("--------------\n\n");
	
FindSolution(equation_one, equation_two, intersection); 		  	   	
}

void FindSolution(double line1_values[], double line2_values[], double
intersection_point[]) 
{

double x1, y1, s1, x2, y2, s2, x, y;
	
   x1 = line1_values[0];
   y1 = line1_values[1];
   s1 = line1_values[2];  
   
   x2 = line2_values[0];
   y2 = line2_values[1];
   s2 = line2_values[2];
   
// Burada matematik bilgisi ile islemlerin uygulanis sirasina gore plan olusturdum ve bu planlari isleme doktum
 
 intersection_point[0]=(x1*s2-x2*s1)/(x2*y1-x1*y2);
 intersection_point[1]=(y1*s2-y2*s1)/(y2*x1-y1*x2);
 
 //
 
	printf("%.2lfx + %.2lfy + %.2lf = 0\n", x1 ,y1, s1);
	printf("%.2lfx + %.2lfy + %.2lf = 0\n\n", x2 ,y2, s2);
 
// Burada da denklemlerin katsayilari ayni ve sabit farkli iken gereken islemi koda doktum. 
 
  if (x2/x1==y2/y1 && y2/y1==s2/s1) //
{
 	printf("Verilen dogrular ust uste cakismaktadir.");	
}

// Burada da denklemlerin katsayilari birbirinin kati ise birbirine paralel olacaklari icin buna gore denklemler olusturdum ve if/else yazdim.

 else if (x2/x1==y2/y1 && x2/x1==s2/s1 && y2/y1==s2/s1 || x2/x1==y2/y1) 
{
 	printf("Verilen dogrular birbirine parelel oldugu icin kesismemektedir.");
}
 
// Kesisim noktasi bulundugu takdirde gerekecek olan printf komutunu yazdim. degerleri, degerlerin atandigi intersection_point dizisinden aldim.

 else printf("Verilen dogrular (%.2lf,%.2lf) noktasinda kesismektedir.", intersection_point[1], intersection_point[0]);
}
