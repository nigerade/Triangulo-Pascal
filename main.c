#include <stdio.h> // Biblioteca

int main()
{   
    int N, i, j, k; // Declara Variáveis
    
    printf("Qual o valor de N? "); // Pede para o User digitar um N°
    scanf("%d", &N); // Lê o Valor e Armazena na Var N
    
    int vet[N];
    printf("%5d\n", 1);
    
    for(k=1; k<N; k++) // Loop
    {  
        i=k;
        vet[i] = 1;
        
        printf("%5d", vet[i]);
        i--;
        
        for(j=0; j<k-1; j++) // 2° Loop
        {  
            vet[i] = vet[i] + vet[i-1];
            printf("%5d", vet[i]);
            i--;
        }
        
        vet[i] = 1;

        printf("%5d\n", vet[i]); // Imprime cada Valor dos Loops
    }
    
    return 0; // Encerra o Programa
}



