#include <stdio.h>
int main() {    
int a, b, c;    
scanf("%d %d %d", &a, &b, &c);    
int ans = (a * 20 + b * 30 + c * 50) / 100;    
printf("%d\n", ans);    
return 0;
}