#include <stdio.h>

int main(void)
{	int stages=0;
	double time,alt,v1,v2,v3,acc;
	FILE *data;

	data=fopen("rocket2.txt","r");if(data==0)printf("File Not Found\n");
	else
	{	fscanf(data,"%lf %lf %lf %lf",&time,&alt,&v1,&acc);
		fscanf(data,"%lf %lf %lf %lf",&time,&alt,&v2,&acc);
		fscanf(data,"%lf %lf %lf %lf",&time,&alt,&v3,&acc);
		while(time!=-99&&alt!=-99&&v3!=-99&&acc!=-99)
		{	if(v2>v1&&v2>v3){printf("%.0f\n",time);stages++;}
			v1=v2;v2=v3;
			fscanf(data,"%lf %lf %lf %lf",&time,&alt,&v3,&acc);
		}
		printf("There are %i stages.\n",stages);
		fclose(data);
	}
	return 0;
}
