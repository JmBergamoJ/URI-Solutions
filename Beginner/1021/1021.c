#include <stdio.h>
int main()
{
    double A,D,E;
    scanf ("%lf",&A);
    int N,a,b,c,d,e,f,g,h,i,j,k,l,B,m,n,o,p,q,r,s,t,u;
    N=A;
    b=N%100;
    d=b%50;
    f=d%20;
    h=f%10;
    j=h%5;
    E=A*100;
    B=(int) E;
    m=B%100;
    o=m%50;
    q=o%25;
    s=q%10;
    

    printf ("NOTAS:\n");
    printf ("%d nota(s) de R$ 100.00\n",N/100);
    printf ("%d nota(s) de R$ 50.00\n",b/50);
    printf ("%d nota(s) de R$ 20.00\n",d/20);
    printf ("%d nota(s) de R$ 10.00\n",f/10);
    printf ("%d nota(s) de R$ 5.00\n",h/5);
    printf ("%d nota(s) de R$ 2.00\n",j/2);
    printf ("MOEDAS:\n");
    printf ("%d moeda(s) de R$ 1.00\n",j%2);
    printf ("%d moeda(s) de R$ 0.50\n",m/50);
    printf ("%d moeda(s) de R$ 0.25\n",o/25);
    printf ("%d moeda(s) de R$ 0.10\n",q/10);
    printf ("%d moeda(s) de R$ 0.05\n",t=s/5);
    printf ("%d moeda(s) de R$ 0.01\n",s%5);

    return 0;
}