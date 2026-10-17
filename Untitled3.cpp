#include<stdio.h>
#define PI 3.1416
int main()
{
	float area(float r);
	float s,r;
	printf("r=");
	scanf("%f",&r);
	s=area(r);
	printf("PLACEs=%f\n",s);
	return 0;
}
float area(float a)
{
	float f;
	f=PI*a*a;
	return (f);
}