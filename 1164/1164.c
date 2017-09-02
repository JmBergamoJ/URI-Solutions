#include <stdio.h>

int main(){
	int t,x,s,y,a;
	scanf("%d",&t);
	for(x=0;x<t;x++){
		scanf("%d",&a);
		s=0;
		for(y=1;y<a;y++){
			if(a%y==0){
			s=s+y;
			}
		}
		if(s==a){
			printf("%d eh perfeito\n",a);
		}
		else{
			printf("%d nao eh perfeito\n",a);
		}
	}
	return 0;
}