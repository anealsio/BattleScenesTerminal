#include <stdio.h>
#include <stdlib.h>

int main(){
    float a,b,c,maior,medio,menor;
    int i;
    printf("digite o valor de i: ");
    scanf("%d",&i);
    printf("digite o valor de a: ");
    scanf("%f",&a);
    printf("digite o valor de b: ");
    scanf("%f",&b);
    printf("digite o valor de c: ");
    scanf("%f",&c);
    if ((a>b)&&(b>c)){
        maior=a;medio=b;menor=c;
    } else if ((a>c)&&(c>b)){
        maior=a;medio=c;menor=b;
    } else if ((b>c)&&(c>a)){
        maior=b;medio=c;menor=a;
    } else if ((b>a)&&(a>c)){
        maior=b;medio=a;menor=c;
    } else if ((c>a)&&(a>b)){
        maior=c;medio=a;menor=b;
    } else if ((c>b)&&(b>a)){
        maior=c;medio=b;menor=a;
    }
    switch (i){
    case 1:
        printf("%0.2f - %0.2f - %0.2f", menor,medio,maior);
        break;
    case 2:
        printf("%0.2f - %0.2f - %0.2f", maior,medio,menor);
        break;
    case 3:
        printf("%0.2f - %0.2f - %0.2f", menor,maior,medio);
        break;
    default :
        printf("invalido");
        break;
    }
    return 0;
    }
