#include<stdio.h>

int main(){
	float a, b ,c ,i=2,j=3,k=5 ,hasil;
	scanf("%f %f %f",&a,&b,&c);
	hasil = ((a*i)+(b*j)+(c*k))/(i+j+k);
	printf("MEDIA = %.1f\n",hasil);
	return 0;
}
