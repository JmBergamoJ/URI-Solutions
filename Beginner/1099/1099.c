#include <stdio.h>

int main (){
	int t,x,y,i,j,s,M,m;
	//input - number of tests
	scanf("%d",&t);
	//input - individual tests
	for(i=0;i<t;i++){
		s=0;
		scanf("%d %d",&x,&y);
		//lowest into m
		m=x>y?(y):(x);
		//highest into M
		M=(x>y)?(x):(y);
		for(j=m+1;j<M;j++){
			//check if number is odd, and adding 'j' into 's'
			if(j%2!=0)
				s=s+j;
		}
		//output
		printf("%d\n",s);
		s=0;
	}
	return 0;
}
