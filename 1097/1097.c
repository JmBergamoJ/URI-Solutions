#include <stdio.h>

int main(){
	int a,b,l=1,c=7;
	for(a=0;a<5;a++){
		for(b=0;b<3;b++){
			printf("I=%d J=%d\n",l,c);
			c--;
		}
		l=l+2;
		c=c+5;
	}
}