#include<stdio.h>

int main(){
	float angka , c ,temp=0, count=0;
	int i;
	for(i=0; i<6; i++){
		scanf("%f", &angka);
		if(angka>0)
		{
			count++; //count++
			temp =temp + angka; // temp += angka
			c=temp/count;
		}
	}
	printf("%.f valores positivos\n", count);
	printf("%.1f",c);
	return 0;
}
