#include <stdio.h>


int main(){
	int m,n;
	float v,res;
	do{
		scanf("%f %d %d", &v,&m,&n);
		if(v==0&&m==0&&n==0)
		break;
		else{
			if(m%10000==n%10000)
			res=v*3000;
			else if(m%1000==n%1000)
			res=v*500;
			else{
				m=m%100;
				n=n%100;
				if(m==n)
				res=v*50;
				else{
					if(n==0)
					n=100;
					if(m==0)
					m=100;
					m=m+3;
					n=n+3;
					if(n/4==m/4)
					res=v*16;
					else
					res=00;
				}
			}
			printf("%.2f\n",res);
		}
	}while(v!=0&&m!=0&&n!=0);
	return 0;
}	