#include<stdio.h>
#include<math.h>
int main(){
	int x,y;
	float a,c,d;
	scanf("%d %d",&x,&y);
	c= (float)y;
	d= (float)x;
	a=(c/12)*d;
	printf("%.3f\n",a);
	return 0;
}
