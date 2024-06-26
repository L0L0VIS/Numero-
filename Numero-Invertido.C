#include <stdio.h>
#include<math.h>

int main()
{
    int numero;
    int n1;
    int n2;
    int contador = 1;
 
    //printf("digita a porra do seu numero ai:    ");
    scanf("%d", &numero);

    n2 = numero;

    while (numero >= 1)
    {
        n1 = (numero % 10);
        printf("%d", n1);
        numero = numero/10;
    }
  
    return 0; 
}
