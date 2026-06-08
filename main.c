#include <stdio.h>

int main(){
        
    int n1, n2;
    int resultado;
    char operador;
    
    printf ("Digite o primeiro numero ");
    scanf ("%d", &n1);
    
    printf("Digite o operador ");
    scanf (" %c", &operador);
    
    printf("Digite o segundo numero ");
    scanf ("%d", &n2);
    
     switch (operador)
    {
        case '+':
            resultado = n1 + n2;
            printf("O resultado da sua conta foi:\n%d", resultado);
            break;

        case '-':
            resultado = n1 - n2;
            printf("O resultado da sua conta foi:\n%d", resultado);
            break;

        case '*':
            resultado = n1 * n2;
            printf("O resultado da sua conta foi:\n%d", resultado);
            break;

        case '/':
            resultado = n1 / n2;
            printf("O resultado da sua conta foi:\n%d", resultado);
            break;

        default:
            printf("Operador invalido.");
    }

    return 0;
}
    