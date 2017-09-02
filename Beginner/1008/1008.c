#include <stdio.h>
 
int main() {
	int a,b;
	float s,r;
	
	scanf("%d %d %f",&a,&b,&s);
	r=b*s;
	printf("NUMBER = %d\n",a);
	printf("SALARY = U$ %.2f\n",r);
    return 0;
}