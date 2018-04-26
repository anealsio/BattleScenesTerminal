#include <stdio.h>
#include <stdlib.h>

int ca,cb,cc,voto,branco,nulo = 0;
float ele,vence = 0;
char numc;
int main(){
    printf("digite seu voto abestado : ");
    scanf("%d",&voto);
    while(voto!=6){
        system("cls");
        ele++;
        switch(voto){
        case 1:
            ca++;
            break;
        case 2:
            cb++;
            break;
        case 3:
            cc++;
            break;
        case 4 :
            branco++;
            break;
        case 5:
            nulo++;
            break;
        }
        printf("\nRESULTADOS\nCandidato A : %d\nCandidato B : %d\nCandidato C : %d\nVoto BRANCO : %d\nVoto NULO : %d\nNUMERO DE ELEITORES: %0.0f\n",ca,cb,cc,branco,nulo,ele);
        printf("\ndigite seu voto abestado : ");
        scanf("%d",&voto);
    }
    if ((ca>cb)&&(ca>cc)){
        vence=(ca/ele)*100;
        numc = 'A';
        printf("\nRESULTADO FINAL\n Com %0.1f%% dos votos, o Candidato %c GANHOU a eleicao\nVotos NULOS : %d\nVotos BRANCOS : %d\n TOTAL DE ELEITORES: %0.0f\n",vence,numc,nulo,branco,ele);
    }else if ((cb>ca)&&(cb>cc)){
        vence=(cb/ele)*100;
        numc = 'B';
        printf("\nRESULTADO FINAL\n Com %0.1f%% dos votos, o Candidato %c GANHOU a eleicao\nVotos NULOS : %d\nVotos BRANCOS : %d\n TOTAL DE ELEITORES: %0.0f\n",vence,numc,nulo,branco,ele);
    }else if ((cc>cb)&&(cc>ca)){
        vence=(cc/ele)*100;
        numc = 'C';
        printf("\nRESULTADO FINAL\n Com %0.1f%% dos votos, o Candidato %c GANHOU a eleicao\nVotos NULOS : %d\nVotos BRANCOS : %d\n TOTAL DE ELEITORES: %0.0f\n",vence,numc,nulo,branco,ele);
    }else if (cb==cc){
        if (cb>ca){
            printf("Os Candidatos B e C tem o mesmo numero de votos. Havera outra votacao");
        }else{
            vence=(ca/ele)*100;
            numc = 'A';
            printf("\nRESULTADO FINAL\n Com %0.1f%% dos votos, o Candidato %c GANHOU a eleicao\nVotos NULOS : %d\nVotos BRANCOS : %d\n TOTAL DE ELEITORES: %0.0f\n",vence,numc,nulo,branco,ele);
        }
    }else if (ca==cb){
        if (ca>cc){
            printf("Os Candidatos A e B tem o mesmo numero de votos. Havera outra votacao");
        }else{
            vence=(cc/ele)*100;
            numc = 'C';
            printf("\nRESULTADO FINAL\n Com %0.1f%% dos votos, o Candidato %c GANHOU a eleicao\nVotos NULOS : %d\nVotos BRANCOS : %d\n TOTAL DE ELEITORES: %0.0f\n",vence,numc,nulo,branco,ele);
        }
    }else if (ca==cc){
        if (ca>cb){
            printf("Os Candidatos A e C tem o mesmo numero de votos. Havera outra votacao");
        }else{
            vence=(cb/ele)*100;
            numc = 'B';
            printf("\nRESULTADO FINAL\n Com %0.1f%% dos votos, o Candidato %c GANHOU a eleicao\nVotos NULOS : %d\nVotos BRANCOS : %d\n TOTAL DE ELEITORES: %0.0f\n",vence,numc,nulo,branco,ele);
        }
    }
    return 0;
}
