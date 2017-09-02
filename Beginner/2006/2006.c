#include <stdio.h>

int main(){
	int t,a,b,c,d,e,s,x;
	do{
		//input tea number
		scanf("%d",&t);
	}while(t<1||t>4);//tea must be between 1 and 4
	do{
		//input for contestants choices
		scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	}while(a<1||a>4||b<1||b>4||c<1||c>4||d<1||d>4||e<1||e>4);//contestant choices must be between 1 and 4
	s=0;
	//add 1 to 's' every time t and contestants choices are matched
	//can also use a for loop to add 1 to 's'
	if(t==a)
		s++;
	if(t==b)
		s++;
	if(t==c)
		s++;
	if(t==d)
		s++;
	if(t==e)
		s++;
	//output
	printf("%d\n",s);
	return 0;
}
