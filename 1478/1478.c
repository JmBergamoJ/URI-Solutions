#include <stdio.h>

int main(){
	int a,x,y;
	do{
		scanf("%d",&a);
		int v[a][a];
		for(x=0;x<a;x++){
			for(y=0;y<a;y++){
				if(x==y)
					v[x][y]=1;
				else{
					v[x][y]=((x>y)?(x-y):(y-x))+1;
				}
			}
		}
		for(x=0;x<a;x++){
			for(y=0;y<a;y++){
				printf("   %d",v[y][x]);
			}
			printf("\n");
		}
		printf("\n");
	}while(a!=0);
	return 0;
}