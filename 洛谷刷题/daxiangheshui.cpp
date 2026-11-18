#include <stdio.h>
#include <math.h>
int main() {    
int h, r;    
scanf("%d %d", &h, &r);    
double v = 3.14 * r * r * h;    
int ans = ceil(20000.0 / v);    
printf("%d\n", ans);    
return 0;
}