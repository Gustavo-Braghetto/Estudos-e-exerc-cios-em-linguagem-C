#include <stdio.h>

int main()
{

int numero;
    printf("Digite um numero:");
    scanf("%d",&numero);
    
if(numero>=10 && numero %2==1){
    printf("Numero maior que dez\n");
    printf("Numero impar");
}
   
else if(numero>=10 && numero %2 ==0){
    printf("Numero maior que dez\n");
     printf("Numero par");
}   
else if(numero<10 && numero %2 ==0){
     printf("Numero menor que dez\n");
     printf("Numero par");
}
else{
     printf("Numero menor que dez\n");
     printf("Numero impar");
}
}
