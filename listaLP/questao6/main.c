#include <stdio.h>

int main (){
int num = 0;
int total = 0;
printf("digite o valor\n");
scanf("%d",&num);
while (num>0){
        total = (num+(num-1))+total;
        num = num - 2;
}
printf("\nesse eh o seu total %d",total);
return 0;
}
