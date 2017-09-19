#include <stdio.h>
#include <ctype.h>
#include <string.h>

void clear (void){    
  while ( getchar() != '\n' );
}

int main () {
	int N, pos, max=0, cont[27]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},x,y,z;
	char a[201],c;
	scanf("%d",&N);
	max=0;
	clear();
	for(x=0;x<N;x++){
	max=0;
		for(y=0;y<27;y++){
			cont[y]=0;
		}
		fgets(a,200,stdin);
		for(y=0,pos=strlen(a);y<pos;y++){
		if(a[y]>=65&&a[y]<=90)
			a[y]=a[y]+32;
		}
		for(y=0;a[y]!='\0';y++){
			for(z=0;z<27;z++){
				if(a[y]==z+'a'){
				cont[z]=cont[z]+1;
				}
			}
		}
		for(z=0;z<27;z++){
			if(cont[z]>max){
				max=cont[z];
			}
		}
		for(c='a';c<='z';c++){
			if(cont[c-97]==max)
			printf("%c",c);
		}
		printf("\n");
	}
	return 0;
}