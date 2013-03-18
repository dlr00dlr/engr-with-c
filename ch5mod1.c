#include <stdio.h>
int main(void)
{	int k; double x[10]={4,8,-2,16,19,6,-4,0,20,3};
	void sort(double x[], int n);
	
	printf("Original Order \n");
	for (k=0;k<=9;k++) printf ("%.1f ",x[k]);
	printf("\n");
	sort(x,10);
	printf("New Order\n");
	for(k=0;k<=9;k++) printf ("%.1f ",x[k]);
	printf("\n");
	return 0;
}
void sort(double x[], int npts)
{	int k, j, m; double hold;
	for (k=0; k<=npts-2; k++)
	{	m=k; for (j=k+1; j<=npts-1; j++)
			if (x[j] < x[m]) m=j;
		hold = x[m];
		x[m] = x[k];
		x[k] = hold;
	}
	return;
}
