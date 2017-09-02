#include <stdio.h>

int main(){
	int x,n;
	float a,b,c;
	scanf("%d",&n);
	for(x=0;x<n;x++){
		scanf("%f %f %f",&a, &b, &c);
		printf("%.1lf\n",(a*2+b*3+c*5)/10);
	}
	return 0;
}