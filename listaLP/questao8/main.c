#include <stdio.h>
#include <stdlib.h>
float num,num2=1;
int main(){
    while(num2<100){
       num=num+(1/num2);
       printf("+1/%0.0f",num2);
       num2=num2+2;
    }
    printf("a)%f",num);
    return 0;
}
