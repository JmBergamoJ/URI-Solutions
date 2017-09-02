#include <stdio.h>
#include <stdlib.h>

int main(){
	int a,b,c,rab,rac;
	scanf("%d %d %d",&a,&b,&c);
	rab=(a+b+abs(a-b))/2;
	rac=(rab+c+abs(rab-c))/2;
	printf("%d eh o maior\n",rac);
	return 0;
}