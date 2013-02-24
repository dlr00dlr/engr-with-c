#include <stdio.h>
int main(void)
{	double t,i,end,alt,v,max_alt,max_t;
	printf("enter launch time (min), interval (min), & end time (min)");scanf("%lf%lf%lf",&t,&i,&end);
	if(t>48*60 || i > 48*60 || end > 48*60)printf("Only times less than 48 hours will work.");
		else
		{	t/=60;i/=60;end/=60;
	       		for (t;t<=end;t+=i)
			{	alt = -.12*t*t*t*t+12*t*t*t+-380*t*t+4100*t+220;
				v   = -.48*t*t*t+36*t*t+-760*t+4100;
				if(alt>max_alt){max_alt = alt; max_t=t;}
				printf("%.0f%20.3f%20.3f\n",t*60,alt,v/3600);
			}
			printf("The max altitude is %.0f at %.2f minutes",max_alt,max_t*60);
		}
	return 0;
}
