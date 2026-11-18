#include <stdio.h>
int main() {    
int a, b;    
scanf("%d %d", &a, &b);    
int total_money = a * 10 + b;    
int ans = total_money / 19;    
printf("%d\n", ans);    
return 0;
}