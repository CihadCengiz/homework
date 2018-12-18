#include "stdio.h"
//3. Soru
int main()
{
	float P,K,cekilenKrediTutar=0,bankadaKalan=0,krediFaiz=0;


	printf("Hesaba Yatirilan Para: ");
	scanf("%f", &P);
	printf("Kredi olarak cekilebilecek tutar: %.2f TL\n",(P*1.5));
	printf("Hesaptan cekilen tutar: ");
	scanf("%f", &K);
	
	while(P<K)
	{
		printf("Kredi cekemeden once cekilen para hesaba yatirilan paradan az olmalidir..\n");
		printf("Hesaptan cekilen tutari tekrar giriniz:  ");
		scanf("%f",&K);
	}
	bankadaKalan=P-K; 
	cekilenKrediTutar=(bankadaKalan*1.5); 
	krediFaiz=(cekilenKrediTutar*0.15); 
	printf("Zarar: %.2f\n",krediFaiz);


}
