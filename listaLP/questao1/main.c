#include <stdio.h>
#include <stdlib.h>

int main(){
    float nota,cont,peso,totan=0;
    while(cont<3){
        printf("digite o valor da nota: ");
        scanf("%f",&nota);
        if((nota>-1)&&(nota<11)){
            if (nota>=6){
                peso=peso+5;
                totan=totan+nota;
            }else if(nota<6){
                peso=peso+2.5;
                totan=totan+nota;
            }
            cont++;
        }else{
            printf("nota invalida");
        }
    }

    totan=totan/peso;
    printf("\nessa eh a sua media: %f",totan);
    return 0;
}
