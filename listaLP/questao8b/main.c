#include <stdio.h>
#include <stdlib.h>
float num,num2=1;
int cont=0;
int main(){
    while(num2<30){
       if(cont==0){
            num=num+(1/num2);
            printf("+1/%0.0f",num2);
            cont=1;
       }else{
            num=num-(1/num2);
            printf("-1/%0.0f",num2);
            cont=0;
       }
       num2=num2+2;
    }
    printf("b)%f",num);
    return 0;
}
