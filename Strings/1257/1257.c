#include <stdio.h>
#include <string.h>

int main() {
	int N,L,S=0,x,y,l,c;
	char s[51];
	scanf("%d",&N);
	for(x=0;x<N;x++){
		scanf("%d",&L);
		for(y=0;y<L;y++){
			scanf("%s",s);
			l=strlen(s);
			for(c=0;c<l;c++){
				S=S+(s[c]-65)+c+y;
			}
		}
		printf("%d\n",S);
		S=0;
	}
    return 0;
}