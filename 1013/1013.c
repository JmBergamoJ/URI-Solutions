#include <stdio.h>
#include <stdlib.h>

int main(){
	//variable declaration
	int a,b,c,rab,rac;
	//input
	scanf("%d %d %d",&a,&b,&c);
	//applying "The Greatest" formula between a and b. NOTE: function abs() comes from stdlib.h library
	rab=(a+b+abs(a-b))/2;
	//aplying "The Greatest" formula between the greatest from a and b, and c
	rac=(rab+c+abs(rab-c))/2;
	//output
	printf("%d eh o maior\n",rac);
	return 0;
}
