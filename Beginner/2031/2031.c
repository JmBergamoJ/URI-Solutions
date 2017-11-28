#include <stdio.h>
#include <string.h>

int main() {
	int x,N;
	char p1[7],p2[7];
	scanf("%d",&N);
	for(x=0;x<N;x++){
		scanf("%s",p1);
		scanf("%s",p2);
		if(p1[1]=='e' && p2[1]=='e') 
		printf("Sem ganhador\n");
		else if(p1[1]=='t' && p2[1]=='t') 
		printf("Aniquilacao mutua\n");
		else if(p1[1]=='a' && p2[1]=='a') 
		printf("Ambos venceram\n");
		else if(p1[1]=='t' || (p1[1]=='e' && p2[1]=='a'))
		printf("Jogador 1 venceu\n");
		else 
		printf("Jogador 2 venceu\n");
	}
	return 0;
}