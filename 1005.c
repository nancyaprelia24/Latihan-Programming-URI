#include<stdio.h>

int main(){
	float a, b ,i=3.5,j=7.5 ,hasil;
	scanf("%f %f",&a,&b);
	hasil = ((a*i)+(b*j))/(i+j);
	printf("MEDIA = %.5f\n",hasil);
	return 0;
}
