#include <stdio.h>
#include <stdio.h>

int main()
{
		double p, q, z, x1, x2;
		
		printf("Dieses Programm loest eine quadratische Gleichung !\n x^2 + p * x + q\n");
		printf("Geben sie bitte p und q ein !");

		printf("\nFuer p:\n");
		fflush(stdout);
		scanf("%.2lf", &p);

		printf("\nFuer q:\n");
		fflush(stdout);
		scanf("%.2lf", &q);

		z = p * p / 4.0 - q

		if(z < 0)
		{
			printf("Es gibt keine Loesung\n");
		}
		else if(Z==0)
		{
			printf("Es gibt eine Loesung:\n")
			x1 = -1.0 / 2.0 * p + sqrt(z);
		       	printf("x1 = x2 = %.2lf\n", x1);	

		}
		else
		{
			printf("Es gibt zwei Loesungen:\n");

			x1 = -1.0 / 2.0 * p + sqrt(z);
		      	x2 = -1.0 / 2.0 * p - sqrt(z);
			
			printf("x1 = %.2lf\n x2 = %.2lf\n", x1, x2);	
		}

		return 0;

}
