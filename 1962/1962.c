#include <stdio.h>

int main(){
	int x,n,a;
	char acbc[2];
	do{
		scanf("%d",&n);
	}while(n<=0);
	for(x=0;x<n;x++){
		do{
			scanf("%d",&a);
		}while(a<0);
	printf("%ld %s\n",(a>=2015?(a-2015)+1:(2015-a)),a>=2015?("A.C."):("D.C."));
	}
	return 0;
}