#include <stdio.h>
int main(void)
{
	double O=15.9994,C=12.011,N=14.00674,S=32.066,H=1.00794,mw;
	int nO,nC,nN,nS,nH;

//	printf("Enter the number of oxygen, carbon, nitrogen, sulfur and hydrogen atoms:");
//	scanf("%i %i %i %i %i ",&nO,&nC,&nN,&nS,&nH);
	nO=4,nC=5,nN=1,nS=0,nH=8;
	mw = nO*O + nC*C + nN*N + nS*S + nH*H; 
	printf("The molecular weight of glutamic is:%f\n",mw);
	nO=3,nC=5,nN=2,nS=0,nH=10;
	mw = nO*O + nC*C + nN*N + nS*S + nH*H; 
	printf("The molecular weight of glutamine is:%f",mw);
	return 0;
}
