#include<stdio.h>
int min2(int x, int y) {
	if(x<y) {
		return x;
	} else {
		return y;
	}
}
int main()
{
	int a,b,c;
	int min;
	scanf("%d %d %d",&a,&b,&c);
	min=min2(a,b);
	min=min2(min,c);
	printf("min=%d\n",min);
	return 0;
}