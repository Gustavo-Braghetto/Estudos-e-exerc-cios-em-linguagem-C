#include <stdio.h>

int main()
{
    int num1;
    int num2;
    int num3;
    
    char conceito;
    
    printf("Digite a Primeira medida: ");
    scanf("%d", &num1);
    printf("Digite a Segunda medida: ");
    scanf("%d", &num2);
    printf("Digite a Terceira medida: ");
    scanf("%d", &num3);
    
    if( num1 == num2 && num2 ==num3 && num1 == num3){
        conceito = 'A';
        
    }else if(num1 != num2 && num2 != num3 && num1 != num3){
        conceito = 'C';
    }else{
        conceito = 'B';
    }
    
    switch(conceito){
        case 'A':
        printf("O Triangulo é Equilatero.");
        break;
        
        case 'B':
        printf("O Triangulo é Isosceles.");
        break;
        
        case 'C':
        printf("O Triangulo é Escaleno");
        break;
    }
    }
