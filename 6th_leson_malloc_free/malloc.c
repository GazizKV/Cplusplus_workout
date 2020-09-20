#include <stdlib.h>
#include <stdio.h>

int main()
{
	for (int i = 0; i < 1000; i++) {
		double *pd = (double *)malloc(10 * sizeof(double));
		if (pd != NULL)
		{
			//adresnaya arifmetika obespechit perebor adresov
			//ot pd do pd + 9*sizeof(double) vkluchitelno
			for(double *p = pd; p < pd + 10; p++)
				*p = 0.0; //zanulayem yacheyku pamaty tipa double
		} else {
			printf("Ne udalos videlit pamat.");
		}
		free(pd);
	}
	return 0;
}
