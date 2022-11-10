#include <stdio.h>

int main(){

    int a,y,m;
    float p;

    printf("Ales puanini giriniz: \n ");
    printf("yabanci dil puanini giriniz: \n");
    printf("mezuniyet ortalamasi puanini giriniz: \n");

    scanf("%d",&a);
    scanf("%d ",&y);
    scanf("%d ",&m);

    p=(a/2)+(y/4)+(m/4);

    printf("ales: %d \n",a);
    printf("yabanci dil: %d \n",y);
    printf("mezuniyet ortalamasi: %d \n",m);
    printf("%f \n",p);
    
    if(p >= 60){
        printf("GECTI");
    }
    else{
        printf("KALDI");
    }
    

return 0;
}