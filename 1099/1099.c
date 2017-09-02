#include <stdio.h>

int main (){
	int t,x,y,i,j,s,M,m;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		s=0;
		scanf("%d %d",&x,&y);
		m=x>y?(y):(x);
		M=(x>y)?(x):(y);
		for(j=m+1;j<M;j++){
			if(j%2!=0)
			s=s+j;
		}
		printf("%d\n",s);
		s=0;
	}
	return 0;
}
