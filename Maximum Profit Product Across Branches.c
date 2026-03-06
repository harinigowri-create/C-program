#include<stdio.h>
int main() {
    int r,c;
    scanf("%d %d",&r, &c);
    
    int a[r][c];
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            scanf("%d",&a[i][j]);
        }
    }
    int maxproduct = -1000000;
    
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            for(int k=i+1;k<r;k++) {
                for(int l=0;l<c;l++) {
                    int product = a[i][j] * a[k][l];
                    if(product > maxproduct) {
                        maxproduct = product;
                    }
                }
            }
        }
    }
    
    printf("%d",maxproduct);
    
    return 0;
}