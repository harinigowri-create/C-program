#include<stdio.h>
int main() {
    
    int a,b,i,lcm;
    
    scanf("%d %d",&a,&b);
    
    
    for(int i=1;i <= a*b;i++) {
        if(i%a == 0 && i%b == 0) {
            lcm=i;
            break;
        }
    }
    printf("the lcm of %d and %d is %d\n",a,b,lcm);
    
    return 0;
}