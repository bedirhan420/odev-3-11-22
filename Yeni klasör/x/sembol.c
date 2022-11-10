#include <stdio.h>

int main(){
    int n,i,j;
    printf("bir n degeri gir:");
    scanf("%d",&n);
    for(i=1;i<n+1;i++){
        for(j=0;j<i;j++){
            printf("#"); 
        
        }
        printf("\n");
       
        
    }


    return 0;
}

