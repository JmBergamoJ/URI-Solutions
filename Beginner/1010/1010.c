#include <stdio.h>

int main() {
	int p1c,p1b,p2c,p2b,x,y;
	float p1v,p2v,s=0;
	scanf("%d %d %f\n%d %d %f",&p1c,&p1b,&p1v,&p2c,&p2b,&p2v);
		s=0;
		s=p1v*p1b+p2v*p2b;
		printf("VALOR A PAGAR: R$ %.2f\n",s);
    return 0;
}