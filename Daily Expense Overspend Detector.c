#include <stdio.h>
#include<math.h>

int main() {
    int n,expense;
    int total=0;
    int overspendDays = 0;
    
    scanf("%d",&n);
    
    
    for(int i=0;i<n;i++) {
        scanf("%d",&expense);
        total += expense;
        
        if(expense > 1000) {
            overspendDays++;
        }
    }
    
    printf("Total Expense:%d\n",total);
    printf("OverspendDays:%d\n",overspendDays);
    
   
    
    return 0;

}

