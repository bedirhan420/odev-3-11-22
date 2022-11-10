#include <stdio.h>

int main(){
    int n,k;
    float sonuc,toplam;
    printf("bir n degeri gir:");
    scanf("%d",&n);
    for(k=1,toplam=0;k<n+1;k++){
        sonuc=((k*k)+1.23)/(k-0.25);
        toplam+=sonuc;
    }
    printf("%f ",toplam);






    return 0;
}