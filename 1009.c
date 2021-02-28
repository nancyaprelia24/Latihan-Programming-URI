#include <stdio.h>
 
int main(){
	char nama ;
    double c , d , e , hasil;
   	scanf("%s\n",&nama);
    scanf("%lf%lf",&c,&d);
    e= (d*0.15);
    hasil = c + e;
    printf("TOTAL = R$ %.2lf\n",hasil);
    return 0;
}
