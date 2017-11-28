#include <stdio.h>
#include <string.h>

int main() {
	int t,x,y,z,a,b,r,los;
	los=0;
	char p[51][51],op[51],l[51][51];
	int c[51][3],n[51];
	while(scanf("%d",&t)!=EOF){
		
		for(x=0;x<t;x++){
			scanf("%d %d=%d",&c[x][0],&c[x][1],&c[x][2]);
		}
		for(x=0;x<t;x++){
			scanf("%s %d %c",&p[x][0],&n[x],&op[x]);
		}
		for(x=0;x<t;x++){
			if(op[x]=='+'){
				if(c[n[x]-1][0]+c[n[x]-1][1]!=c[n[x]-1][2]){
					los++;
					strcpy(l[x],p[x]);
				}
			}else if(op[x]=='-'){
				if(c[n[x]-1][0]-c[n[x]-1][1]!=c[n[x]-1][2]){
					strcpy(l[x],p[x]);
					los++;
				}
			}else if(op[x]=='*'){
				if(c[n[x]-1][0]*c[n[x]-1][1]!=c[n[x]-1][2]){
					strcpy(l[x],p[x]);
					los++;
				}
			}else if(op[x]=='i'){
				if(c[n[x]-1][0]+c[n[x]-1][1]!=c[n[x]-1][2]&&c[n[x]-1][0]*c[n[x]-1][1]==c[n[x]-1][2]&&c[n[x]-1][0]-c[n[x]-1][1]==c[n[x]-1][2]){
					strcpy(l[x],p[x]);
					los++;
				}
			}
		}
		if(los==0){
			printf("You Shall All Pass!\n");
		}else if(los==t){
			printf("None Shall Pass\n");
		}else{
			for (x=0;x<los;x++) {
				for (y=0;y<los;y++) {
					if (strcmp(l[x], l[y]) > 0){
						char aux[51];
						strcpy(aux, l[x]);
						strcpy(l[y], l[x]);
						strcpy(l[y], aux);
					}
				}
			}
			for(x=0;x<los;x++){
				printf("%s",l[x][0]);
				if(x<los){
					printf(" ");
				}else{
					printf("\n");
				}
			}
		}
	}
	return 0;
}