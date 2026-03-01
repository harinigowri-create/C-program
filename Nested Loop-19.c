#include<stdio.h>
int main() {
       int i,j;
       int total_width = 13;

       for(i = 1; i <= 5; i++) {
               if(i == 5) {
                   for(j = 1; j <= total_width; j++) {
                           printf("*");
                   }
              } else {
                     for(j = 1; j <= i; j++)
                             printf("*");

                    for(j = 1; j <= (total_width - 2 * i); j++)
                            printf(" ");

                   for(j = 1; j <= i; j++)
                           printf("*");
            }
            printf("\n");
      }

  
      for(i = 4; i >= 1; i--) {
              for(j = 1;j <= i; j++)
                     printf("*");

             for(j = 1; j <= (total_width - 2 * i); j++)
                    printf(" ");

            for(j = 1; j <= i; j++)
                    printf("*");

           printf("\n");
      }
return 0;
}
