#include <stdio.h>
#include <string.h>

int main() {
	char p[51];
	int x,tam;
	while(fgets(p,sizeof(p),stdin)!=NULL){
		for(x=0,tam=strlen(p);x<tam;x++){
			if(p[x]>=65&&p[x]<=90){
				if(p[x]-13<65){
					p[x]=p[x]+26;
				}
				p[x]=p[x]-13;
			}else if(p[x]>=97&&p[x]<=122){
				if(p[x]-13<97){
					p[x]=p[x]+26;
				}
				p[x]=p[x]-13;
			}
			printf("%c",p[x]);
		}
	}
	return 0;
}