#include <stdio.h>
 
int main(){
    int a , b , e ,f ;
    double c , d , hasil;
    scanf("%d%d",&a,&b);
	scanf("%lf",&c);
    scanf("%d%d",&e,&f);
    scanf("%lf",&d);
    hasil=((b*c)+(f*d));
    printf("VALOR A PAGAR: R$ %.2lf\n",hasil);
    return 0;
}
