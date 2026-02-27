#include<stdio.h>
int  main() {
    int maxcapacity,n;
    int i = 0;
    int patients;
    int treated=0, rejected=0;
    
    scanf("%d",&maxcapacity);
    scanf("%d",&n);
    
    while(i < n) {
        scanf("%d",&patients);
        
        if(treated + patients <= maxcapacity) {
            treated += patients;
        } 
        else {
            int remaining = maxcapacity - treated;
            
            if(remaining > 0) {
                treated += remaining;
                rejected += patients - remaining;
            } else {
                rejected += patients;
            }
        }
        i++;
    }
    printf("Treated Patients : %d\n",treated);
    printf("Rejected Patients : %d\n",rejected);
    
    return 0;
}