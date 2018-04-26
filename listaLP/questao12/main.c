#include <stdio.h>
#include <stdlib.h>
float a=90000000,b=200000000;
int ano;
int main(){
    while(a<b){
        a=a+a*0.03;
        b=a+b*0.015;
        ano++;
    }
    printf("sao decessarios %d anos",ano);
    return 0;
}
