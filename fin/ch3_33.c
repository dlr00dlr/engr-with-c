#include <stdio.h>

int main(void)
{	double time,alt,v,a;
	FILE *data;

	data=fopen("rocket3.txt","r");if(data==0)printf("File Not Found\n");
	else
	{	printf("Times where acceleration is only gravity varied by 65 percent\n");
		while((fscanf(data,"%lf %lf %lf %lf",&time,&alt,&v,&a))==4)
		{if(a>=-16.17&&a<=-3.43)printf("%.0f\n",time);}

		fclose(data);
	}
	return 0;
}
