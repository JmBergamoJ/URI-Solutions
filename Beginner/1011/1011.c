#include <stdio.h>
#include <math.h>
#include <stdlib.h>
 
 #define PI 3.14159
 
int main() {
	double r,res;
	scanf("%lf",&r);
	res=((4/3.0)*PI)*pow(r,3);
	printf("VOLUME = %.3lf\n",res);
    return 0;
}