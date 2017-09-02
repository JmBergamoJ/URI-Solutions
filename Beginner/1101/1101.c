#include <stdio.h>

int main(){
	//variable declaration
	int x,a,b,s,M,m;
	do{
		//input
		scanf("%d %d",&a,&b);
		//biggest value to M
		M=(a>=b)?(a):(b);
		//lowest value to m
		m=(a>b)?(b):(a);
		//stop processing condition
		if(a<=0||b<=0)
		break;
		//output start
		else{
			s=0;
			for(x=m;x<=M;x++){
				printf("%d ",x);
				s=s+x;
			}
			printf("Sum=%d\n",s);
		}
		//end of output
	}while(a>0||b>0);
	return 0;
}
