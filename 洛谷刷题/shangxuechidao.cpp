#include <stdio.h>
int main() {    
int s, v;    
scanf("%d %d", &s, &v);    
int walk_time;    
if (s % v == 0) {        
walk_time = s / v;}    
else {walk_time = s / v + 1;}    
int total_time = walk_time + 10;    
int start_time = 480 - total_time;    
if (start_time < 0) {        
start_time = start_time + 1440;    
}    
int h = start_time / 60;    
int m = start_time % 60;    
printf("%02d:%02d\n", h, m);    
return 0;
}