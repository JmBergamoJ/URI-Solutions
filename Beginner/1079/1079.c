#include <stdio.h>

int main(){
	int x,n;
	float a,b,c;
	//input - number of tests
	scanf("%d",&n);
	//input for individual tests
	for(x=0;x<n;x++){
		scanf("%f %f %f",&a, &b, &c);
		//output, one digit after the decimal point
		printf("%.1f\n",(a*2+b*3+c*5)/10);
	}
	return 0;
}
