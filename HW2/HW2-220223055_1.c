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
		
	printf("------\n a1:"); 
 		scanf("%lf", &equation_one[0]);    
 	printf("------\n b1:");
 		scanf("%lf", &equation_one[1]);
 	printf("------\n c1:");
   		scanf("%lf", &equation_one[2]);
 	printf("------\n\n");	    		
   		
   	// Burada ise ikinci dizimin elemanlarinin girisini kullanicidan istedim.

	printf("---------------------------------------\n"); 
   	printf("Ikinci dogrunun parametrelerini giriniz:\n");
	printf("---------------------------------------\n\n"); 
   	
	   printf("------\n a1:");
  		scanf("%lf", &equation_two[0]);
	printf("------\n b1:");
  		scanf("%lf", &equation_two[1]);  
  	printf("------\n c1:");
   		scanf("%lf", &equation_two[2]);
	printf("------\n");	  	   	
}
