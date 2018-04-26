#include <stdio.h>
#include <stdlib.h>
float gramai,grama=0;
int hr,min=0,secs=0;
int main(){
    printf("digite a massa inicial em gramas ");
    scanf("%f",&grama);
    gramai=grama;
    while(grama>0.5){
        grama=grama/2;
        secs=secs+50;
    }
    /*
    while(secs>=3600){
        hr++;
        secs=secs-3600;
    }
    while(secs>=60){
        min++;
        secs=secs-60;
    }
    */
    printf("massa inicial: %0.2f\nmassa final: &0.2f\nTempo ",gramai,grama);
    while(secs>=3600){
        hr++;
        secs=secs-3600;
    }
    while(secs>=60){
        min++;
        secs=secs-60;
    }
    printf("%d hrs\n%d  mins\n%d secs\n",hr,min,secs);
}
