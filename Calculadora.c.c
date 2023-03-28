#include <stdio.h>

void main()
{
    int opcao;
    float num1, num2;
    
do {
    printf("\nDigite uma opção: \n1 - Soma\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\n0 - Sair\n\n");
    scanf("%d", &opcao);
    
    if(opcao > 0 && opcao < 5){
            printf("Digite dois valores: ");
            scanf("%f%f",&num1, &num2);
        
        
    }

switch (opcao) {
case 0:
    printf("Saindo...\n");
    break;
    
case 1:
    printf("Somar: %f", num1 + num2);
    break; 
    
case 2:
    printf("Subtrair: %f", num1 - num2);
    break;
    
case 3:
    printf("Multiplicacao: %f", num1 * num2);
    break;
    
case 4:
    printf("Divisao: %f", num1 / num2);
    break;
    
default:
    printf("Opcao inválida.\nDigite outra opcao: ");
    
}
   } while(opcao != 0);
   
}