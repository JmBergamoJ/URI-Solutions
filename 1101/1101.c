#include <stdio.h>

int main(){
	int x,a,b,s,M,m;
	do{
		scanf("%d %d",&a,&b);
		M=(a>=b)?(a):(b);
		m=(a>b)?(b):(a);
		if(a<=0||b<=0)
		break;
		else{
			s=0;
			for(x=m;x<=M;x++){
				printf("%d ",x);
				s=s+x;
			}
			printf("Sum=%d\n",s);
		}
	}while(a>0||b>0);
	return 0;
}