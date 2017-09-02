#include <stdio.h>

int main(){
	//variable declaration
	int x,d,m,a;
	//input
	scanf("%d",&x);
	//# of years, considering year=365 days
	a=x/365;
	//# of months, considering month=30 days
	m=x%365/30;
	//# of days
	d=x%365%30;
	//start of output
	printf("%d ano(s)\n",a);
	printf("%d mes(es)\n",m);
	printf("%d dia(s)\n",d);
	//end of output
	return 0;
	}	
