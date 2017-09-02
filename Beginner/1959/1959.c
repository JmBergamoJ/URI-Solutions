#include <stdio.h>

int main(){
	//NOTE: 'unsigned'= no negative values.
	unsigned long int p,n,l;
	//input
	scanf("%d %d",&n,&l);
	p=n*l;
	//output
	printf("%lu\n",p);
	return 0;
}
