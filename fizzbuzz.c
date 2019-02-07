#include <stdio.h>

int main(){
    
    char fizzbuzz[]="fizzbuzz";

    for (int i=0;i<20;i++){
            if ((i%3==0)||(i %5==0)){
                //want to modify this to be based on meeting conditions at a lower level.
                if (i % 3 == 0){
                    printf("%.4s",fizzbuzz);
                }
                if (i % 5 == 0){
                    printf("%.4s",&fizzbuzz[4]);
                }
            }else{
                printf("%d",i);
            } 
            printf("\n");
            }       
return 0;
}
