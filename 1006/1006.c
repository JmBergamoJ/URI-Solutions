#include <stdio.h>
 
 #define W1 2
 #define W2 3
 #define W3 5
int main() {
	float a,b,c;
	//{
		scanf("%f %f %f",&a,&b,&c);
	//}while(a<0||b<0||c<0);
	printf("MEDIA = %.1f\n",((a*W1)+(b*W2)+(c*W3))/(W1+W2+W3));
    return 0;
}