#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int *ptr = arr;
    int sum = 0;
    for(int i = 0;i < n;i++) {
        scanf("%d",ptr + i);
    }
    for(int i = 0;i < n;i++) {
        sum += *ptr;
        ptr++;
    }
    printf("%d",sum);
    return 0;
}