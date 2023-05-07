// Duhan SOYSAL - 220223055_1

#include <stdio.h>

void main()
{

	// Burada dizimin tanimlamasini "double" veri tipiyle yaptim.

double equation_one[3], equation_two[3], intersection[2]; 
	
	// Burada ilk dizimin elemanlarinin girisini kullanicidan istedim.
	
	printf("Ilk dogrunun parametrelerini giriniz:\n");	   
  
	printf("a1:"); 
 		scanf("%lf", &equation_one[0]);    
 	printf("b1:");
 		scanf("%lf", &equation_one[1]);
 	printf("c1:");
   		scanf("%lf", &equation_one[2]);
   		
   	// Burada ise ikinci dizimin elemanlarinin girisini kullanicidan istedim.
   
   	printf("Ikinci dogrunun parametrelerini giriniz:\n");
   	
   	printf("a2:");
  		scanf("%lf", &equation_two[0]);
	printf("b2:");
  		scanf("%lf", &equation_two[1]);  
  	printf("c2:");
   		scanf("%lf", &equation_two[2]);		
}
