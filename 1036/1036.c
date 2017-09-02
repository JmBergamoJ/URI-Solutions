#include <stdio.h>
#include <math.h>

int main(){
	float a,b,c,d;
	scanf("%f %f %f",&a,&b,&c);
	d=pow(b,2)-(4*a*c);
	if(d<0||a==0)
		printf("Impossivel calcular\n");
	else{
		printf("R1 = %.5f\nR2 = %.5f\n",(-b+sqrt(d))/(2*a),(-b-sqrt(d))/(2*a));
	}
	return 0;
}