// Duhan SOYSAL - 220223055_3

#include <stdio.h>
#include <stdlib.h>

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
		printf("     %s\n", sayi1);
		printf("      %s\n", sayi2);	
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
	
// Burada birinci ya da ikinci sayilardan hangisinin basamak sayisi fazlaysa onu bulup o kadar cizgi ceken bir fonksiyon yazdim.	
	
	printf("     +\n     ");
	
	if (length1 < length2)
	{
		for (i=0;i<length2;i++)
		{
			printf("-");
		}	
	}
	
	if (length2 < length1)
	{
		for (i=0;i<length1;i++)
		{
			printf("-");
		}	
	}
	
	if (length2 == length1)
	{
		for (i=0;i<length1;i++)
		{
			printf("-");
		}	
	}


///////////////////////////////////////////////////////////

	printf("\n     ");	
	j=length1;
	
while(length1>0)
{
	
	a=char_to_int(sayi2[length1-basamak_fark]);
	b=char_to_int(sayi1[length1]);
    sum=(int)a+b;
    
	if (sum>=10)
	
	{
	toplam[length1]=(sum%10);
	sayi2[length1-basamak_fark-1]+=1;
    }
    
    else 
    {
    	toplam[length1]=sum;
    }
     
	length1--;
 	
}

 	for(j;j>=0;j--)
 {
 	printf("%d",toplam[j]);
 }

}

int char_to_int (int ascii)
{
	int sayi;
	
	switch(ascii)
	{
	   case 48:
	   sayi=0;
	   break;
	   case 49:
	   sayi=1;
	   break;
	   case 50:
	   sayi=2;
	   break;
	   case 51:
	   sayi=3;
	   break;
	   case 52:
	   sayi=4;
	   break;
	   case 53:
	   sayi=5;
	   break;
	   case 54:
	   sayi=6;
	   break;
	   case 55:
	   sayi=7;
	   break;
	   case 56:
	   sayi=8;
	   break;
	   case 57:
	   sayi=9;
	   break;
}
	   
	   return sayi;
	
	
}
