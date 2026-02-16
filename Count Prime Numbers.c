#include<stdio.h>
int main() {
    
    int n,i,j, flag,count=0;
    
    scanf("%d",&n);
    
    for(i=2;i<n;i++) {
        flag=1;
        
        for(j=2;j<i/2;j++) {
            
            if(i%j==0);
            flag=0;
        }
        
        if(flag==1) {
            count++;
        }
    }
    printf("%d",count);
    
    return 0;
}