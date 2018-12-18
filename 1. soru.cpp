#include "stdio.h"
//1. Soru

main()

{
	int a=1,derinlik,bor_mik;
	float toplam;
	
	
	
	while(a==1)	
	{
		
		printf("\nMaden Derinligi: ");	scanf("%d",&derinlik);
		printf("Kepceye Alinan Bor Miktari: ");	scanf("%d",&bor_mik);
		
		float bor_yuz = (bor_mik*0.04);
		float bor_cik = bor_mik - bor_yuz;
	
	
		printf("Ilk Metreden Sonra Kepcede Kalan Bor: %.2f kg\n",bor_cik);
		derinlik--;
		
		for(derinlik;derinlik>=0;derinlik--)
		{
			bor_cik -= (bor_cik*0.04);
			printf("%d Metre Kala: %.2f kg\n",derinlik,bor_cik);
			
			if (derinlik == 0)
			{
				printf("Yuzeye cikan bor miktari: %.2fkg",bor_cik);
				toplam += bor_cik;
				printf("\nCikarilan Toplam Bor: %.2fkg",toplam);
			
			}
			
			
		}
		
	}
}


