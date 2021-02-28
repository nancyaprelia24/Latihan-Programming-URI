#include<stdio.h>
#include<math.h>
int main(){
	
	double A,B,C;
	scanf("%lf %lf %lf",&A,&B,&C);
	if(A == 0){
		printf("Impossivel calcular\n");
		return 0;
	}
	double a = (B*B)-(4*A*C);
	
	if(a<0){
		printf("Impossivel calcular\n");
		return 0;	
	}
	double r1 = ((B *-1) + sqrt(a)) / (2 * A);
    double r2 = ((B *-1) - sqrt(a)) / (2 * A);
	printf("R1 = %.5lf\n",r1);
	printf("R2 = %.5lf\n",r2);
	return 0;
}
