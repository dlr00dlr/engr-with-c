#include <stdio.h>
#define N 500
#define FILENAME "storms1.txt"
int main(void)
{	int k=0, npts, id[N]; double mph[N], max=0;
	FILE *storms;
	int category(double speed);
	storms = fopen(FILENAME,"r");
	if (storms == NULL) printf ("Error opening input file \n");
	else
	{	while ((fscanf(storms,"%d %lf",&id[k],&mph[k]))==2)
		{	if (mph[k] > max) max = mph[k]; k++;}
		npts = k;
		if (max >= 74)
		{	printf("Storms that Qualify as Hurricanes \n");
			printf("Identification Peak wind (mph) Catergory \n");	
		}
		else printf("No hurricanes in the file \n");
		for (k=0;k<=npts-1;k++)
			if (mph[k] >= 74)
			if(mph[k] == max) printf("%d*	%.0f	%d \n",id[k],mph[k],category(mph[k]));
			else printf("%d	%.0f	%d \n",id[k],mph[k],category(mph[k]));
			printf("Lines in data file: %d \n",npts);
		fclose(storms);
	}
	return 0;
}
int category(double speed)
{	int intensity = 1;
	if (speed >= 96) intensity = 2;	
	if (speed >= 111) intensity = 3;	
	if (speed >= 131) intensity = 4;	
	if (speed >= 155) intensity = 5;	
	return intensity;
}
