#include <stdio.h>
#include <stdlib.h>
float precoc,precov,l2,l23,l3=0;
char nome[20];
int cont=1;

int main() {
    printf("\nflag ");
    scanf("%d",&cont);
    if (cont!=-1){
        while (cont!=-1){
            printf("Nome do produto: ");
            scanf("%c",&nome);
            gets(nome);
            printf("\ndigite o preco de compra: ");
            scanf("%f",&precoc);
            printf("\ndigite o preco de venda: ");
            scanf("%f",&precov);
            if (precov-precoc>precoc*0.2){
                l2++;
            } else if ((precov-precoc>=precoc*0.2)&&(precov-precoc<=precoc*0.3)) {
                l23++;
            } else if (precov-precoc<precoc*0.3){
                l3++;
            }
            printf("\nflag ");
            scanf("%d",&cont);
         }
         printf("prudutos com > 20: %0.2f\nprodutos com >=20 <=30: %0.2f\nprodutos com >30: %0.2f",l2,l23,l3);
    } else {
        printf("sem produtos");
    }
 return 0;
}
