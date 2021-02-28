#include<stdio.h>

int main(){
	float angka;
	int i ,temp=0;
	for(i=0; i<6; i++){
		scanf("%f", &angka);
		if(angka > 0) temp++;
	}
	printf("%d valores positivos\n", temp);
	return 0;
}
