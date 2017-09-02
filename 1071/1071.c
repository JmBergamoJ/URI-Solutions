#include <stdio.h>

int main(){
	int x,y,s,M,m,j;
	s=0;
	scanf("%d %d",&x,&y);
	m=x>y?(y):(x);
	M=(x>y)?(x):(y);
	for(j=m+1;j<M;j++){
		if(j%2!=0)
		s=s+j;
	}
	printf("%d\n",s);
}