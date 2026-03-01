#include<stdio.h>
int main() {
int fuel,n;
scanf("%d",&fuel);
scanf("%d",&n);
int arr[n];
int i = 0;
while(i < n){
scanf("%d",&arr[i]);
i++;
}
int stage = -1;
int wasted = 0;
i = 0;
while(i < n) {
fuel -= arr[i];
if(fuel < 0) {
stage = i + 1;
wasted = -fuel;
break;
}
i++;
}
if(stage != -1)
printf("Emergency Stage : %d\nFuel Wasted : %d", stage, wasted);
else
printf("Emergency Stage : Not Occured\nFuel Wasted : 0");

return 0;
}
