#include <stdio.h>

int main(){
	int x,y,s,M,m,j;
	s=0;
	//input
	scanf("%d %d",&x,&y);
	//lowest value goes to m
	m=x>y?(y):(x);
	//highest value goes to M
	M=(x>y)?(x):(y);
	//for every off number, add into 's'
	for(j=m+1;j<M;j++){
		if(j%2!=0)
		s=s+j;
	}
	//output
	printf("%d\n",s);
}
