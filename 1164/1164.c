#include <stdio.h>

int main(){
	//variable declaration
	int t,x,s,y,a;
	//input - number of tests
	scanf("%d",&t);
	//for loop - individual tests
	for(x=0;x<t;x++){
		//input
		scanf("%d",&a);
		s=0;
		//for loop to check if this is a perfect number
		for(y=1;y<a;y++){
			//NOTE: division between two intergers ALWAYS results in an interger value
			if(a%y==0){
				//add 'y' to 's'
				s=s+y;
			}
		}
		//start of output
		if(s==a){
			printf("%d eh perfeito\n",a);
		}
		else{
			printf("%d nao eh perfeito\n",a);
		}
		//end of output
	}
	return 0;
}
