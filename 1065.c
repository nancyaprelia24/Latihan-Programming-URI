#include<stdio.h>

int main(){
	int angka,i,temp=0;
	for(i=0; i<5; i++){
		scanf("%d", &angka);
		if(angka%2==0)temp++;
	};
	printf("%d valores pares\n", temp);
	return 0;
}
