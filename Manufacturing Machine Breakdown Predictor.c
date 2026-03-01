#include<stdio.h>
int main() {
int n;
scanf("%d",&n);
int arr[n];
int i = 0;
while(i < n) {
scanf("%d",&arr[i]);
i++;
}
int unsafe_count = 0;
int breakdown_index = -1;
int consecutive = 0;
i = 0;
while(i < n) {
if(arr[i] > 70) {
unsafe_count++;
consecutive++;

if(consecutive == 3 && breakdown_index == -1) {
breakdown_index = i - 1;
}
} else {
consecutive = 0;
}
i++;
}
if(breakdown_index != -1)
printf("Breakdown At Reading : %d\n",breakdown_index);
else
printf("Breakdown At Reading : Not Occured\n");

printf("Unsafe Readings : %d\n",unsafe_count);
return 0;
}
