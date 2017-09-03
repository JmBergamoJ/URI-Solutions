#include <stdio.h>
#include <math.h>

int main() {
	double x1,x2,y1,y2,res;
	res=0;
	scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);
	res=pow(x2-x1,2)+pow(y2-y1,2);
	res=sqrt(res);
	printf("%.4lf\n",res);
    return 0;
}