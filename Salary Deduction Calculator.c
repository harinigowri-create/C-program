#include <stdio.h>

int main() {
    int salary,absentDays,finalSalary;
    
    scanf("%d",&salary);
    scanf("%d",&absentDays);
    
    finalSalary = salary - (absentDays * 100);
    
    printf("FinalSalary:$%d",finalSalary);
    
    return 0;

}

