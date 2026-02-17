#include <stdio.h>
#include<math.h>

int main() {
    int n,amount;
    int total = 0;
    
    scanf("%d",&n);
    
    
    for(int i=0;i<n;i++) {
        scanf("%d",&amount);
        total += amount;
    }
        
        if(total > 10000) {
            printf("Limit Exceeded");
        }
        else {
            printf("Approved");
        }
   
    
    return 0;

}

