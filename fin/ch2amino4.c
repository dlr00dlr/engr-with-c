#include <stdio.h>
int main(void)
{
	double O=15.9994,C=12.011,N=14.00674,S=32.066,H=1.00794,mw,avg;
	int nO,nC,nN,nS,nH;

	printf("Enter the number of oxygen, carbon, nitrogen, sulfur and hydrogen atoms:");
	scanf("%i %i %i %i %i",&nO,&nC,&nN,&nS,&nH);
	mw = nO*O + nC*C + nN*N + nS*S + nH*H; 
	avg = mw/(nO+nC+nN+nS+nH);
	printf("The average weight of each atom is:%f\n",avg);
	return 0;
}
