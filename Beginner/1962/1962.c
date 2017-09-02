#include <stdio.h>

int main(){
	int x,n,a;
	//input - number of tests, 'n' must be higher than 0
	do{
		scanf("%d",&n);
	}while(n<=0);
	//input - individual tests, 'a' must be higher than 0
	for(x=0;x<n;x++){
		do{
			scanf("%d",&a);
		}while(a<0);
	//output, current year = 2015
	printf("%ld %s\n",(a>=2015?(a-2015)+1:(2015-a)),a>=2015?("A.C."):("D.C."));
	}
	return 0;
}
