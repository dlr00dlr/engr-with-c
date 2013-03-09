#include <stdio.h>
#include <stdlib.h>
int main(void)
{	int t=0, k=0; double speed=0, range=0, r_speed=0, length=0;
	double rand_float(double a, double b);
	FILE *data;
	
	data = fopen("wind1.dat","w");
	if (data==NULL)printf("no such file\n");
	else
	{	printf("Enter average wind speed, gust range, and length of the storm in minutes:\n");
		scanf("%lf %lf %lf",&speed,&range,&length); length*=60;
		while(t<=3600)
		{	if(rand()%200==0)for(k=0;k<=length;k+=10)
			{	r_speed = rand_float(speed+10-range,speed+10+range);
				fprintf(data,"%d	%f\n",t,r_speed);
				t+=10;
			}
			r_speed = rand_float(speed-range,speed+range);
			fprintf(data,"%d	%f\n",t,r_speed);
			t+=10;
		}
	}
	fclose(data);
	return 0;	
}
/*---------------------------------*/
double rand_float(double a, double b)
{	return ((double)rand()/RAND_MAX)*(b-a)+a;
}
