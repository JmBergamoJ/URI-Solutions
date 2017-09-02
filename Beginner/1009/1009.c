#include <stdio.h>

int main() {
	char n[20];
	double s,b;
	gets(n);
	scanf("%lf %lf",&s,&b);
	printf("TOTAL = R$ %.2lf\n",s+(b*0.15));
    return 0;
}