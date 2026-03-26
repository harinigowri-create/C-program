#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int *start = arr;
    int *end = arr + n - 1;
    for(int i = 0;i < n;i++) {
       scanf("%d",start + i);
    }
    while(start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;
        
        start++;
        end--;
    }

    int *ptr = arr;
    for(int i = 0;i < n;i++) {
       printf("%d ",*(ptr + i));
    }
    return 0;
}