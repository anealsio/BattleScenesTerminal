#include <stdio.h>

int main (){
int num = 0;
int total = 1;
printf("digite o valor\n");
scanf("%d",&num);
while (num>1){
        total = (num*(num-1))*total;
        num = num - 2;
}
printf("\nesse eh o seu total %d",total);
return 0;
}
