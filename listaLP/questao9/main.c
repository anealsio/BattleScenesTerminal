#include <stdio.h>

//variaveis
char nome[30];
float altura,alturaM,alturaMU,alturaG=0;
float alturaP=3;
int sexo,geral,mulheres,cont=0;
int main(){
    while(cont<5){
    printf("\n\nAperte space e digite seu Nome: ");
    scanf("%c",&nome);
    gets(nome);
    printf("Digite sua altura(EM METROS):");
    scanf("%f",&altura);
    printf("Digite seu Sexo: 1-Masculino 2-Feminino ");
    scanf("%d",&sexo);
    if(altura>alturaM){
        alturaM=altura;
    }  else if (altura<alturaP){
        alturaP=altura;
    }
    if(sexo==2){
        mulheres++;
        alturaMU=alturaMU+altura;
    }
    alturaG=alturaG+altura;
    geral++;
    cont++;
    }
    alturaMU=alturaMU/mulheres;
    alturaG=alturaG/geral;
    printf("\nA maior altura da sala: %0.2f\nA menor altura da sala: %0.2f\nA media de altura das mulheres: %0.2f\nA media de altura da turma: %0.2f",alturaM,alturaP,alturaMU,alturaG);
    //printf("\n%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",nome[0],nome[1],nome[2],nome[3],nome[4],nome[5],nome[6],nome[7],nome[8],nome[9],nome[10],nome[11],nome[12],nome[13],nome[14],nome[15],nome[16],nome[17],nome[18],nome[19],nome[20]);
    return 0;
    }
