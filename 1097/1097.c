#include <stdio.h>

int main(){
	int a,b,l=1,c=7;
	//repeats until a>=5
	for(a=0;a<5;a++){
		for(b=0;b<3;b++){
			//output while couting down 'c'
			printf("I=%d J=%d\n",l,c);
			c--;
		}
		//add 2 to 'l' and 5 to 'c'
		l=l+2;
		c=c+5;
	}
}
