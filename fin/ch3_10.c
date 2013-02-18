#include <stdio.h>
#define FILENAME "zone1.txt" 
int main(void)
{
	int count=0; double x, y, first, last, sumx=0, sumy=0, sumx2=0, sumxy=0, denominator, m, b;
	FILE *zone;
	zone = fopen(FILENAME,"r"); if(zone == NULL) printf("Error opening input file \n");
		else { while ((fscanf(zone,"%lf %lf",&x,&y)) == 2)
			{ ++count; 
				if(count == 1) first = x; sumx += x; sumy += y; sumx2 += x*x; sumxy += x*y;
			}
			last = x;
			denominator = sumx * sumx - count * sumx2;
			m = (sumx * sumy - count * sumxy)/denominator;
			b = (sumx * sumxy - sumx2 * sumy)/denominator;
			printf("Range of altitudes in km: \n");
			printf("%.2f to %.2f \n\n",first, last);
			printf("Linear model: \n");
			printf("Ozone-mix-ratio = %.2f altitude + %.2f \n",m,b);
			fclose(zone);
		}
	return 0;
}
