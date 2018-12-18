#include "stdio.h"
//2. Soru

main()
{

float a,b;

for (float a=-3.6;a<=6;a=(a+0.4))
	{

	b=(a*a*a)-5*(a*a)+(7*a)-3;
	
	printf("%.1f degeri icin %.2f\n",a,b);
	
	}
	
}
