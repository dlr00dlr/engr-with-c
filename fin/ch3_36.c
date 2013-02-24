#include <stdio.h>

int main(void)
{	int b, nb=0, nT=0, np=0, nt=0, ignore=0; double t,T,p;
	FILE *data;

	data = fopen("suture1.txt","r");
	if (data==0)printf("File Not Found\n");
	else
	{	while(fscanf(data,"%d%lf%lf%lf",&b,&T,&p,&t)==4)
		{	if(T>150&&T<170&&p>60&&p<70&&t>2&&t<2.5)ignore++;
			if(T<150||T>170)nT++;
			if(p<60||p>70)  np++;
			if(t<2||t>2.5)nt++;
			nb++;	
		}
		fclose(data);
		printf("Number of batches: %d\n",nb);
		printf("Percent of rejects: #/total\n");
		printf("Temp rejects: %f %d/%d\n",100.*nT/(nb-ignore),nT,(nb-ignore));
		printf("Pressure rejects: %f %d/%d\n",100.*np/(nb-ignore),np,(nb-ignore));
		printf("Dwell Time: %f %d/%d\n",100.*nt/(nb-ignore),nt,(nb-ignore));
		printf("%d records invalid",ignore);
	}
	return 0;
}
