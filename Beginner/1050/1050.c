#include <stdio.h>

int main(){
	int ddd;
	//input
	scanf("%d",&ddd);
	//switch..case for ddd
	//start of output
	switch(ddd){
		case 11:
			printf("Sao Paulo");
			break;
		case 19:
			printf("Campinas");
			break;
		case 21:
			printf("Rio de Janeiro");
			break;
		case 27:
			printf("Vitoria");
			break;
		case 31:
			printf("Belo Horizonte");
			break;
		case 32:
			printf("Juiz de Fora");
			break;
		case 61:
			printf("Brasilia");
			break;
		case 71:
			printf("Salvador");
			break;
		default:
			printf("DDD nao cadastrado");
	}
	printf("\n");
	//end of output
	return 0;
}
