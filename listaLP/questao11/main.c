#include <stdio.h>
#include <stdlib.h>
float maiori,entre,mulher,homem,geral,bah,olho,azul,verde,cast,cab,lou,castc,preto,idade=0,cod=2;
char sexo='M';

int main(){
    printf("digite a sua idade: ");
    scanf("%f",&idade);
    if (idade>maiori){
        maiori=idade;
    }
    while(idade!=-1){
        printf("digite o seu sexo\n M - Masculino F - Feminino: ");
        scanf("%s",&sexo);

        if (sexo=='M'){
            homem++;
        }else if(sexo=='F'){
            mulher++;
        }
        printf("digite a cor do olho\nAzul-1 Verde-2 Castanho-3: ");
        scanf("%f",&cab);
        if (olho==1){
            azul++;
        }else if(olho==2){
            verde++;
        }else if(olho==3){
            cast++;
        }
        printf("digite a cor do cabelo\nLouro-1 Castalho-2 Preto-3: ");
        scanf("%f",&olho);
        if (olho==1){
            lou++;
        }else if(olho==2){
            castc++;
        }else if(olho==3){
            preto++;
        }
        if ((idade>=18)&&(idade>=35)&&(olho==2)&&(cab==1)){
        entre++;
        }
        printf("digite a sua idade: ");
        scanf("%f",&idade);
        if (idade>maiori){
        maiori=idade;
        }
        geral ++;
    }
    entre=(entre*100)/geral;
    printf("\nmaior idade geral %0.0f\n entre 18 e 35 olhos verdes e loiros %0.1f",maiori,entre);
    return 0;
}
