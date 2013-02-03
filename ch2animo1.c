#include <stdio.h>
int main(void)
{
	double O=15.9994,C=12.011,N=14.00674,S=32.066,H=1.00794,mw;
	int nO,nC,nN,nS,nH;

//	printf("Enter the number of oxygen, carbon, nitrogen, sulfur and hydrogen atoms:");
//	scanf("%i %i %i %i %i ",&nO,&nC,&nN,&nS,&nH);
	nO=2,nC=2,nN=1,nS=0,nH=5;
	mw = nO*O + nC*C + nN*N + nS*S + nH*H; 
	printf("The molecular weight of glycine is:%f",mw);
	return 0;
}
