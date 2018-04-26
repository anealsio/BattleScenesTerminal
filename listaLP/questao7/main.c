#include <stdio.h>
int galinhasM,galinhasA,galinhasD,ovos1,ovos2,meses=0;

int main(){
    printf("digite o valor de galinhas atual: ");
    scanf("%d",&galinhasA);
    galinhasM=galinhasA;
    printf("digite o valor de galinhas desejado: ");
    scanf("%d",&galinhasD);
    while (galinhasA<galinhasD){
        meses++;
        if(meses%2){
            if(meses==2){
                ovos2=galinhasA;
                galinhasA=galinhasA-(galinhasA/10);
            }else{
                galinhasA=galinhasA+ovos2;
                ovos2=galinhasA;
                galinhasA=galinhasA-(galinhasA/10);
            }
        }else{
                galinhasA=galinhasA+ovos1;
                ovos1=galinhasA;
                galinhasA=galinhasA-(galinhasA/10);
        }
    }
    printf("\nApartir de %d Galinhas, sao necessarios %d meses para chegar a %d Galinhas",galinhasM,meses,galinhasD);
    return 0;
}
