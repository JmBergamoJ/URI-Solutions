#include <stdio.h>

//defining PI static value
#define PI 3.14159
int main(){
	//variable declaration
	float a,b,c;
	//input
	scanf("%f %f %f",&a,&b,&c);
	
	//start of output, paying close attention to formatting, or else you get "Presentation Error".
	printf("TRIANGULO: %.3f\n",(a*c)/2);
	printf("CIRCULO: %.3f\n",PI*(c*c));
	printf("TRAPEZIO: %.3f\n",(c*(a+b))/2);
	printf("QUADRADO: %.3f\n",b*b);
	printf("RETANGULO: %.3f\n",a*b);
	//end of output
	return 0;
}
