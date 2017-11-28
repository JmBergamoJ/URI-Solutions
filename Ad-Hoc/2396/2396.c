#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

typedef struct{
	int num,tempo;
}carro;

int comp(const void *p1,const void *p2){
	carro *i=(carro *)p1,*j=(carro *)p2;
	if(i->tempo>j->tempo){
		return 1;
	}else if(i->tempo<j->tempo){
		return -1;
	}else{
		return 0;
	}
}

int main(int argc,char *argv[]){
	int n,m,x,y,t,s;
	scanf("%d %d",&n, &m);
	carro carro[n];
	for(x=0;x<n;x++){
		s=0;
		carro[x].num=x+1;	
		for(y=0;y<m;y++){
			scanf("%d",&t);
			s=s+t;
		}
		carro[x].tempo=s;
	}
	qsort(carro,n,sizeof(carro[0]),comp);
	for(x=0;x<3;x++){
		printf("%d\n",carro[x].num);
	}
	return 0;
}