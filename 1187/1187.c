#include <stdio.h>
#include <ctype.h>

int main(){
	float a[12][12],soma,resmedia;
	char c;
	int media=0,x,y;
	scanf("%s", &c);
	toupper(c);
	for(x=0;x<12;x++){
		for(y=0;y<12;y++){
			scanf("%f",&a[x][y]);
		}
	}
	for(x=0;x<6;x++){
		for(y=x+1;y<11-x;y++){
				soma=soma+a[x][y];
				media++;
		}
	}
	resmedia=soma/media;
		if(c=='S')
			printf("%.2lf",soma);
		else
			printf("%.2lf",resmedia);
		return 0;
	}