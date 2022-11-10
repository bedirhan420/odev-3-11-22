#include <stdio.h>

int main(){
    int y;
    float k,b,vki;

    printf("yas giriniz: \n");
    printf("kilo giriniz: \n");
    printf("boy  giriniz: \n");
    
     scanf("%d ",&y);
     scanf("%f",&k);
     scanf("%f",&b);

    
    vki=k/(b*b);

    printf("yas: %d \n",y);
    printf("kilo: %f \n",k);
    printf("boy: %f \n",b);
    
    printf("vücüt kitle indexi: %f \n",vki);


    if( ((13<=y) && (y<=17)) && ((18.5<=vki) && (vki<=24.99)) ){
        printf("KABUL EDILDI");
    }
         

    else{
        printf("KABUL EDILMEDI");
    }
    




    return 0;
}