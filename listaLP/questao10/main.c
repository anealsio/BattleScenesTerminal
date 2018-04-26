#include <stdio.h>
#include <stdlib.h>
float maior,mulher,homem,geral,bah,out,idade=0,cod=2;
char sexo='M';

int main(){
    printf("digite a sua idade: ");
    scanf("%f",&idade);
    if ((idade>18)&&(idade<25)){
        maior++;
    }
    while(idade!=-1){
        printf("digite o seu sexo\n M - Masculino F - Feminino: ");
        scanf("%s",&sexo);
        /*
        while((sexo!='M')||(sexo!='F')){
            printf("resposta invalida");
            printf("digite o seu sexo\n M - Masculino F - Feminino: ");
            scanf("%c",&sexo);
        }
        */
        if (sexo=='M'){
            homem++;
        }else if(sexo=='F'){
            mulher++;
        }
        printf("digite seu codigo de registro\nBahia - 1 Outro - 0: ");
        scanf("%f",&cod);
        /*
        while((out!=1)||(out!=0)){
            printf("resposta invalida");
            printf("digite seu codigo de registro\Bahia - 1 Outro - 0: ");
            scanf("%f",&cod);
        }
        */
        if (cod==1){
            bah++;
        }else if(cod==0){
            out++;
        }
        printf("digite a sua idade: ");
        scanf("%f",&idade);
        if ((idade>18)&&(idade<25)){
            maior++;
        }
        geral ++;
    }
    mulher=(mulher*100)/geral;
    maior=(maior*100)/geral;
    out=(out*100)/geral;
    printf("\nmulheres %0.1f\nmaior de 18 menor de 25 %0.1f\nregistrados fora da bahia %0.1f",mulher,maior,out);
    return 0;
}
